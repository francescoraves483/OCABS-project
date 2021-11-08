#ifndef VDPGPSC_H
#define VDPGPSC_H

#include <gps.h>
#include <string>
#include "asn_utils.h"
#include "CAM.h"

template <class V = int, class C = int>
class VDPValueConfidence
{
	private:
		V m_value;
		C m_confidence;

	public:
		VDPValueConfidence() {}
		VDPValueConfidence(V value,C confidence):
		m_value(value), m_confidence(confidence) {}

		V getValue() {return m_value;}
		C getConfidence() {return m_confidence;}
		void setValue(V value) {m_value=value;}
		void setConfidence(C confidence) {m_confidence=confidence;}
};

class VDPGPSClient {
	public:
		typedef struct VDP_PosConfidenceEllipse {
			long semiMajorConfidence;
			long semiMinorConfidence;
			long semiMajorOrientation;
		} VDP_PosConfidenceEllipse_t;

		typedef struct CAM_mandatory_data {
			bool avail;
	        VDPValueConfidence<> speed;
	        long longitude;
	        long latitude;
	        VDPValueConfidence<> altitude;
	        VDP_PosConfidenceEllipse_t posConfidenceEllipse;
	        VDPValueConfidence<> longAcceleration;
	        VDPValueConfidence<> heading;
	        int driveDirection; // enum
	        VDPValueConfidence<> curvature;
	        int curvature_calculation_mode; // enum
	        VDPValueConfidence<long,long> VehicleLength;
	        int VehicleWidth;
	        VDPValueConfidence<> yawRate;
      	} CAM_mandatory_data_t;

		VDPGPSClient(std::string server, long port) :
			m_server(server), m_port(port) {
				VDPGPSClient();
		};

		// The constructor will also set up the connection to the GNSS device via gps_open() and gps_stream()
		VDPGPSClient();

		// The connection to the GNSS device is terminated when the object is destroyed
		~VDPGPSClient();

		// Function to retrieve the mandatory data for CAM messages
		// For the time being, it fills only the main data needed to enable basic V2X applications
		// It will be updated in the future to fill in more fields of CAM_mandatory_data_t with available information from the GNSS device
		CAM_mandatory_data_t getCAMMandatoryData();

		void setFixedVehicleLength(VDPValueConfidence<long,long> vehicle_length) {
			m_vehicle_length=vehicle_length;

			// ETSI TS 102 894-2 V1.2.1 - A.92 (Length greater than 102,2 m should be set to 102,2 m)
			if(m_vehicle_length.getValue ()>1022) {
				m_vehicle_length.setValue (1022);
	      	}
		}

		void setFixedVehicleWidth(long vehicle_width) {
			m_vehicle_width=vehicle_width;

			// ETSI TS 102 894-2 V1.2.1 - A.95 (Width greater than 6,1 m should be set to 6,1 m)
			if(m_vehicle_width>61) {
				m_vehicle_width=61;
			}
		}
	private:
		std::string m_server="localhost";
		long m_port=3000;
		struct gps_data_t m_gps_data;

		// Length and width of the vehicle. Must be inserted by the user when creating the object.
		VDPValueConfidence<long,long> m_vehicle_length;
		long m_vehicle_width=VehicleWidth_unavailable;
};

#endif // VDPGPSC_H