/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_MBCM_MULTICAST_H
#define BCMINT_LTSW_MBCM_MULTICAST_H

#include <bcm/types.h>
#include <bcm/multicast.h>

#include <bcm_int/ltsw/multicast_int.h>

#include <sal/sal_types.h>

/*!
 * \brief Initialize MULTICAST module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_init_f)(int unit);

/*!
 * \brief De-initialize MULTICAST module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_detach_f)(int unit);

/*!
 * \brief Get the public info of MULTICAST module.
 *
 * \param [in] unit Unit Number.
 * \param [out] mc_pub Returned mc public info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_pub_info_get_f)(
    int unit,
    bcmint_multicast_pub_info_t *mc_pub);

/*!
 * \brief Create a L2 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l2mc_id L2 multicast group id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_l2_grp_create_f)(
    int unit,
    uint32_t l2mc_id);

/*!
 * \brief Destroy a L2 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l2mc_id L2 multicast group id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_l2_grp_destroy_f)(
    int unit,
    uint32_t l2mc_id);

/*!
 * \brief Update a L2 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l2mc_id L2 multicast group id.
 * \param [in] opcode Operation code of update.
 * \param [in] port_array Port_array of this operation.
 * \param [in] port_count Count of ports.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_l2_grp_update_f)(
    int unit,
    uint32_t l2mc_id,
    bcmint_multicast_l2_grp_op_code_t opcode,
    bcm_port_t *port_array,
    uint32_t port_count);

/*!
 * \brief Get egress encap_ids of a L2 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l2mc_id L2 multicast group id.
 * \param [in] port_size Maxium mumber of GPORTS in this group.
 * \param [out] port_array Returned egress ports of this group.
 * \param [out] encap_id_array Returned list of encap_id.
 * \param [out] port_count Returned ports count.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_l2_egress_get_f)(
    int unit,
    uint32_t l2mc_id,
    int port_size,
    bcm_gport_t *port_array,
    bcm_if_t *encap_id_array,
    int *port_count);

/*!
 * \brief Create a L3 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l3mc_id L3 multicast group id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_l3_grp_create_f)(
    int unit,
    uint32_t l3mc_id);

/*!
 * \brief Destroy a L3 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l3mc_id L3 multicast group id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_l3_grp_destroy_f)(
    int unit,
    uint32_t l3mc_id);

/*!
 * \brief Update a L3 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l3mc_id L3 multicast group id.
 * \param [in] opcode Operation code of update.
 * \param [in] port Port of this operation.
 * \param [in] encap_id_array Encap_id array of the given port.
 * \param [in] encap_count Count of encap_id_array.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_l3_grp_update_f)(
    int unit,
    uint32_t l3mc_id,
    bcmint_multicast_l3_grp_op_code_t opcode,
    bcm_port_t port,
    bcm_if_t *encap_id_array,
    uint32_t encap_count);

/*!
 * \brief Get egress encap_ids of a L3 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l3mc_id L3 multicast group id.
 * \param [in] port_size Maxium mumber of GPORTS in this group.
 * \param [out] port_array Returned egress ports of this group.
 * \param [out] encap_id_array Returned list of encap_id.
 * \param [out] port_count Returned ports count.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_l3_egress_get_f)(
    int unit,
    uint32_t l3mc_id,
    int port_size,
    bcm_gport_t *port_array,
    bcm_if_t *encap_id_array,
    int *port_count);

/*!
 * \brief Create a multicast encap_id based on encapsulation info.
 *
 * \param [in] unit Unit Number.
 * \param [in] mc_encap Multicast encapsulation info.
 * \param [out] encap_id Returned encap_id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_encap_create_f)(
    int unit,
    bcm_multicast_encap_t *mc_encap,
    bcm_if_t *encap_id);

/*!
 * \brief Destroy a multicast encap_id.
 *
 * \param [in] unit Unit Number.
 * \param [in] encap_id Multicast encap_id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_encap_destroy_f)(
    int unit,
    bcm_if_t encap_id);

/*!
 * \brief Get multicast encapsulation info from encap_id.
 *
 * \param [in] unit Unit Number.
 * \param [in] encap_id Multicast encap_id.
 * \param [out] mc_encap Returned multicast encapsulation info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_encap_get_f)(
    int unit,
    bcm_if_t encap_id,
    bcm_multicast_encap_t *mc_encap);

/*!
 * \brief Recover encap info of encap_id.
 *
 * \param [in] unit Unit Number.
 * \param [in] encap_id Multicast encap_id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_encap_recover_f)(
    int unit,
    bcm_if_t encap_id);

/*!
 * \brief Get L2 multicast group id for default VLAN.
 *
 * \param [in] unit Unit Number.
 * \param [out] grp_id L2 group HW index.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_def_vlan_grp_id_get_f)(
    int unit,
    uint32_t *grp_id);

/*!
 * \brief Update member ports of default vlan multicast group.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_def_vlan_grp_update_f)(int unit);

/*!
 * \brief Enable/disable to egress both L2 and L3 packet copies on a same egress port.
 *
 * \param [in] unit Unit Number.
 * \param [in] enable Enable/disable
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_l2_l3_combined_set_f)(
    int unit,
    bool enable);

/*!
 * \brief Get multicast l2 l3 combined mode.
 *
 * \param [in] unit Unit Number.
 * \param [out] enable TRUE: Combined mode is enabled. FALSE: Combined mode is disabled.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_l2_l3_combined_get_f)(
    int unit,
    bool *enable);

/*!
 * \brief Set a multicast group mapping.
 *
 * \param [in] unit Unit Number.
 * \param [in] mc_index_from Multicast group index to map from
 * \param [in] mc_index_to Multicast group index to map to
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_remap_group_set_f)(
    int unit,
    int mc_index_from,
    int mc_index_to);

/*!
 * \brief Get a multicast group mapping.
 *
 * \param [in] unit Unit Number.
 * \param [in] mc_index_from Multicast group index to map from
 * \param [out] mc_index_to Multicast group index to map to
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_remap_group_get_f)(
    int unit,
    int mc_index_from,
    int *mc_index_to);

/*!
 * \brief Get the Encap ID for Egress_object.
 *
 * \param [in] unit Unit Number.
 * \param [in] group Multicast group ID.
 * \param [in] intf Egress Object ID.
 * \param [out] encap_id Returned encap_id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_egress_object_encap_get_f)(
    int unit,
    bcm_multicast_t group,
    bcm_if_t intf,
    bcm_if_t *encap_id);

/*!
 * \brief Set maximum transmission unit.
 *
 * \param [in] unit Unit Number.
 * \param [in] mc_index Multicast group ID.
 * \param [in] mtu Maximum transmission unit to set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_mtu_set_f)(
    int unit,
    int mc_index,
    int mtu);

/*!
 * \brief Get maximum transmission unit.
 *
 * \param [in] unit Unit Number.
 * \param [in] mc_index Multicast group ID.
 * \param [out] mtu Maximum transmission unit to set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_mtu_get_f)(
    int unit,
    int mc_index,
    int *mtu);

/*!
 * \brief Initialize replication per-port configuration in the runtime.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port of this operation.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_repl_port_attach_f)(
    int unit,
    bcm_port_t port);

/*!
 * \brief Clear replication per-port configuration in the runtime.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port of this operation.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_repl_port_detach_f)(
    int unit,
    bcm_port_t port);

/*!
 * \brief Init l2mc index table management for vlan flooding.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*multicast_vlan_flood_init_f)(int unit);

/*!
 * \brief Multicast driver structure.
 */
typedef struct mbcm_ltsw_multicast_drv_s {

    /*! Initialize MULTICAST module. */
    multicast_init_f multicast_init;

    /*! De-initialize MULTICAST module. */
    multicast_detach_f multicast_detach;

    /*! Get the public info of MULTICAST module. */
    multicast_pub_info_get_f multicast_pub_info_get;

    /*! Create a L2 multicast group. */
    multicast_l2_grp_create_f multicast_l2_grp_create;

    /*! Destroy a L2 multicast group. */
    multicast_l2_grp_destroy_f multicast_l2_grp_destroy;

    /*! Update a L2 multicast group. */
    multicast_l2_grp_update_f multicast_l2_grp_update;

    /*! Get egress encap_ids of a L2 multicast group. */
    multicast_l2_egress_get_f multicast_l2_egress_get;

    /*! Create a L3 multicast group. */
    multicast_l3_grp_create_f multicast_l3_grp_create;

    /*! Destroy a L3 multicast group. */
    multicast_l3_grp_destroy_f multicast_l3_grp_destroy;

    /*! Update a L3 multicast group. */
    multicast_l3_grp_update_f multicast_l3_grp_update;

    /*! Get egress encap_ids of a L3 multicast group. */
    multicast_l3_egress_get_f multicast_l3_egress_get;

    /*! Create a multicast encap_id based on encapsulation info. */
    multicast_encap_create_f multicast_encap_create;

    /*! Destroy a multicast encap_id. */
    multicast_encap_destroy_f multicast_encap_destroy;

    /*! Get multicast encapsulation info from encap_id. */
    multicast_encap_get_f multicast_encap_get;

    /*! Recover encap info of encap_id. */
    multicast_encap_recover_f multicast_encap_recover;

    /*! Get L2 multicast group id for default VLAN. */
    multicast_def_vlan_grp_id_get_f multicast_def_vlan_grp_id_get;

    /*! Update member ports of default vlan multicast group. */
    multicast_def_vlan_grp_update_f multicast_def_vlan_grp_update;

    /*! Enable/disable to egress both L2 and L3 packet copies on a same egress port. */
    multicast_l2_l3_combined_set_f multicast_l2_l3_combined_set;

    /*! Get multicast l2 l3 combined mode. */
    multicast_l2_l3_combined_get_f multicast_l2_l3_combined_get;

    /*! Set a multicast group mapping. */
    multicast_remap_group_set_f multicast_remap_group_set;

    /*! Get a multicast group mapping. */
    multicast_remap_group_get_f multicast_remap_group_get;

    /*! Get the Encap ID for Egress_object. */
    multicast_egress_object_encap_get_f multicast_egress_object_encap_get;

    /*! Set maximum transmission unit. */
    multicast_mtu_set_f multicast_mtu_set;

    /*! Get maximum transmission unit. */
    multicast_mtu_get_f multicast_mtu_get;

    /*! Initialize replication per-port configuration in the runtime. */
    multicast_repl_port_attach_f multicast_repl_port_attach;

    /*! Clear replication per-port configuration in the runtime. */
    multicast_repl_port_detach_f multicast_repl_port_detach;

    /*! Init l2mc index table management for vlan flooding. */
    multicast_vlan_flood_init_f multicast_vlan_flood_init;

} mbcm_ltsw_multicast_drv_t;

