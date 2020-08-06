/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_MBCM_RATE_H
#define BCMINT_LTSW_MBCM_RATE_H

#include <bcm/types.h>

#include <bcm_int/ltsw/rate_int.h>

/*!
 * \brief Initialize rate module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*rate_init_f)(int unit);

/*!
 * \brief De-initializes rate module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*rate_deinit_f)(int unit);

/*!
 * \brief Clear rate related LT tables.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*rate_clear_f)(int unit);

/*!
 * \brief Update the rate configuration.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [in] rate_info Rate Information.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*rate_set_f)(
    int unit,
    bcm_port_t port,
    bcmint_rate_info_t *rate_info);

/*!
 * \brief Get the rate configuration.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [out] rate_info Rate Information.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*rate_get_f)(
    int unit,
    bcm_port_t port,
    bcmint_rate_info_t *rate_info);

/*!
 * \brief Set the rate device configuration.
 *
 * \param [in] unit Unit Number.
 * \param [in] dev_info Device configuration.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*rate_dev_set_f)(
    int unit,
    bcmint_rate_dev_info_t *dev_info);

/*!
 * \brief Get the rate device configuration.
 *
 * \param [in] unit Unit Number.
 * \param [out] dev_info Device configuration.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*rate_dev_get_f)(
    int unit,
    bcmint_rate_dev_info_t *dev_info);

/*!
 * \brief Set Meter/Rate control with overhead on wire accounted for per packet.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [in] value Number of bytes to adjust.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*rate_meter_adjust_set_f)(
    int unit,
    bcm_port_t port,
    int value);

/*!
 * \brief Get Meter/Rate control with overhead on wire accounted for per packet.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [out] value Number of bytes to adjust.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*rate_meter_adjust_get_f)(
    int unit,
    bcm_port_t port,
    int *value);

/*!
 * \brief Set Meter/Rate control with overhead on wire accounted for per packet for EFP.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [in] value Number of bytes to adjust.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*rate_shaper_adjust_set_f)(
    int unit,
    bcm_port_t port,
    int value);

/*!
 * \brief Get Meter/Rate control with overhead on wire accounted for per packet for EFP.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [out] value Number of bytes to adjust.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*rate_shaper_adjust_get_f)(
    int unit,
    bcm_port_t port,
    int *value);

/*!
 * \brief Rate driver structure.
 */
typedef struct mbcm_ltsw_rate_drv_s {

    /*! Initialize rate module. */
    rate_init_f rate_init;

    /*! De-initializes rate module. */
    rate_deinit_f rate_deinit;

    /*! Clear rate related LT tables. */
    rate_clear_f rate_clear;

    /*! Update the rate configuration. */
    rate_set_f rate_set;

    /*! Get the rate configuration. */
    rate_get_f rate_get;

    /*! Set the rate device configuration. */
    rate_dev_set_f rate_dev_set;

    /*! Get the rate device configuration. */
    rate_dev_get_f rate_dev_get;

    /*! Set Meter/Rate control with overhead on wire accounted for per packet. */
    rate_meter_adjust_set_f rate_meter_adjust_set;

    /*! Get Meter/Rate control with overhead on wire accounted for per packet. */
    rate_meter_adjust_get_f rate_meter_adjust_get;

    /*! Set Meter/Rate control with overhead on wire accounted for per packet for EFP. */
    rate_shaper_adjust_set_f rate_shaper_adjust_set;

    /*! Get Meter/Rate control with overhead on wire accounted for per packet for EFP. */
    rate_shaper_adjust_get_f rate_shaper_adjust_get;

} mbcm_ltsw_rate_drv_t;

/*!
 * \brief Set the RATE driver of the device.
 *
 * \param [in] unit Unit Number.
 * \param [in] drv Rate driver to set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_rate_drv_set(
    int unit,
    mbcm_ltsw_rate_drv_t *drv);

/*!
 * \brief Initialize rate module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_rate_init(int unit);

/*!
 * \brief De-initializes rate module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_rate_deinit(int unit);

/*!
 * \brief Clear rate related LT tables.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_rate_clear(int unit);

/*!
 * \brief Update the rate configuration.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [in] rate_info Rate Information.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_rate_set(
    int unit,
    bcm_port_t port,
    bcmint_rate_info_t *rate_info);

/*!
 * \brief Get the rate configuration.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [out] rate_info Rate Information.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_rate_get(
    int unit,
    bcm_port_t port,
    bcmint_rate_info_t *rate_info);

/*!
 * \brief Set the rate device configuration.
 *
 * \param [in] unit Unit Number.
 * \param [in] dev_info Device configuration.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_rate_dev_set(
    int unit,
    bcmint_rate_dev_info_t *dev_info);

/*!
 * \brief Get the rate device configuration.
 *
 * \param [in] unit Unit Number.
 * \param [out] dev_info Device configuration.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_rate_dev_get(
    int unit,
    bcmint_rate_dev_info_t *dev_info);

/*!
 * \brief Set Meter/Rate control with overhead on wire accounted for per packet.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [in] value Number of bytes to adjust.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_rate_meter_adjust_set(
    int unit,
    bcm_port_t port,
    int value);

/*!
 * \brief Get Meter/Rate control with overhead on wire accounted for per packet.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [out] value Number of bytes to adjust.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_rate_meter_adjust_get(
    int unit,
    bcm_port_t port,
    int *value);

/*!
 * \brief Set Meter/Rate control with overhead on wire accounted for per packet for EFP.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [in] value Number of bytes to adjust.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_rate_shaper_adjust_set(
    int unit,
    bcm_port_t port,
    int value);

/*!
 * \brief Get Meter/Rate control with overhead on wire accounted for per packet for EFP.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [out] value Number of bytes to adjust.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_rate_shaper_adjust_get(
    int unit,
    bcm_port_t port,
    int *value);

#endif /* BCMINT_LTSW_MBCM_RATE_H */