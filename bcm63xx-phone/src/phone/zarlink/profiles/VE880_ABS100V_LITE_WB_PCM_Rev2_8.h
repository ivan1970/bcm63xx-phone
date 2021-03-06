/*
 * VE880_ABS100V_LITE_WB_PCM_Rev2_8.h --
 *
 * This header file exports the Profile data types
 *
 * Project Info --
 *   File:   C:\Microsemi\Profile_Wizard_P2.7.0\Data\bcm63xx-phone\VE880_ABS100V_LITE_WB_PCM_Rev2_8.vpw
 *   Type:   VE880 ABS Configuration for -27/-81V Supply with VBL Regulation, Lite Wideband Coefficients and PCM/MPI Interface at 2.048MHz PCLK and tick rate at 10ms
 *   Date:   Sunday, April 19, 2015 16:50:42
 *   Device: VE880 Le88266
 *
 *   This file was generated with Profile Wizard Version: P2.7.0
 *
 * Project Comments --
 *  ----------------------------------------------------------------------------------------------------------------------------------
 *  Profile Wizard Coefficient Revision 2.8 Release Notes:
 *  ----------------------------------------------------------------------------------------------------------------------------------
 *  I. General:
 *  1. This is the first release of the VE880 worldwide coefficients.
 *  2. This release includes support for the following 44 countries:
 *  Argentina (AR), Austria (AT), Australia (AU), Belgium (BE), Brazil (BR), Bulgaria (BG), Canada (CA), Switzerland (CH),
 *  Chile (CL), China (CN), Czech Republic (CZ), Germany (DE), Denmark (DK), Ecuador (EC), Spain (ES), Finland (FI),
 *  France (FR), UK (GB), Greece (GR), Hong Kong SAR China (HK), Hungary (HU), Indonesia (ID), Ireland (IE), Israel (IL),
 *  India (IN), Iceland (IS), Italy (IT), Japan (JP), S. Korea (KR), Mexico (MX), Malaysia (MY), Netherlands (NL),
 *  Norway (NO), New Zealand (NZ), Poland (PL), Portugal (PT), Russian Federation (RU), Sweden (SE), Singapore (SG),
 *  Thailand (TH), Turkey (TK), Taiwan (TW), USA (US), and South Africa (ZA).
 *  2. The coefficients in this and all releases are provided for use only with the Microsemi VoicePath API-II (VP-API-II). Please refer
 *  to the terms and conditions for licensing the software regarding terms and conditions of usage. These profiles are provided for
 *  reference only with no guarantee whatsoever by Microsemi Corporation.
 *  3. This release is for the VE880 ABS devices and chipsets with PCM/MPI host interfaces including Le88266 and Le88286.
 *
 *  II. Device Profile:
 *  1. The default settings for the Device Profile are:
 *         PCLK = 8192 kHz
 *         PCM Transmit Edge = Positive
 *         Transmit Time Slot = 0
 *         Receive Time Slot = 0
 *         Interrupt Mode = Open Drain
 *         Y Voltage: -27V
 *         Z Voltage: -5V
 *         Battery Sense Input: VBL=SWVSY, VBM=XB, VBH=SWVSZ
 *         Switching Frequency: LP=48kHz, MP=96kHz, HP=384kHz
 *         Driver Tick Rate = 5 ms
 *
 *  2. These settings correspond to a VBL = -27V and VBH = -81V. It is possible to change these settings for a maximum VBL = -30V and
 *  VBH = -90V.
 *  3. These settings are for VBL regulation. VBH is only regulated via transformer coupling.
 *  4. The settings may be changed by the user as necessary.  Please refer to the VE880 and VP-API-II documentation for information
 *  about the supported settings.
 *
 *  II. AC Profiles:
 *  1. FXS Coefficients assume -6dBr RX (Output from chipset) and 0dB TX relative gain levels.
 *  2. Supported countries not individually listed should use the default 600R profile AC_FXS_RF14_600R_DEF.
 *  4. AC FXS Coefficients assume the use of two 7 ohm series resistors or PTCs. Customers using other PTC resistance values (such as
 *  25ohms or 50 ohms) should not use these AC coefficients and can request alternate ones from Microsemi.
 *  5. This release includes Wideband coefficients for the FXS port. Narrowband coefficients are available upon request.
 *
 *  III. DC Profile:
 *  1. The DC_FXS_VE880_ABS100V_DEF Profile is the default used for all countries.  Additional profiles may be created by the user if necessary.
 *
 *  IV. Ring Profiles:
 *  1. RING_25HZ_VE880_ABS100V_DEF is the default ringing profile and should be used for all countries which do not have a listed ringing profile.
 *  The default ringing profile is set for a sine wave ringing with an amplitude of 50 Vrms and a frequency of 25 Hz.
 *  2. All ringing profiles on the list are sinusoidal with an amplitude of 70 Vpk (50Vrms) with no DC bias.
 *  3. The ringing definitions may be changed based on the requirements of the target market as long as the total amplitude (AC +DC
 *  components) does not exceed the limits set forth in the VE880 data sheets.
 *
 *  V. Tone Profiles:
 *  1. These profiles are available only in the full version of the VP-API-II.
 *
 *  VI. Cadence Profiles:
 *  1. These profiles are available only in the full version of the VP-API-II.
 *
 *  VII. Caller ID Profiles:
 *  1. These profiles are available only in the full version of the VP-API-II.
 *
 *  VIII. Metering Profiles:
 *  1. Metering profiles are provided for 12kHz and 16kHz signaling. They are not currently listed by the countries that use them.
 *
 *  (c) Copyright 2011 Microsemi Corporation. All rights reserved.
 *
 *  -----------------------------------------------------------------------------------------------------------------------------------------------------
 */

