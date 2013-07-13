#ifndef __MACH_GPIO_MIDAS_H
#define __MACH_GPIO_MIDAS_H __FILE__

#include <mach/gpio.h>

extern void midas_config_gpio_table(void);
extern void midas_config_sleep_gpio_table(void);

/* GPA0 */
#define GPIO_BT_RXD		EXYNOS4_GPA0(0)
#define GPIO_BT_RXD_AF		2
#define GPIO_BT_TXD		EXYNOS4_GPA0(1)
#define GPIO_BT_TXD_AF		2
#define GPIO_BT_CTS			EXYNOS4_GPA0(2)
#define GPIO_BT_CTS_AF		2
#define GPIO_BT_RTS			EXYNOS4_GPA0(3)
#define GPIO_BT_RTS_AF		2
#define GPIO_GPS_RXD		EXYNOS4_GPA0(4)
#define GPIO_GPS_RXD_AF	2
#define GPIO_GPS_TXD		EXYNOS4_GPA0(5)
#define GPIO_GPS_TXD_AF	2
#define GPIO_GPS_CTS		EXYNOS4_GPA0(6)
#define GPIO_GPS_CTS_AF	2
#define GPIO_GPS_RTS		EXYNOS4_GPA0(7)
#define GPIO_GPS_RTS_AF	2

/* GPA1 */
#define GPIO_AP_RXD		EXYNOS4_GPA1(0)
#define GPIO_AP_TXD		EXYNOS4_GPA1(1)
#define GPIO_TSP_SDA_18V	EXYNOS4_GPA1(2)
#define GPIO_TSP_SCL_18V	EXYNOS4_GPA1(3)
#define GPIO_DOCK_RXD		EXYNOS4_GPA1(4)
#define GPIO_DOCK_TXD		EXYNOS4_GPA1(5)

/* GPB */
#define GPIO_CODEC_SDA_18V_00	EXYNOS4_GPB(0)
#define GPIO_CODEC_SCL_18V_00	EXYNOS4_GPB(1)
#define GPIO_MHL_SDA_1_8V_00	EXYNOS4_GPB(2)
#define GPIO_MHL_SCL_1_8V_00	EXYNOS4_GPB(3)

/* GPC0 */
#define GPIO_PCM_CLK		EXYNOS4_GPC0(0)
#define GPIO_LCD_EN			EXYNOS4_GPC0(1)
#define GPIO_LCD_22V_EN_00	EXYNOS4_GPC0(1)
#define GPIO_PCM_SYNC		EXYNOS4_GPC0(2)
#define GPIO_PCM_IN			EXYNOS4_GPC0(3)
#define GPIO_PCM_OUT		EXYNOS4_GPC0(4)

/* GPC1 */
#define GPIO_PEN_PDCT		EXYNOS4_GPC1(0)
#define GPIO_PEN_LDO_EN	EXYNOS4_GPC1(1)
#define GPIO_PEN_IRQ		EXYNOS4_GPC1(2)
#define GPIO_PEN_SDA		EXYNOS4_GPC1(3)
#define GPIO_PEN_SCL		EXYNOS4_GPC1(4)

/* GPD0 */
#define GPIO_VIBTONE_PWM			EXYNOS4_GPD0(0)
#define GPIO_LED_BACKLIGHT_PWM	EXYNOS4_GPD0(1)
#define GPIO_PMIC_SDA				EXYNOS4_GPD0(2)
#define GPIO_PMIC_SCL				EXYNOS4_GPD0(3)

/* GPD1 */
#define GPIO_5M_CAM_SCL		EXYNOS4_GPD1(0)
#define GPIO_5M_CAM_SDA		EXYNOS4_GPD1(1)
#define GPIO_GSENSE_SDA_18V	EXYNOS4_GPD1(2)
#define GPIO_GSENSE_SCL_18V	EXYNOS4_GPD1(3)

/* GPF0 */
#define GPIO_LCD_FREQ_SCL	EXYNOS4_GPF0(4)
#define GPIO_LCD_FREQ_SDA	EXYNOS4_GPF0(5)