/*!
 * \brief Set the MULTICAST driver of the device.
 *
 * \param [in] unit Unit Number.
 * \param [in] drv Multicast driver to set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_drv_set(
    int unit,
    mbcm_ltsw_multicast_drv_t *drv);

/*!
 * \brief Initialize MULTICAST module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_init(int unit);

/*!
 * \brief De-initialize MULTICAST module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_detach(int unit);

/*!
 * \brief Get the public info of MULTICAST module.
 *
 * \param [in] unit Unit Number.
 * \param [out] mc_pub Returned mc public info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_pub_info_get(
    int unit,
    bcmint_multicast_pub_info_t *mc_pub);

/*!
 * \brief Create a L2 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l2mc_id L2 multicast group id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_l2_grp_create(
    int unit,
    uint32_t l2mc_id);

/*!
 * \brief Destroy a L2 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l2mc_id L2 multicast group id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_l2_grp_destroy(
    int unit,
    uint32_t l2mc_id);

/*!
 * \brief Update a L2 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l2mc_id L2 multicast group id.
 * \param [in] opcode Operation code of update.
 * \param [in] port_array Port_array of this operation.
 * \param [in] port_count Count of ports.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_l2_grp_update(
    int unit,
    uint32_t l2mc_id,
    bcmint_multicast_l2_grp_op_code_t opcode,
    bcm_port_t *port_array,
    uint32_t port_count);

/*!
 * \brief Get egress encap_ids of a L2 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l2mc_id L2 multicast group id.
 * \param [in] port_size Maxium mumber of GPORTS in this group.
 * \param [out] port_array Returned egress ports of this group.
 * \param [out] encap_id_array Returned list of encap_id.
 * \param [out] port_count Returned ports count.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_l2_egress_get(
    int unit,
    uint32_t l2mc_id,
    int port_size,
    bcm_gport_t *port_array,
    bcm_if_t *encap_id_array,
    int *port_count);

/*!
 * \brief Create a L3 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l3mc_id L3 multicast group id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_l3_grp_create(
    int unit,
    uint32_t l3mc_id);

/*!
 * \brief Destroy a L3 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l3mc_id L3 multicast group id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_l3_grp_destroy(
    int unit,
    uint32_t l3mc_id);

/*!
 * \brief Update a L3 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l3mc_id L3 multicast group id.
 * \param [in] opcode Operation code of update.
 * \param [in] port Port of this operation.
 * \param [in] encap_id_array Encap_id array of the given port.
 * \param [in] encap_count Count of encap_id_array.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_l3_grp_update(
    int unit,
    uint32_t l3mc_id,
    bcmint_multicast_l3_grp_op_code_t opcode,
    bcm_port_t port,
    bcm_if_t *encap_id_array,
    uint32_t encap_count);

/*!
 * \brief Get egress encap_ids of a L3 multicast group.
 *
 * \param [in] unit Unit Number.
 * \param [in] l3mc_id L3 multicast group id.
 * \param [in] port_size Maxium mumber of GPORTS in this group.
 * \param [out] port_array Returned egress ports of this group.
 * \param [out] encap_id_array Returned list of encap_id.
 * \param [out] port_count Returned ports count.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_l3_egress_get(
    int unit,
    uint32_t l3mc_id,
    int port_size,
    bcm_gport_t *port_array,
    bcm_if_t *encap_id_array,
    int *port_count);

/*!
 * \brief Create a multicast encap_id based on encapsulation info.
 *
 * \param [in] unit Unit Number.
 * \param [in] mc_encap Multicast encapsulation info.
 * \param [out] encap_id Returned encap_id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_encap_create(
    int unit,
    bcm_multicast_encap_t *mc_encap,
    bcm_if_t *encap_id);

/*!
 * \brief Destroy a multicast encap_id.
 *
 * \param [in] unit Unit Number.
 * \param [in] encap_id Multicast encap_id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_encap_destroy(
    int unit,
    bcm_if_t encap_id);

/*!
 * \brief Get multicast encapsulation info from encap_id.
 *
 * \param [in] unit Unit Number.
 * \param [in] encap_id Multicast encap_id.
 * \param [out] mc_encap Returned multicast encapsulation info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_encap_get(
    int unit,
    bcm_if_t encap_id,
    bcm_multicast_encap_t *mc_encap);

/*!
 * \brief Recover encap info of encap_id.
 *
 * \param [in] unit Unit Number.
 * \param [in] encap_id Multicast encap_id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_encap_recover(
    int unit,
    bcm_if_t encap_id);

/*!
 * \brief Get L2 multicast group id for default VLAN.
 *
 * \param [in] unit Unit Number.
 * \param [out] grp_id L2 group HW index.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_def_vlan_grp_id_get(
    int unit,
    uint32_t *grp_id);

/*!
 * \brief Update member ports of default vlan multicast group.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_def_vlan_grp_update(int unit);

/*!
 * \brief Enable/disable to egress both L2 and L3 packet copies on a same egress port.
 *
 * \param [in] unit Unit Number.
 * \param [in] enable Enable/disable
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_l2_l3_combined_set(
    int unit,
    bool enable);

/*!
 * \brief Get multicast l2 l3 combined mode.
 *
 * \param [in] unit Unit Number.
 * \param [out] enable TRUE: Combined mode is enabled. FALSE: Combined mode is disabled.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_l2_l3_combined_get(
    int unit,
    bool *enable);

/*!
 * \brief Set a multicast group mapping.
 *
 * \param [in] unit Unit Number.
 * \param [in] mc_index_from Multicast group index to map from
 * \param [in] mc_index_to Multicast group index to map to
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_remap_group_set(
    int unit,
    int mc_index_from,
    int mc_index_to);

/*!
 * \brief Get a multicast group mapping.
 *
 * \param [in] unit Unit Number.
 * \param [in] mc_index_from Multicast group index to map from
 * \param [out] mc_index_to Multicast group index to map to
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_remap_group_get(
    int unit,
    int mc_index_from,
    int *mc_index_to);

/*!
 * \brief Get the Encap ID for Egress_object.
 *
 * \param [in] unit Unit Number.
 * \param [in] group Multicast group ID.
 * \param [in] intf Egress Object ID.
 * \param [out] encap_id Returned encap_id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_egress_object_encap_get(
    int unit,
    bcm_multicast_t group,
    bcm_if_t intf,
    bcm_if_t *encap_id);

/*!
 * \brief Set maximum transmission unit.
 *
 * \param [in] unit Unit Number.
 * \param [in] mc_index Multicast group ID.
 * \param [in] mtu Maximum transmission unit to set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_mtu_set(
    int unit,
    int mc_index,
    int mtu);

/*!
 * \brief Get maximum transmission unit.
 *
 * \param [in] unit Unit Number.
 * \param [in] mc_index Multicast group ID.
 * \param [out] mtu Maximum transmission unit to set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_mtu_get(
    int unit,
    int mc_index,
    int *mtu);

/*!
 * \brief Initialize replication per-port configuration in the runtime.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port of this operation.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_repl_port_attach(
    int unit,
    bcm_port_t port);

/*!
 * \brief Clear replication per-port configuration in the runtime.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port of this operation.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_repl_port_detach(
    int unit,
    bcm_port_t port);

/*!
 * \brief Init l2mc index table management for vlan flooding.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_multicast_vlan_flood_init(int unit);

#endif /* BCMINT_LTSW_MBCM_MULTICAST_H */