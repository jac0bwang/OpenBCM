/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/flex_qos/bcm56880_a0/bcm56880_a0_FLEX_QOS_EGR_ECN_0.map.ltl for
 *      bcm56880_a0
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <bcmlrd/bcmlrd_internal.h>
#include <bcmlrd/chip/bcmlrd_id.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56880_a0_lrd_enumpool.h"
/* FLEX_QOS_EGR_ECN_0 field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_flex_qos_egr_ecn_0_map_field_data_mmd[] = {
    { /* 0 BASE_INDEX */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 1 QOS_FIELD */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 2 PKT_DROP */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_flex_qos_egr_ecn_0_map_field_data = {
    .fields = 3,
    .field = bcm56880_a0_lrd_flex_qos_egr_ecn_0_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_flex_qos_egr_ecn_0t_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_SHARED_INDEX,
        .value = FLEX_QOS_EGR_PHB_0t,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 4095,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_flex_qos_egr_ecn_0t_attr_group = {
    .attributes = 4,
    .attr = bcm56880_a0_lrd_flex_qos_egr_ecn_0t_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_lrd_flex_qos_egr_ecn_0t_qos_remarking_qos_map_table_0_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 11,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_QOS_EGR_ECN_0t_BASE_INDEXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = QOS_FIELDf,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 7,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_QOS_EGR_ECN_0t_QOS_FIELDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = PKT_DROPf,
            .field_idx = 0,
            .minbit    = 1,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_QOS_EGR_ECN_0t_PKT_DROPf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = VALIDf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_flex_qos_egr_ecn_0_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = QOS_REMARKING_QOS_MAP_TABLE_0m,
        },
        .entries = 4,
        .entry = bcm56880_a0_lrd_flex_qos_egr_ecn_0t_qos_remarking_qos_map_table_0_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_flex_qos_egr_ecn_0_map = {
    .src_id = FLEX_QOS_EGR_ECN_0t,
    .field_data = &bcm56880_a0_lrd_flex_qos_egr_ecn_0_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_lrd_flex_qos_egr_ecn_0_map_group,
    .table_attr = &bcm56880_a0_lrd_flex_qos_egr_ecn_0t_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};