/* GPF1 */
#define GPIO_MDM2AP_HSIC_READY	EXYNOS4_GPF1(1)
#define GPIO_AP2MDM_STATUS		EXYNOS4_GPF1(6)
#if defined(CONFIG_QC_MODEM)
#define GPIO_TSP_VENDOR1			EXYNOS4_GPF1(3)
#else
#define GPIO_TSP_VENDOR1			EXYNOS4_GPF1(6)
#endif
#define GPIO_TSP_VENDOR2			EXYNOS4_GPF1(7)

/* GPF2 */
#define GPIO_VT_CAM_nSTBY				EXYNOS4_GPF2(1)
#define GPIO_MDM2AP_HSIC_PWR_ACTIVE	EXYNOS4_GPF2(2)
#define GPIO_WCN_PRIORITY				EXYNOS4_GPF2(3)
#define GPIO_MDM_LTE_FRAME_SYNC		EXYNOS4_GPF2(4)
#define GPIO_WLAN_WAKE				EXYNOS4_GPF2(5)
#define GPIO_BT_NEW_WAKE    			EXYNOS4_GPF2(6)

/* GPF3 */
#if defined(CONFIG_QC_MODEM)
#define GPIO_BUCK2_NEW_SEL	EXYNOS4_GPF3(0)
#define GPIO_BUCK3_SEL			EXYNOS4_GPF3(1)
#define GPIO_BUCK4_SEL			EXYNOS4_GPF3(2)
#define GPIO_CHG_INT			EXYNOS4_GPF3(3)
#else
#define GPIO_BUCK3_NEW_SEL	EXYNOS4_GPF3(2)
#define GPIO_BUCK4_NEW_SEL	EXYNOS4_GPF3(3)
#endif
#define GPIO_MHL_RST			EXYNOS4_GPF3(4)
#define GPIO_MHL_INT			EXYNOS4_GPF3(5)

/* GPJ0 */
#define GPIO_AP2MDM_ERR_FATAL	EXYNOS4212_GPJ0(1)
#define GPIO_SUB_MIC_BIAS_EN		EXYNOS4212_GPJ0(3)
#define GPIO_EAR_SND_SEL			EXYNOS4212_GPJ0(4)
#define GPIO_CAM_EN2				EXYNOS4212_GPJ0(5)
#define GPIO_CAM_EN1				EXYNOS4212_GPJ0(6)
#define GPIO_5M_nSTBY				EXYNOS4212_GPJ0(7)

/* GPJ1 */
#define GPIO_VT_CAM_nRST	EXYNOS4212_GPJ1(0)
#define GPIO_PS_ALS_EN		EXYNOS4212_GPJ1(1)
#define GPIO_LINEOUT_EN	EXYNOS4212_GPJ1(2)
#define GPIO_CAM_MCLK		EXYNOS4212_GPJ1(3)
#define GPIO_MHL_INT_AF	S3C_GPIO_SFN(0xF)
#define MHL_INT_IRQ			gpio_to_irq(GPIO_MHL_INT)
#define GPIO_MHL_WAKE_UP	EXYNOS4212_GPJ1(4)
#define MHL_WAKEUP_IRQ	gpio_to_irq(GPIO_MHL_WAKE_UP)
//#define GPIO_CAM_SW_EN		EXYNOS4212_GPJ1(0)
//#define GPIO_TORCH_SET		EXYNOS4212_GPJ1(2)

/* GPK0 */
#define GPIO_eMMC_CLK		EXYNOS4_GPK0(0)
#define GPIO_eMMC_CMD		EXYNOS4_GPK0(1)
#define GPIO_eMMC_EN		EXYNOS4_GPK0(2)
#define GPIO_eMMC_D0		EXYNOS4_GPK0(3)
#define GPIO_eMMC_D1		EXYNOS4_GPK0(4)
#define GPIO_eMMC_D2		EXYNOS4_GPK0(5)
#define GPIO_eMMC_D3		EXYNOS4_GPK0(6)