#ifndef VE880_ABS100V_LITE_WB_PCM_REV2_8_H
#define VE880_ABS100V_LITE_WB_PCM_REV2_8_H

#ifdef VP_API_TYPES_H
#include "vp_api_types.h"
#else
typedef unsigned char VpProfileDataType;
#endif


/************** Device Parameters **************/

/************** AC Filter Coefficients **************/
extern const VpProfileDataType AC_FXS_RF14_WB_600R_DEF[];/* AC FXS RF14 600R Wideband Coefficients (Default)  */
extern const VpProfileDataType AC_FXS_RF14_WB_ETSI[];/* AC FXS RF14 ETSI ES201 970 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_GR57[];/* AC FXS RF14 Telcordia GR-57 900R+2.16uF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_AT[];  /* AC FXS RF14 Austria 220R+820R//115nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_AU[];  /* AC FXS RF14 Australia 220R+820R//120nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_BE[];  /* AC FXS RF14 Belgium 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_BG[];  /* AC FXS RF14 Bulgaria 220R+820R//115nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_BR[];  /* AC FXS RF14 Brazil 900R Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_CH[];  /* AC FXS RF14 Switzerland 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_CN[];  /* AC FXS RF14 China 200R+680R//100nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_DE[];  /* AC FXS RF14 Germany 220R+820R//115nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_DK[];  /* AC FXS RF14 Denmark 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_ES[];  /* AC FXS RF14 Spain 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_FI[];  /* AC FXS RF14 Finland 270R+910R//120nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_FR[];  /* AC FXS RF14 France 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_GB[];  /* AC FXS RF14 UK 370R+620R//310nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_GR[];  /* AC FXS RF14 Greece 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_HU[];  /* AC FXS RF14 Hungary 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_IE[];  /* AC FXS RF14 Ireland 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_IL[];  /* AC FXS RF14 Israel 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_IS[];  /* AC FXS RF14 Iceland 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_IT[];  /* AC FXS RF14 Italy 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_JP[];  /* AC FXS RF14 Japan 600R+1uF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_NL[];  /* AC FXS RF14 Netherlands 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_NO[];  /* AC FXS RF14 Norway 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_NZ[];  /* AC FXS RF14 New Zealand 370R+620R//310nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_PT[];  /* AC FXS RF14 Portugal 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_RU[];  /* AC FXS RF14 Russia 150R+510R//47nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_SE[];  /* AC FXS RF14 Sweden 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_TK[];  /* AC FXS RF14 Turkey 270R+750R//150nF Wideband Coefficients */
extern const VpProfileDataType AC_FXS_RF14_WB_ZA[];  /* AC FXS RF14 South Africa 220R+820R//115nF Wideband Coefficients */

/************** DC Feed Parameters **************/

/************** Ring Signal Parameters **************/

/************** Call Progress Tones **************/

/************** Cadence Definitions **************/

/************** Caller ID **************/

/************** Metering Profile **************/

#endif /* VE880_ABS100V_LITE_WB_PCM_REV2_8_H */

