/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "ASNfiles/ETSI CAM v1.4.1enh.asn"
 */

#ifndef	_CoopAwarenessEnhanced_H_
#define	_CoopAwarenessEnhanced_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GenerationDeltaTime.h"
#include "CamParametersEnhanced.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CoopAwarenessEnhanced */
typedef struct CoopAwarenessEnhanced {
	GenerationDeltaTime_t	 generationDeltaTime;
	CamParametersEnhanced_t	 camParameters;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CoopAwarenessEnhanced_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CoopAwarenessEnhanced;
extern asn_SEQUENCE_specifics_t asn_SPC_CoopAwarenessEnhanced_specs_1;
extern asn_TYPE_member_t asn_MBR_CoopAwarenessEnhanced_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CoopAwarenessEnhanced_H_ */
#include "asn_internal.h"