/* GPK1 */
#define GPIO_eMMC_D4		EXYNOS4_GPK1(3)
#define GPIO_eMMC_D5		EXYNOS4_GPK1(4)
#define GPIO_eMMC_D6		EXYNOS4_GPK1(5)
#define GPIO_eMMC_D7		EXYNOS4_GPK1(6)

/* GPK2 */
#define GPIO_TFLASH_CLK	EXYNOS4_GPK2(0)
#define GPIO_TFLASH_CMD	EXYNOS4_GPK2(1)
#define GPIO_TFLASH_D0		EXYNOS4_GPK2(3)
#define GPIO_TFLASH_D1		EXYNOS4_GPK2(4)
#define GPIO_TFLASH_D2		EXYNOS4_GPK2(5)
#define GPIO_TFLASH_D3		EXYNOS4_GPK2(6)

/* GPK3 */
#define GPIO_WLAN_SDIO_CLK		EXYNOS4_GPK3(0)
#define GPIO_WLAN_SDIO_CLK_AF		2
#define GPIO_WLAN_SDIO_CMD		EXYNOS4_GPK3(1)
#define GPIO_WLAN_SDIO_CMD_AF	2
#define GPIO_WLAN_SDIO_D0			EXYNOS4_GPK3(3)
#define GPIO_WLAN_SDIO_D0_AF		2
#define GPIO_WLAN_SDIO_D1			EXYNOS4_GPK3(4)
#define GPIO_WLAN_SDIO_D1_AF		2
#define GPIO_WLAN_SDIO_D2			EXYNOS4_GPK3(5)
#define GPIO_WLAN_SDIO_D2_AF		2
#define GPIO_WLAN_SDIO_D3			EXYNOS4_GPK3(6)
#define GPIO_WLAN_SDIO_D3_AF		2

/* GPL0 */
#define GPIO_ACTIVE_STATE			EXYNOS4_GPL0(0)
#define GPIO_AP2MDM_PMIC_RESET_N	EXYNOS4_GPL0(0)
#define GPIO_PS_ALS_SCL_28V		EXYNOS4_GPL0(1)
#define GPIO_PS_ALS_SDA_28V		EXYNOS4_GPL0(2)
#define GPIO_IRDA_WAKE				EXYNOS4_GPL0(3)
#define GPIO_HDMI_EN				EXYNOS4_GPL0(4)
#define GPIO_BT_EN					EXYNOS4_GPL0(6)

/* GPL1 */
#define GPIO_PDA_ACTIVE	EXYNOS4_GPL1(0)
#define GPIO_5M_nRST		EXYNOS4_GPL1(1)

/* GPL2 */
#define GPIO_GYRO_DE				EXYNOS4_GPL2(0)
#define GPIO_IRDA_EN				EXYNOS4_GPL2(1)
#define GPIO_GPS_PWR_EN			EXYNOS4_GPL2(2)
#define GPIO_MOTOR_EN				EXYNOS4_GPL2(4)
#define GPIO_PHONE_ON				EXYNOS4_GPL2(5)
#define GPIO_AP2MDM_PON_RESET_N	EXYNOS4_GPL2(5)
#define GPIO_ACCESSORY_EN			EXYNOS4_GPL2(6)
#define GPIO_UART_SEL				EXYNOS4_GPL2(7)

/* GPM0 */
#define GPIO_MIC_BIAS_EN			EXYNOS4212_GPM0(0)
#define GPIO_LED_BACKLIGHT_RESET	EXYNOS4212_GPM0(1)
#define GPIO_TSP_2TOUCH_EN		EXYNOS4212_GPM0(5)
#define GPIO_IRDA_IRQ				EXYNOS4212_GPM0(6)

/* GPM1 */
#define GPIO_LED_BACKLIGHT_SDA	EXYNOS4212_GPM1(0)
#define GPIO_LED_BACKLIGHT_SCL	EXYNOS4212_GPM1(1)
#define GPIO_HW_REV0				EXYNOS4212_GPM1(2)
#define GPIO_HW_REV1				EXYNOS4212_GPM1(3)
#define GPIO_HW_REV2				EXYNOS4212_GPM1(4)
#define GPIO_HW_REV3				EXYNOS4212_GPM1(5)

/* GPM2 */
#define GPIO_CHG_SDA			EXYNOS4212_GPM2(0)
#define GPIO_CHG_SCL			EXYNOS4212_GPM2(1)
#define GPIO_VTCAM_MCLK		EXYNOS4212_GPM2(2)
#define GPIO_TSP_INT			EXYNOS4212_GPM2(3)
#define GPIO_SUSPEND_REQUEST	EXYNOS4212_GPM2(4)
#define GPIO_AP2MDM_WAKEUP	EXYNOS4212_GPM2(4)

/* GPM3 */
#define GPIO_PMIC_DVS1				EXYNOS4212_GPM3(0)
#define GPIO_PMIC_DVS2				EXYNOS4212_GPM3(1)
#define GPIO_PMIC_DVS3				EXYNOS4212_GPM3(2)
#define GPIO_CP_REQ_RESET			EXYNOS4212_GPM3(3)
#define GPIO_AP2MDM_SOFT_RESET	EXYNOS4212_GPM3(3)
#define GPIO_AP_DUMP_INT			EXYNOS4212_GPM3(4)
#define GPIO_WLAN_EN				EXYNOS4212_GPM3(5)
#define GPIO_WLAN_EN_AF			1
#define GPIO_CP_DUMP_INT			EXYNOS4212_GPM3(6)

/* GPM4 */
#define GPIO_ADC_SCL			EXYNOS4212_GPM4(0)
#define GPIO_ADC_SDA			EXYNOS4212_GPM4(1)
#define GPIO_VT_CAM_SCL_18V	EXYNOS4212_GPM4(2)
#define GPIO_VT_CAM_SDA_18V	EXYNOS4212_GPM4(3)
#define GPIO_CODEC_LDO_EN		EXYNOS4212_GPM4(4)
#define GPIO_WM8994_LDO		EXYNOS4212_GPM4(4)
#define GPIO_TSP_LDO_ON		EXYNOS4212_GPM4(5)
#define GPIO_OTG_EN			EXYNOS4212_GPM4(6)

/* GPX0 */
#define GPIO_ACC_INT			EXYNOS4_GPX0(0)
#define GPIO_ADC_INT			EXYNOS4_GPX0(1)
#define GPIO_PS_ALS_INT			EXYNOS4_GPX0(2)
#define GPIO_EAR_SEND_END_LTE	EXYNOS4_GPX0(2)
#define GPIO_HALL_SENSOR_INT	EXYNOS4_GPX0(3)
#define GPIO_DOCK_INT			EXYNOS4_GPX0(4)
#define GPIO_MDM2AP_STATUS	EXYNOS4_GPX0(5)
#if !defined(CONFIG_QC_MODEM)
#define GPIO_REMOTE_SENSE_IRQ	EXYNOS4_GPX0(5)
#endif
#define GPIO_GYRO_INT			EXYNOS4_GPX0(6)
#if !defined(CONFIG_QC_MODEM)
#define GPIO_CHG_INT			EXYNOS4_GPX0(6)
#endif
#define GPIO_MDM2AP_HSIC_RESUME_REQ	EXYNOS4_GPX0(6)
#define GPIO_PMIC_IRQ			EXYNOS4_GPX0(7)

