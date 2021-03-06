
/*
 * Copyright (c) 2011 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 * $ATH_LICENSE_TARGET_C$
 */

#ifndef _WLAN_MODULE_IDS_H_
#define _WLAN_MODULE_IDS_H_

/* Wlan module ids , global across all the modules */
typedef enum {
  WLAN_MODULE_ID_MIN = 0,
  WLAN_MODULE_INF = WLAN_MODULE_ID_MIN,
  WLAN_MODULE_WMI,
  WLAN_MODULE_STA_PWRSAVE,
  WLAN_MODULE_WHAL,
  WLAN_MODULE_COEX,
  WLAN_MODULE_ROAM,
  WLAN_MODULE_RESMGR_CHAN_MANAGER,
  WLAN_MODULE_RESMGR_OCS,
  WLAN_MODULE_VDEV_MGR,
  WLAN_MODULE_SCAN,
  WLAN_MODULE_RATECTRL,
  WLAN_MODULE_AP_PWRSAVE,
  WLAN_MODULE_BLOCKACK,
  WLAN_MODULE_MGMT_TXRX,
  WLAN_MODULE_DATA_TXRX,
  WLAN_MODULE_HTT,
  WLAN_MODULE_HOST,
  WLAN_MODULE_BEACON,
  WLAN_MODULE_OFFLOAD,
  WLAN_MODULE_WAL,
  WAL_MODULE_DE,
  WLAN_MODULE_PCIELP,
  WLAN_MODULE_RTT,
  WLAN_MODULE_RESOURCE,
  WLAN_MODULE_DCS,
  WLAN_MODULE_ANI,
  WLAN_MODULE_CACHEMGR,
  WLAN_MODULE_DEBUG,
  WLAN_MODULE_ID_MAX,
  WLAN_MODULE_ID_INVALID = WLAN_MODULE_ID_MAX,
} WLAN_MODULE_ID;


#endif /* _WLAN_MODULE_IDS_H_ */
