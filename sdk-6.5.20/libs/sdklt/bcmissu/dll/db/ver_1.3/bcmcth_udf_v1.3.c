/*************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by HA parser from YAML formated file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: bcmha/scripts/issu_db_gen.py
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcmissu/issu_types.h>
#include "udf_ha.h"

static const issu_field_t bcmissu_fields_policy_table_index_info_t[] = {
    {
        .fid = 0x6a992d55,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xfe9f00f2,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
};

static uint32_t policy_table_index_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    policy_table_index_info_t var;

    switch (field_id) {
        case 0x6a992d55:
            return ((uint8_t *)&var.index) - (uint8_t *)&var;
        case 0xfe9f00f2:
            return ((uint8_t *)&var.base_offset) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_udf_ha_policy_table_index_info_t_v1_3 = {
    .offset_get_func = policy_table_index_info_t_field_offset_get,
    .generic_size = sizeof(policy_table_index_info_t),
    .field_count = 2,
    .fields = bcmissu_fields_policy_table_index_info_t,
};

static const issu_field_t bcmissu_fields_udf_hdr_fmt_hw_info_t[] = {
    {
        .fid = 0x3643b863,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xeed8de11,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x7d3adc50,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = UDF_MAX_PARSER_STAGES,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xbbbe770e,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = UDF_MAX_PARSER_STAGES,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xf754f377,
        .width = sizeof(policy_table_index_info_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = UDF_IPARSER_HFE_POLICY_INDEX_MAX_ALL_STAGE,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = 0xce37caa9c14e48d6,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x616a5de6,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = UDF_IPARSER_HFE_POLICY_INDEX_MAX_ALL_STAGE,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xfbc1975a,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = UDF_IPARSER_HFE_POLICY_INDEX_MAX_ALL_STAGE,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x4f066f88,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xd2416c70,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x15478cae,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x0d1520ab,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xf712e96d,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x40627222,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = UDF_4_BYTE_CONTAINER_MAX,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xf44c1b2c,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = UDF_2_BYTE_CONTAINER_MAX,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xb15193f7,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = UDF_1_BYTE_CONTAINER_MAX,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
};

static uint32_t udf_hdr_fmt_hw_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    udf_hdr_fmt_hw_info_t var;

    switch (field_id) {
        case 0x3643b863:
            return ((uint8_t *)&var.parser) - (uint8_t *)&var;
        case 0xeed8de11:
            return ((uint8_t *)&var.num_stages) - (uint8_t *)&var;
        case 0x7d3adc50:
            return ((uint8_t *)&var.hfe_policy_mem) - (uint8_t *)&var;
        case 0xbbbe770e:
            return ((uint8_t *)&var.hfe_index_count) - (uint8_t *)&var;
        case 0xf754f377:
            return ((uint8_t *)&var.hfe_profile_index) - (uint8_t *)&var;
        case 0x616a5de6:
            return ((uint8_t *)&var.hfe_profile_entry) - (uint8_t *)&var;
        case 0xfbc1975a:
            return ((uint8_t *)&var.valid_cmd_bmap) - (uint8_t *)&var;
        case 0x4f066f88:
            return ((uint8_t *)&var.max_commands) - (uint8_t *)&var;
        case 0xd2416c70:
            return ((uint8_t *)&var.num_1_byte_cont) - (uint8_t *)&var;
        case 0x15478cae:
            return ((uint8_t *)&var.num_2_byte_cont) - (uint8_t *)&var;
        case 0x0d1520ab:
            return ((uint8_t *)&var.num_4_byte_cont) - (uint8_t *)&var;
        case 0xf712e96d:
            return ((uint8_t *)&var.current_offset) - (uint8_t *)&var;
        case 0x40627222:
            return ((uint8_t *)&var.cont_used_4B) - (uint8_t *)&var;
        case 0xf44c1b2c:
            return ((uint8_t *)&var.cont_used_2B) - (uint8_t *)&var;
        case 0xb15193f7:
            return ((uint8_t *)&var.cont_used_1B) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_udf_ha_udf_hdr_fmt_hw_info_t_v1_3 = {
    .offset_get_func = udf_hdr_fmt_hw_info_t_field_offset_get,
    .generic_size = sizeof(udf_hdr_fmt_hw_info_t),
    .field_count = 15,
    .fields = bcmissu_fields_udf_hdr_fmt_hw_info_t,
};

static const issu_field_t bcmissu_fields_udf_hdr_fmt_ha_info_t[] = {
    {
        .fid = 0xfe76e569,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x0f01d5fb,
        .width = sizeof(udf_hdr_fmt_hw_info_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = 0,
        .var_size_id = 0xfe76e569,
        .struct_id = 0xd7af7cee2ea83d89,
        .enum_type_name = NULL,
    },
};

static uint32_t udf_hdr_fmt_ha_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    udf_hdr_fmt_ha_info_t var;

    switch (field_id) {
        case 0xfe76e569:
            return ((uint8_t *)&var.max_hdr_count) - (uint8_t *)&var;
        case 0x0f01d5fb:
            return ((uint8_t *)&var.udf_hdr_fmt_array) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_udf_ha_udf_hdr_fmt_ha_info_t_v1_3 = {
    .offset_get_func = udf_hdr_fmt_ha_info_t_field_offset_get,
    .generic_size = sizeof(udf_hdr_fmt_ha_info_t),
    .field_count = 2,
    .fields = bcmissu_fields_udf_hdr_fmt_ha_info_t,
};