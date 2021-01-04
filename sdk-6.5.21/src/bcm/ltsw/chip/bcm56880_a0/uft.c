/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm_int/ltsw/mbcm/uft.h>
#include <bcm_int/ltsw/xfs/uft.h>
#include <bcm_int/ltsw/chip/bcm56880_a0/variant_dispatch.h>

#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_UFT

/******************************************************************************
 * Private functions
 */

static int
bcm56880_a0_ltsw_uft_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_uft_init(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_uft_detach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_uft_detach(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_uft_mode_get(
    int unit,
    bcmi_ltsw_uft_mode_t *uft_mode)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_uft_mode_get(unit, uft_mode));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_uft_multi_move_depth_set(
    int unit,
    bcm_switch_control_t type,
    int arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_uft_multi_move_depth_set(unit, type, arg));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_uft_multi_move_depth_get(
    int unit,
    bcm_switch_control_t type,
    int *arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_uft_multi_move_depth_get(unit, type, arg));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_uft_bank_info_get(
    int unit,
    bcm_switch_hash_bank_info_t *bank_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_uft_bank_info_get(unit, bank_info));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_uft_bank_multi_get(
    int unit,
    bcm_switch_hash_table_t hash_table,
    int array_size,
    bcm_switch_hash_bank_t *bank_array,
    int *num_banks)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_uft_bank_multi_get(unit, hash_table, array_size, bank_array, num_banks));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_uft_table_multi_get(
    int unit,
    bcm_switch_hash_bank_t bank_num,
    int array_size,
    bcm_switch_hash_table_t *table_array,
    int *num_tables)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_uft_table_multi_get(unit, bank_num, array_size, table_array, num_tables));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_uft_bank_control_set(
    int unit,
    bcm_switch_hash_bank_control_t *bank_control)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_uft_bank_control_set(unit, bank_control));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56880_a0_ltsw_uft_bank_control_get(
    int unit,
    bcm_switch_hash_bank_control_t *bank_control)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xfs_ltsw_uft_bank_control_get(unit, bank_control));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Uft driver function variable for bcm56880_a0 device.
 */
static mbcm_ltsw_uft_drv_t bcm56880_a0_ltsw_uft_drv = {
    .uft_init = bcm56880_a0_ltsw_uft_init,
    .uft_detach = bcm56880_a0_ltsw_uft_detach,
    .uft_mode_get = bcm56880_a0_ltsw_uft_mode_get,
    .uft_multi_move_depth_set = bcm56880_a0_ltsw_uft_multi_move_depth_set,
    .uft_multi_move_depth_get = bcm56880_a0_ltsw_uft_multi_move_depth_get,
    .uft_bank_info_get = bcm56880_a0_ltsw_uft_bank_info_get,
    .uft_bank_multi_get = bcm56880_a0_ltsw_uft_bank_multi_get,
    .uft_table_multi_get = bcm56880_a0_ltsw_uft_table_multi_get,
    .uft_bank_control_set = bcm56880_a0_ltsw_uft_bank_control_set,
    .uft_bank_control_get = bcm56880_a0_ltsw_uft_bank_control_get,
};

/******************************************************************************
 * Public functions
 */

int
bcm56880_a0_ltsw_uft_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv_set(unit, &bcm56880_a0_ltsw_uft_drv));

    SHR_IF_ERR_VERBOSE_EXIT
        (bcm56880_a0_ltsw_variant_drv_attach(unit, BCM56880_A0_LTSW_VARIANT_UFT));

exit:
    SHR_FUNC_EXIT();
}
