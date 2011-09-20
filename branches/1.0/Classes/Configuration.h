/*
 * Copyright (C) 2010 Mamadou Diop.
 *
 * Contact: Mamadou Diop <diopmamadou(at)doubango.org>
 *       
 * This file is part of idoubs Project (http://code.google.com/p/idoubs)
 *
 * idoubs is free software: you can redistribute it and/or modify it under the terms of 
 * the GNU General Public License as published by the Free Software Foundation, either version 3 
 * of the License, or (at your option) any later version.
 *       
 * idoubs is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
 * See the GNU General Public License for more details.
 *       
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 */

#import <Foundation/Foundation.h>

typedef enum CONFIGURATION_SECTION_E {
	CONFIGURATION_SECTION_IDENTITY, CONFIGURATION_SECTION_GENERAL, CONFIGURATION_SECTION_LTE, CONFIGURATION_SECTION_NETWORK, CONFIGURATION_SECTION_QOS, 
	CONFIGURATION_SECTION_RCS, CONFIGURATION_SECTION_SECURITY, CONFIGURATION_SECTION_SESSIONS, CONFIGURATION_SECTION_MEDIA, CONFIGURATION_SECTION_NATT, CONFIGURATION_SECTION_XCAP
}
CONFIGURATION_SECTION_T;

typedef enum CONFIGURATION_ENTRY_E {
	CONFIGURATION_ENTRY_ENABLED, CONFIGURATION_ENTRY_PASSWORD,
	
	
	/* === IDENTITY === */
	CONFIGURATION_ENTRY_DISPLAY_NAME, CONFIGURATION_ENTRY_IMPI, CONFIGURATION_ENTRY_IMPU, /* PASSWORD*/
	
	/* === GENERAL === */
	CONFIGURATION_ENTRY_FULL_SCREEN_VIDEO, CONFIGURATION_ENTRY_AUDIO_PLAY_LEVEL, CONFIGURATION_ENTRY_ENUM_DOMAIN,
	
	/* === VoLTE === */
	
	/* === NETWORK === */
	CONFIGURATION_ENTRY_EARLY_IMS, CONFIGURATION_ENTRY_IP_VERSION, CONFIGURATION_ENTRY_PCSCF_DISCOVERY, CONFIGURATION_ENTRY_PCSCF_HOST, CONFIGURATION_ENTRY_PCSCF_PORT, 
	CONFIGURATION_ENTRY_REALM, CONFIGURATION_ENTRY_SIGCOMP, CONFIGURATION_ENTRY_THREE_3G, CONFIGURATION_ENTRY_TRANSPORT, CONFIGURATION_ENTRY_WIFI,
	
	/* === QOS/QOE === */
	CONFIGURATION_ENTRY_PRECOND_BANDWIDTH, CONFIGURATION_ENTRY_PRECOND_STRENGTH, CONFIGURATION_ENTRY_PRECOND_TYPE, CONFIGURATION_ENTRY_REFRESHER, 
	CONFIGURATION_ENTRY_SIP_CALLS_TIMEOUT, CONFIGURATION_ENTRY_SIP_SESSIONS_TIMEOUT, CONFIGURATION_ENTRY_SESSION_TIMERS,
	
	/* === RCS (GSMA Rich Communication Suite) === */
	CONFIGURATION_ENTRY_AVATAR_PATH, CONFIGURATION_ENTRY_BINARY_SMS, CONFIGURATION_ENTRY_CONF_FACT, CONFIGURATION_ENTRY_FREE_TEXT, CONFIGURATION_ENTRY_HACK_SMS, 
	CONFIGURATION_ENTRY_MSRP_FAILURE,CONFIGURATION_ENTRY_MSRP_SUCCESS, CONFIGURATION_ENTRY_MWI, CONFIGURATION_ENTRY_OMAFDR, CONFIGURATION_ENTRY_PARTIAL_PUB, CONFIGURATION_ENTRY_PRESENCE, 
	CONFIGURATION_ENTRY_RLS, CONFIGURATION_ENTRY_SMSC, CONFIGURATION_ENTRY_STATUS,
	
	/* === SECURITY === */
	CONFIGURATION_ENTRY_TLS_CA_FILE, CONFIGURATION_ENTRY_TLS_PRIV_KEY_FILE, CONFIGURATION_ENTRY_TLS_PUB_KEY_FILE, CONFIGURATION_ENTRY_TLS_SEC_AGREE, 
	CONFIGURATION_ENTRY_IMSAKA_AMF, CONFIGURATION_ENTRY_IMSAKA_OPID,
	
	/* === SESSIONS === */
	
	/* === MEDIA === */
	CONFIGURATION_ENTRY_CODECS,
	
	/* === NATT === */
	CONFIGURATION_ENTRY_HACK_AOR, CONFIGURATION_ENTRY_HACK_AOR_TIMEOUT, CONFIGURATION_ENTRY_USE_STUN, CONFIGURATION_ENTRY_USE_ICE, 
	CONFIGURATION_ENTRY_STUN_DISCO, CONFIGURATION_ENTRY_STUN_SERVER, CONFIGURATION_ENTRY_STUN_PORT, 
	
	/* === XCAP === */
	/* PASSWORD */ CONFIGURATION_ENTRY_XCAP_ROOT, CONFIGURATION_ENTRY_USERNAME
}
CONFIGURATION_ENTRY_T;

@interface Configuration : NSObject {

}

@end