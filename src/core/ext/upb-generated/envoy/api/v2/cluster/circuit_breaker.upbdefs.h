/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/cluster/circuit_breaker.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_CLUSTER_CIRCUIT_BREAKER_PROTO_UPBDEFS_H_
#define ENVOY_API_V2_CLUSTER_CIRCUIT_BREAKER_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern upb_def_init envoy_api_v2_cluster_circuit_breaker_proto_upbdefinit;

UPB_INLINE const upb_msgdef *envoy_api_v2_cluster_CircuitBreakers_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_cluster_circuit_breaker_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.cluster.CircuitBreakers");
}

UPB_INLINE const upb_msgdef *envoy_api_v2_cluster_CircuitBreakers_Thresholds_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_cluster_circuit_breaker_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.cluster.CircuitBreakers.Thresholds");
}

UPB_INLINE const upb_msgdef *envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_cluster_circuit_breaker_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.cluster.CircuitBreakers.Thresholds.RetryBudget");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_API_V2_CLUSTER_CIRCUIT_BREAKER_PROTO_UPBDEFS_H_ */
