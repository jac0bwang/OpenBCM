/** \file dnx/swstate/auto_generated/diagnostic/algo_stat_pp_commandline.c
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

#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/algo_stat_pp_diagnostic.h>
#include "algo_stat_pp_commandline.h"
#include <bcm_int/dnx/algo/swstate/auto_generated/access/algo_stat_pp_access.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
sh_sand_cmd_t sh_dnx_swstate_algo_stat_pp_cmds[] = {
    {"stat_pp_irpp_profile_id", NULL, sh_dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_cmds, NULL, &dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_man},
    {"stat_pp_etpp_profile_id", NULL, sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_cmds, NULL, &dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_man},
    {"stat_pp_etpp_counting_profile_id", NULL, sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_cmds, NULL, &dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_man},
    {"stat_pp_etpp_metering_profile_id", NULL, sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_cmds, NULL, &dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_man},
    {"stat_pp_erpp_profile_id", NULL, sh_dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_cmds, NULL, &dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_man},
    {"dump", sh_dnx_swstate_algo_stat_pp_dump_cmd, NULL, dnx_swstate_algo_stat_pp_dump_options, &dnx_swstate_algo_stat_pp_dump_man},
    {"size_get", sh_dnx_swstate_algo_stat_pp_size_get_cmd, NULL, dnx_swstate_algo_stat_pp_size_get_options, &dnx_swstate_algo_stat_pp_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_algo_stat_pp_diagnostic_operation_counters_cmd, NULL, dnx_swstate_algo_stat_pp_diagnostic_operation_counters_options, &dnx_swstate_algo_stat_pp_diagnostic_operation_counters_man},
    {NULL}
};


shr_error_e sh_dnx_swstate_algo_stat_pp_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint8 is_init;
    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    stat_pp_db.is_init(unit, &is_init);
    if (is_init) {
        SHR_IF_ERR_EXIT(stat_pp_db_dump(unit, filters));
        if (!filters.nocontent)
        {
            dnx_sw_state_dump_detach_file(unit);
        }
    }
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_dump_man = {
    "swstate algo_stat_pp dump",
    "print the module's content",
    "swstate algo_stat_pp dump",
    "swstate algo_stat_pp dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_stat_pp_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint32 size = 0;
    SHR_FUNC_INIT_VARS(unit);

    size = dnx_sw_state_info_size_get(stat_pp_db_info[unit], stat_pp_db_layout_str, STAT_PP_DB_INFO_NOF_ENTRIES, "STAT_PP_DB~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_size_get_man = {
    "swstate algo_stat_pp size_get",
    "print the module's size",
    "swstate algo_stat_pp size_get",
    "swstate algo_stat_pp size_get",
};


shr_error_e sh_dnx_swstate_algo_stat_pp_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{


    SHR_FUNC_INIT_VARS(unit);

    dnx_sw_state_diagnostic_operation_counters_print(stat_pp_db_info[unit], stat_pp_db_layout_str, STAT_PP_DB_INFO_NOF_ENTRIES, "STAT_PP_DB~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_diagnostic_operation_counters_man = {
    "swstate algo_stat_pp diagnostic_operation_counters",
    "print the module's diagnostic operation counters",
    "swstate algo_stat_pp diagnostic_operation_counters",
    "swstate algo_stat_pp diagnostic_operation_counters",
};


sh_sand_man_t dnx_swstate_algo_stat_pp_man = {
    cmd_dnx_swstate_algo_stat_pp_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_stat_pp_desc[] = "swstate algo_stat_pp commands";



sh_sand_cmd_t sh_dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_cmds[] = {
    {"dump", sh_dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_dump_cmd, NULL, dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_dump_options, &dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_dump_man},
    {"size_get", sh_dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_size_get_cmd, NULL, dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_size_get_options, &dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_diagnostic_operation_counters_cmd, NULL, dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_diagnostic_operation_counters_options, &dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_man = {
    cmd_dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_desc[] = "stat_pp_db stat_pp_irpp_profile_id commands";


shr_error_e sh_dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(stat_pp_db_stat_pp_irpp_profile_id_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_dump_man = {
    "swstate dump",
    "print the variable value",
    "stat_pp_db stat_pp_irpp_profile_id dump []\n",
    "stat_pp_db stat_pp_irpp_profile_id dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(stat_pp_db_info[unit], stat_pp_db_layout_str, STAT_PP_DB_INFO_NOF_ENTRIES, "STAT_PP_DB~STAT_PP_IRPP_PROFILE_ID~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "stat_pp_db stat_pp_irpp_profile_id size_get",
    "stat_pp_db stat_pp_irpp_profile_id size_get",
};


shr_error_e sh_dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(stat_pp_db_info[unit], stat_pp_db_layout_str, STAT_PP_DB_INFO_NOF_ENTRIES, "STAT_PP_DB~STAT_PP_IRPP_PROFILE_ID~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_irpp_profile_id_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "stat_pp_db stat_pp_irpp_profile_id diagnostic_operation_counters",
    "stat_pp_db stat_pp_irpp_profile_id diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_cmds[] = {
    {"dump", sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_dump_cmd, NULL, dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_dump_options, &dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_dump_man},
    {"size_get", sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_size_get_cmd, NULL, dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_size_get_options, &dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_diagnostic_operation_counters_cmd, NULL, dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_diagnostic_operation_counters_options, &dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_man = {
    cmd_dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_desc[] = "stat_pp_db stat_pp_etpp_profile_id commands";


shr_error_e sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(stat_pp_db_stat_pp_etpp_profile_id_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_dump_man = {
    "swstate dump",
    "print the variable value",
    "stat_pp_db stat_pp_etpp_profile_id dump []\n",
    "stat_pp_db stat_pp_etpp_profile_id dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(stat_pp_db_info[unit], stat_pp_db_layout_str, STAT_PP_DB_INFO_NOF_ENTRIES, "STAT_PP_DB~STAT_PP_ETPP_PROFILE_ID~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "stat_pp_db stat_pp_etpp_profile_id size_get",
    "stat_pp_db stat_pp_etpp_profile_id size_get",
};


shr_error_e sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(stat_pp_db_info[unit], stat_pp_db_layout_str, STAT_PP_DB_INFO_NOF_ENTRIES, "STAT_PP_DB~STAT_PP_ETPP_PROFILE_ID~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_etpp_profile_id_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "stat_pp_db stat_pp_etpp_profile_id diagnostic_operation_counters",
    "stat_pp_db stat_pp_etpp_profile_id diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_cmds[] = {
    {"dump", sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_dump_cmd, NULL, dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_dump_options, &dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_dump_man},
    {"size_get", sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_size_get_cmd, NULL, dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_size_get_options, &dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_diagnostic_operation_counters_cmd, NULL, dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_diagnostic_operation_counters_options, &dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_man = {
    cmd_dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_desc[] = "stat_pp_db stat_pp_etpp_counting_profile_id commands";


shr_error_e sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(stat_pp_db_stat_pp_etpp_counting_profile_id_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_dump_man = {
    "swstate dump",
    "print the variable value",
    "stat_pp_db stat_pp_etpp_counting_profile_id dump []\n",
    "stat_pp_db stat_pp_etpp_counting_profile_id dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(stat_pp_db_info[unit], stat_pp_db_layout_str, STAT_PP_DB_INFO_NOF_ENTRIES, "STAT_PP_DB~STAT_PP_ETPP_COUNTING_PROFILE_ID~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "stat_pp_db stat_pp_etpp_counting_profile_id size_get",
    "stat_pp_db stat_pp_etpp_counting_profile_id size_get",
};


shr_error_e sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(stat_pp_db_info[unit], stat_pp_db_layout_str, STAT_PP_DB_INFO_NOF_ENTRIES, "STAT_PP_DB~STAT_PP_ETPP_COUNTING_PROFILE_ID~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_etpp_counting_profile_id_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "stat_pp_db stat_pp_etpp_counting_profile_id diagnostic_operation_counters",
    "stat_pp_db stat_pp_etpp_counting_profile_id diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_cmds[] = {
    {"dump", sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_dump_cmd, NULL, dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_dump_options, &dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_dump_man},
    {"size_get", sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_size_get_cmd, NULL, dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_size_get_options, &dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_diagnostic_operation_counters_cmd, NULL, dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_diagnostic_operation_counters_options, &dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_man = {
    cmd_dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_desc[] = "stat_pp_db stat_pp_etpp_metering_profile_id commands";


shr_error_e sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(stat_pp_db_stat_pp_etpp_metering_profile_id_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_dump_man = {
    "swstate dump",
    "print the variable value",
    "stat_pp_db stat_pp_etpp_metering_profile_id dump []\n",
    "stat_pp_db stat_pp_etpp_metering_profile_id dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(stat_pp_db_info[unit], stat_pp_db_layout_str, STAT_PP_DB_INFO_NOF_ENTRIES, "STAT_PP_DB~STAT_PP_ETPP_METERING_PROFILE_ID~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "stat_pp_db stat_pp_etpp_metering_profile_id size_get",
    "stat_pp_db stat_pp_etpp_metering_profile_id size_get",
};


shr_error_e sh_dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(stat_pp_db_info[unit], stat_pp_db_layout_str, STAT_PP_DB_INFO_NOF_ENTRIES, "STAT_PP_DB~STAT_PP_ETPP_METERING_PROFILE_ID~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_etpp_metering_profile_id_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "stat_pp_db stat_pp_etpp_metering_profile_id diagnostic_operation_counters",
    "stat_pp_db stat_pp_etpp_metering_profile_id diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_cmds[] = {
    {"dump", sh_dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_dump_cmd, NULL, dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_dump_options, &dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_dump_man},
    {"size_get", sh_dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_size_get_cmd, NULL, dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_size_get_options, &dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_diagnostic_operation_counters_cmd, NULL, dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_diagnostic_operation_counters_options, &dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_man = {
    cmd_dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_desc[] = "stat_pp_db stat_pp_erpp_profile_id commands";


shr_error_e sh_dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(stat_pp_db_stat_pp_erpp_profile_id_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_dump_man = {
    "swstate dump",
    "print the variable value",
    "stat_pp_db stat_pp_erpp_profile_id dump []\n",
    "stat_pp_db stat_pp_erpp_profile_id dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(stat_pp_db_info[unit], stat_pp_db_layout_str, STAT_PP_DB_INFO_NOF_ENTRIES, "STAT_PP_DB~STAT_PP_ERPP_PROFILE_ID~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "stat_pp_db stat_pp_erpp_profile_id size_get",
    "stat_pp_db stat_pp_erpp_profile_id size_get",
};


shr_error_e sh_dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(stat_pp_db_info[unit], stat_pp_db_layout_str, STAT_PP_DB_INFO_NOF_ENTRIES, "STAT_PP_DB~STAT_PP_ERPP_PROFILE_ID~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_stat_pp_stat_pp_erpp_profile_id_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "stat_pp_db stat_pp_erpp_profile_id diagnostic_operation_counters",
    "stat_pp_db stat_pp_erpp_profile_id diagnostic_operation_counters",
};


#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE