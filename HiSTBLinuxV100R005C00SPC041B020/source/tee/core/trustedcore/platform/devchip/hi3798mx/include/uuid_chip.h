/**
 * @ingroup  TEE_COMMON_DATA
 *
 * widevine ����
 */
#define TEE_SERVICE_WIDEVINE \
{ \
    0x79b77788, \
    0x9789, \
    0x4a7a, \
    { \
        0xa2, 0xbe, 0xb6, 0x01, 0x55, 0xee, 0xf5, 0xf8 \
    } \
}

/**
 * @ingroup  TEE_COMMON_DATA
 *
 * playready ����
 */
#define TEE_SERVICE_PLAYREADY \
{ \
    0x79b77788, \
    0x9789, \
    0x4a7a, \
    { \
        0xa2, 0xbe, 0xb6, 0x01, 0x55, 0xee, 0xf5, 0xf9 \
    } \
}

/**
 * @ingroup  TEE_COMMON_DATA
 *
 * HDMI HDCP ���ܷ���
 */
#define TEE_SERVICE_HDMI \
{ \
    0x08080601, \
    0x0100, \
    0x0000, \
    { \
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 \
    } \
}

/**
 * @ingroup  TEE_COMMON_DATA
 *
 * Notification task
 */
#define TEE_SERVICE_HISI_DEMO \
{ \
     0x0B0B0B0B, \
     0x0B0B, \
     0x0B0B, \
     { \
         0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B \
     } \
}

#define TEE_SERVICE_DRM \
{ \
	0x14047d2d, \
	0xf236, \
	0x48a0, \
	{ \
		0xa0, 0xc4, 0xc1, 0xcc, 0xcb, 0xb6, 0x45, 0x46 \
	} \
}

/**
 * @ingroup  TEE_COMMON_DATA
 *
 * Notification task
 */
#define TEE_SERVICE_SEC_MMZ \
{ \
     0x0C0C0C0C, \
     0x0C0C, \
     0x0C0C, \
     { \
         0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C \
     } \
}

/**
 * @ingroup  TEE_COMMON_DATA
 *
 * Notification task
 */
#define TEE_SERVICE_VFMW \
{ \
     0x0D0D0D0D, \
     0x0D0D, \
     0x0D0D, \
     { \
         0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D \
     } \
}

/**
 * @ingroup  TEE_COMMON_DATA
 *
 * Notification task
 */
#define TEE_SERVICE_HISI_TEST \
{ \
     0x0E0E0E0E, \
     0x0E0E, \
     0x0E0E, \
     { \
         0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E \
     } \
}

#define TEE_SERVICE_HISI_VDP \
{ \
     0x1E1E1E1E, \
     0x1E1E, \
     0x1E1E, \
     { \
         0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E \
     } \
}

/**
 * SMMU TASK
 *
 */
#define TEE_SERVICE_SMMU \
{\
	0x0F0F0F0F, \
	0x0F0F, \
	0x0F0F, \
	{\
		0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F \
	}\
}

#define TEE_SERVICE_VPSS \
{\
       0x3acc8b1b, \
       0xa7e1, \
       0xe511, \
       {\
               0xb8,0x6d,0x9a,0x79,0xf0,0x6e,0x94,0x78 \
       }\
}

/**
 * @ingroup  TEE_COMMON_DATA
 *
 * Notification task
 */
#define TEE_SERVICE_DMX \
{\
	0x10101010, \
	0x1010, \
	0x1010, \
	{\
		0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 \
	}\
}

/**
 * @ingroup  TEE_STB_PVR
 *
 * Notification task
 */
#define TEE_SERVICE_PVR \
{ \
     0x11111111, \
     0x1111, \
     0x1111, \
     { \
         0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11 \
     } \
}

/**
 * @ingroup  TEE_ID
 *
 * VMX ULTRA VMXTA task
 */
#define TEE_SERVICE_STB_VMX_ULTRA_VMXTA \
{ \
     0x22222222, \
     0x2222, \
     0x2222, \
     { \
         0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22 \
     } \
}

/**
 * @ingroup  TEE_ID
 *
 * VMX ULTRA videomarkTA task
 */
#define TEE_SERVICE_STB_VMX_ULTRA_videomarkTA \
{ \
     0x33333333, \
     0x3333, \
     0x3333, \
     { \
         0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33 \
     } \
}

/**
 * @ingroup  TEE_ID
 *
 * VMX ULTRA VMXTAC_TEST_TA2
 */
#define TEE_SERVICE_STB_VMX_ULTRA_VMXTAC_TEST_TA2 \
{ \
     0x44444444, \
     0x4444, \
     0x4444, \
     { \
         0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44 \
     } \
}
/**
 * @ingroup  TEE_ID
 *
 * VMX ULTRA VMXTAC_TEST_TA3
 */
#define TEE_SERVICE_STB_VMX_ULTRA_VMXTAC_TEST_TA3 \
{ \
     0x55555555, \
     0x5555, \
     0x5555, \
     { \
         0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55 \
     } \
}

/**
 * @ingroup  TEE_ID
 *
 * VMX ULTRA update TA
 */
#define TEE_SERVICE_STB_UPDATE_TA \
{ \
     0x66666666, \
     0x6666, \
     0x6666, \
     { \
         0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66 \
     } \
}

/**
 * @ingroup  TEE_ID
 *
 * VMX ULTRA diplay TA
 */
#define TEE_SERVICE_STB_DISPLAY_TA \
{ \
     0x77777777, \
     0x7777, \
     0x7777, \
     { \
         0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77 \
     } \
}