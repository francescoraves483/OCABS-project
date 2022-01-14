/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "ASNfiles/ETSI CAM v1.4.1enh.asn"
 */

#ifndef	_CamParameters_H_
#define	_CamParameters_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BasicContainer.h"
#include "HighFrequencyContainer.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LowFrequencyContainer;
struct SpecialVehicleContainer;

/* CamParameters */
typedef struct CamParameters {
	BasicContainer_t	 basicContainer;
	HighFrequencyContainer_t	 highFrequencyContainer;
	struct LowFrequencyContainer	*lowFrequencyContainer	/* OPTIONAL */;
	struct SpecialVehicleContainer	*specialVehicleContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CamParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CamParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_CamParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_CamParameters_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LowFrequencyContainer.h"
#include "SpecialVehicleContainer.h"

#endif	/* _CamParameters_H_ */
#include "asn_internal.h"
