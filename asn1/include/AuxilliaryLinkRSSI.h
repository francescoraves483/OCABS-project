/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "ASNfiles/ETSI CAM v1.4.1enh.asn"
 */

#ifndef	_AuxilliaryLinkRSSI_H_
#define	_AuxilliaryLinkRSSI_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AuxilliaryLinkRSSI {
	AuxilliaryLinkRSSI_unavailable	= -8000000
} e_AuxilliaryLinkRSSI;

/* AuxilliaryLinkRSSI */
typedef long	 AuxilliaryLinkRSSI_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AuxilliaryLinkRSSI_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AuxilliaryLinkRSSI;
asn_struct_free_f AuxilliaryLinkRSSI_free;
asn_struct_print_f AuxilliaryLinkRSSI_print;
asn_constr_check_f AuxilliaryLinkRSSI_constraint;
ber_type_decoder_f AuxilliaryLinkRSSI_decode_ber;
der_type_encoder_f AuxilliaryLinkRSSI_encode_der;
xer_type_decoder_f AuxilliaryLinkRSSI_decode_xer;
xer_type_encoder_f AuxilliaryLinkRSSI_encode_xer;
oer_type_decoder_f AuxilliaryLinkRSSI_decode_oer;
oer_type_encoder_f AuxilliaryLinkRSSI_encode_oer;
per_type_decoder_f AuxilliaryLinkRSSI_decode_uper;
per_type_encoder_f AuxilliaryLinkRSSI_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AuxilliaryLinkRSSI_H_ */
#include "asn_internal.h"
