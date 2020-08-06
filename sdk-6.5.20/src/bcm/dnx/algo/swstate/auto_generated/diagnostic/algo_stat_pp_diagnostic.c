/** \file algo/swstate/auto_generated/diagnostic/algo_stat_pp_diagnostic.c
 *
 * sw state functions definitions
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_SWSTATEDNX_GENERAL

#include <soc/dnxc/swstate/dnxc_sw_state_c_includes.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/algo_stat_pp_diagnostic.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
/*
 * Global Variables
 */

extern algo_stat_pp_sw_state_t * stat_pp_db_data[SOC_MAX_NUM_DEVICES];
/*
 * FUNCTIONs
 */

/*
 *
 * dump function for the variable stat_pp_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
stat_pp_db_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(stat_pp_db_stat_pp_irpp_profile_id_dump(unit, filters));
    SHR_IF_ERR_EXIT(stat_pp_db_stat_pp_etpp_profile_id_dump(unit, filters));
    SHR_IF_ERR_EXIT(stat_pp_db_stat_pp_etpp_counting_profile_id_dump(unit, filters));
    SHR_IF_ERR_EXIT(stat_pp_db_stat_pp_etpp_metering_profile_id_dump(unit, filters));
    SHR_IF_ERR_EXIT(stat_pp_db_stat_pp_erpp_profile_id_dump(unit, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable stat_pp_irpp_profile_id
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
stat_pp_db_stat_pp_irpp_profile_id_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_stat_pp stat_pp_irpp_profile_id") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_stat_pp stat_pp_irpp_profile_id\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "stat_pp_db/stat_pp_irpp_profile_id.txt",
            "stat_pp_db[%d]->","((algo_stat_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_STAT_PP_MODULE_ID])->","stat_pp_irpp_profile_id: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_stat_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_STAT_PP_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "stat_pp_db[%d]->","((algo_stat_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_STAT_PP_MODULE_ID])->","stat_pp_irpp_profile_id: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            ALGO_STAT_PP_MODULE_ID,
            &((algo_stat_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_STAT_PP_MODULE_ID])->stat_pp_irpp_profile_id);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable stat_pp_etpp_profile_id
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
stat_pp_db_stat_pp_etpp_profile_id_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_stat_pp stat_pp_etpp_profile_id") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_stat_pp stat_pp_etpp_profile_id\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "stat_pp_db/stat_pp_etpp_profile_id.txt",
            "stat_pp_db[%d]->","((algo_stat_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_STAT_PP_MODULE_ID])->","stat_pp_etpp_profile_id: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_stat_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_STAT_PP_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "stat_pp_db[%d]->","((algo_stat_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_STAT_PP_MODULE_ID])->","stat_pp_etpp_profile_id: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            ALGO_STAT_PP_MODULE_ID,
            &((algo_stat_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_STAT_PP_MODULE_ID])->stat_pp_etpp_profile_id);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable stat_pp_etpp_counting_profile_id
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
stat_pp_db_stat_pp_etpp_counting_profile_id_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_stat_pp stat_pp_etpp_counting_profile_id") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_stat_pp stat_pp_etpp_counting_profile_id\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "stat_pp_db/stat_pp_etpp_counting_profile_id.txt",
            "stat_pp_db[%d]->","((algo_stat_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_STAT_PP_MODULE_ID])->","stat_pp_etpp_counting_profile_id: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_stat_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_STAT_PP_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "stat_pp_db[%d]->","((algo_stat_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_STAT_PP_MODULE_ID])->","stat_pp_etpp_counting_profile_id: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            ALGO_STAT_PP_MODULE_ID,
            &((algo_stat_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_STAT_PP_MODULE_ID])->stat_pp_etpp_counting_profile_id);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable stat_pp_etpp_metering_profile_id
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
stat_pp_db_stat_pp_etpp_metering_profile_id_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_stat_pp stat_pp_etpp_metering_profile_id") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_stat_pp stat_pp_etpp_metering_profile_id\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "stat_pp_db/stat_pp_etpp_metering_profile_id.txt",
            "stat_pp_db[%d]->","((algo_stat_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_STAT_PP_MODULE_ID])->","stat_pp_etpp_metering_profile_id: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_stat_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_STAT_PP_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "stat_pp_db[%d]->","((algo_stat_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_STAT_PP_MODULE_ID])->","stat_pp_etpp_metering_profile_id: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            ALGO_STAT_PP_MODULE_ID,
            &((algo_stat_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_STAT_PP_MODULE_ID])->stat_pp_etpp_metering_profile_id);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable stat_pp_erpp_profile_id
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
stat_pp_db_stat_pp_erpp_profile_id_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_stat_pp stat_pp_erpp_profile_id") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_stat_pp stat_pp_erpp_profile_id\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "stat_pp_db/stat_pp_erpp_profile_id.txt",
            "stat_pp_db[%d]->","((algo_stat_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_STAT_PP_MODULE_ID])->","stat_pp_erpp_profile_id: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_stat_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_STAT_PP_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "stat_pp_db[%d]->","((algo_stat_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_STAT_PP_MODULE_ID])->","stat_pp_erpp_profile_id: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            ALGO_STAT_PP_MODULE_ID,
            &((algo_stat_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_STAT_PP_MODULE_ID])->stat_pp_erpp_profile_id);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 * Global Variables
 */

dnx_sw_state_diagnostic_info_t stat_pp_db_info[SOC_MAX_NUM_DEVICES][STAT_PP_DB_INFO_NOF_ENTRIES];
const char* stat_pp_db_layout_str[STAT_PP_DB_INFO_NOF_ENTRIES] = {
    "STAT_PP_DB~",
    "STAT_PP_DB~STAT_PP_IRPP_PROFILE_ID~",
    "STAT_PP_DB~STAT_PP_ETPP_PROFILE_ID~",
    "STAT_PP_DB~STAT_PP_ETPP_COUNTING_PROFILE_ID~",
    "STAT_PP_DB~STAT_PP_ETPP_METERING_PROFILE_ID~",
    "STAT_PP_DB~STAT_PP_ERPP_PROFILE_ID~",
};
#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE