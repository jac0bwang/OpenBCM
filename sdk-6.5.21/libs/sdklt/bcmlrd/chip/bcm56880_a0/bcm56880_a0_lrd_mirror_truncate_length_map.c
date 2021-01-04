/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/mirror/bcm56880_a0/bcm56880_a0_MIRROR_TRUNCATE_LENGTH.map.ltl for
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
/* MIRROR_TRUNCATE_LENGTH field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_mirror_truncate_length_map_field_data_mmd[] = {
    { /* 0 MIRROR_TRUNCATE_LENGTH_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 1 TRUNCATE */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 2 CELL_TRUNCATE */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 3 CELL_TRUNCATE_LENGTH */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 4 CELL_TRUNCATE_LENGTH_SRC */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 5 TRUNCATE_ZONE */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 6 TRUNCATE_ACTION */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 0,
      .edata = BCM56880_A0_LRD_MIRROR_TRUNCATE_ACTION_T_DATA,
    },
    { /* 7 TRUNCATE_LENGTH */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_mirror_truncate_length_map_field_data = {
    .fields = 8,
    .field = bcm56880_a0_lrd_mirror_truncate_length_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_mirror_truncate_lengtht_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 3,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_mirror_truncate_lengtht_attr_group = {
    .attributes = 3,
    .attr = bcm56880_a0_lrd_mirror_truncate_lengtht_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_lrd_mirror_truncate_lengtht_flex_editor_truncate_length_adjust_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_TRUNCATE_LENGTHt_MIRROR_TRUNCATE_LENGTH_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MIRROR_TRUNCATE_LENGTHt_TRUNCATE_LENGTHf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_mirror_truncate_length_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = FLEX_EDITOR_TRUNCATE_LENGTH_ADJUSTm,
        },
        .entries = 2,
        .entry = bcm56880_a0_lrd_mirror_truncate_lengtht_flex_editor_truncate_length_adjust_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_mirror_truncate_length_map = {
    .src_id = MIRROR_TRUNCATE_LENGTHt,
    .field_data = &bcm56880_a0_lrd_mirror_truncate_length_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_lrd_mirror_truncate_length_map_group,
    .table_attr = &bcm56880_a0_lrd_mirror_truncate_lengtht_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};