/* GPX1 */
#define GPIO_IPC_SLAVE_WAKEUP		EXYNOS4_GPX1(0)
#define GPIO_AP2MDM_VDDMIN		EXYNOS4_GPX1(0)
#define GPIO_MDM2AP_VDDMIN		EXYNOS4_GPX1(1)
#define GPIO_IPC_HOST_WAKEUP		EXYNOS4_GPX1(1)
#if !defined(CONFIG_QC_MODEM)
#define GPIO_OK_KEY_ANDROID		EXYNOS4_GPX1(2)
#endif
#define GPIO_MDM2AP_ERR_FATAL	EXYNOS4_GPX1(2)
#define GPIO_ACCESSORY_INT		EXYNOS4_GPX1(3)
#define GPIO_TA_nCONNECTED		EXYNOS4_GPX1(4)
#define GPIO_PEN_DETECT			EXYNOS4_GPX1(5)
#define GPIO_PHONE_ACTIVE			EXYNOS4_GPX1(6)
#define GPIO_MDM_LTE_ACTIVE		EXYNOS4_GPX1(6)
#define GPIO_SIM_DETECT			EXYNOS4_GPX1(7)

/* GPX2 */
#if !defined(CONFIG_QC_MODEM)
#define GPIO_BUCK3_SEL				EXYNOS4_GPX2(0)
#define GPIO_BUCK4_SEL				EXYNOS4_GPX2(1)
#else
#define GPIO_REMOTE_SENSE_IRQ		EXYNOS4_GPX2(0)
#define GPIO_OK_KEY_ANDROID		EXYNOS4_GPX2(1)
#endif
#define GPIO_VOL_UP				EXYNOS4_GPX2(2)
#define GPIO_FUEL_ALERT			EXYNOS4_GPX2(3)
#define GPIO_BUCK2_SEL				EXYNOS4_GPX2(4)
#define GPIO_EAR_DET_LTE			EXYNOS4_GPX2(4)
#define GPIO_WLAN_HOST_WAKE		EXYNOS4_GPX2(5)
#define GPIO_WLAN_HOST_WAKE_AF	0xF
#define GPIO_BT_HOST_WAKE			EXYNOS4_GPX2(6)
#define IRQ_BT_HOST_WAKE			IRQ_EINT(22)
#define GPIO_nPOWER				EXYNOS4_GPX2(7)

/* GPX3 */
#define GPIO_IF_CON_SENSE					EXYNOS4_GPX3(0)
#define GPIO_BT_WAKE						EXYNOS4_GPX3(1)
#define GPIO_CHG_NEW_INT					EXYNOS4_GPX3(1)
#define GPIO_AP2MDM_HSIC_PORT_ACTIVE	EXYNOS4_GPX3(2)
#define GPIO_CP_RST							EXYNOS4_GPX3(2)
#define GPIO_VOL_DOWN						EXYNOS4_GPX3(3)
#define GPIO_TFLASH_DETECT					EXYNOS4_GPX3(4)
#define GPIO_ACCESSORY_OUT_5V			EXYNOS4_GPX3(5)
#define GPIO_EAR_SEND_END					EXYNOS4_GPX3(6)
#define GPIO_HDMI_HPD						EXYNOS4_GPX3(7)

/* GPY0 */
#define GPIO_IRDA_SDA		EXYNOS4_GPY0(0)
#define GPIO_IRDA_SCL		EXYNOS4_GPY0(1)
#define GPIO_FUEL_SDA		EXYNOS4_GPY0(2)
#define GPIO_FUEL_SCL		EXYNOS4_GPY0(3)
#define GPIO_USB_SEL0		EXYNOS4_GPY0(4)
#define GPIO_USB_SEL1		EXYNOS4_GPY0(5)

/* GPY1 */
#define GPIO_PEN_FWE1		EXYNOS4_GPY1(3)

/* GPY2 */
#define GPIO_TF_EN				EXYNOS4_GPY2(0)
#define GPIO_UART_SEL2			EXYNOS4_GPY2(1)
#define GPIO_MHL_SDA_1_8V		EXYNOS4_GPY2(2)
#define GPIO_MHL_SCL_1_8V		EXYNOS4_GPY2(3)
#define GPIO_MSENSOR_SDA_18V	EXYNOS4_GPY2(4)
#define GPIO_MSENSOR_SCL_18V	EXYNOS4_GPY2(5)

#endif /* __MACH_GPIO_MIDAS_H */
