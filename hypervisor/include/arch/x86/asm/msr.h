/*
 * Copyright (C) 2018 Intel Corporation.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef MSR_H
#define MSR_H

/* architectural (common) MSRs */

/* Machine check address for MC exception handler */
#define MSR_IA32_P5_MC_ADDR			0x00000000U
/* Machine check error type for MC exception handler */
#define MSR_IA32_P5_MC_TYPE			0x00000001U
/* System coherence line size for MWAIT/MONITOR */
#define MSR_IA32_MONITOR_FILTER_SIZE		0x00000006U
#define MSR_IA32_TIME_STAMP_COUNTER		0x00000010U
#define MSR_IA32_PLATFORM_ID			0x00000017U
#define MSR_IA32_APIC_BASE			0x0000001BU
#define MSR_TEST_CTL				0x00000033U
#define MSR_IA32_FEATURE_CONTROL		0x0000003AU
#define MSR_IA32_TSC_ADJUST			0x0000003BU
/* Speculation Control */
#define MSR_IA32_SPEC_CTRL			0x00000048U
/* Prediction Command */
#define MSR_IA32_PRED_CMD			0x00000049U
#define MSR_IA32_BIOS_UPDT_TRIG			0x00000079U
#define MSR_IA32_BIOS_SIGN_ID			0x0000008BU
#define MSR_IA32_SGXLEPUBKEYHASH0		0x0000008CU
#define MSR_IA32_SGXLEPUBKEYHASH1		0x0000008DU
#define MSR_IA32_SGXLEPUBKEYHASH2		0x0000008EU
#define MSR_IA32_SGXLEPUBKEYHASH3		0x0000008FU
#define MSR_IA32_SMM_MONITOR_CTL		0x0000009BU
#define MSR_IA32_SMBASE				0x0000009EU
#define MSR_IA32_PMC0				0x000000C1U
#define MSR_IA32_PMC1				0x000000C2U
#define MSR_IA32_PMC2				0x000000C3U
#define MSR_IA32_PMC3				0x000000C4U
#define MSR_IA32_PMC4				0x000000C5U
#define MSR_IA32_PMC5				0x000000C6U
#define MSR_IA32_PMC6				0x000000C7U
#define MSR_IA32_PMC7				0x000000C8U
#define MSR_IA32_CORE_CAPABILITIES		0x000000CFU
#define MSR_IA32_UMWAIT_CONTROL			0x000000E1U
/* Max. qualified performance clock counter */
#define MSR_IA32_MPERF				0x000000E7U
/* Actual performance clock counter */
#define MSR_IA32_APERF				0x000000E8U
#define MSR_IA32_MTRR_CAP			0x000000FEU
#define MSR_IA32_ARCH_CAPABILITIES		0x0000010AU
#define MSR_IA32_FLUSH_CMD			0x0000010BU
#define MSR_MISC_FEATURE_ENABLES		0x00000140U
#define MSR_IA32_SYSENTER_CS			0x00000174U
#define MSR_IA32_SYSENTER_ESP			0x00000175U
#define MSR_IA32_SYSENTER_EIP			0x00000176U
#define MSR_IA32_MCG_CAP			0x00000179U
#define MSR_IA32_MCG_STATUS			0x0000017AU
#define MSR_IA32_MCG_CTL			0x0000017BU
#define MSR_IA32_PERFEVTSEL0			0x00000186U
#define MSR_IA32_PERFEVTSEL1			0x00000187U
#define MSR_IA32_PERFEVTSEL2			0x00000188U
#define MSR_IA32_PERFEVTSEL3			0x00000189U
#define MSR_IA32_PERF_STATUS			0x00000198U
#define MSR_IA32_PERF_CTL			0x00000199U
#define MSR_IA32_CLOCK_MODULATION		0x0000019AU
#define MSR_IA32_THERM_INTERRUPT		0x0000019BU
#define MSR_IA32_THERM_STATUS			0x0000019CU
#define MSR_IA32_MISC_ENABLE			0x000001A0U
#define MSR_IA32_ENERGY_PERF_BIAS		0x000001B0U
#define MSR_IA32_PACKAGE_THERM_STATUS		0x000001B1U
#define MSR_IA32_PACKAGE_THERM_INTERRUPT	0x000001B2U
#define MSR_IA32_DEBUGCTL			0x000001D9U
#define MSR_IA32_SMRR_PHYSBASE			0x000001F2U
#define MSR_IA32_SMRR_PHYSMASK			0x000001F3U
#define MSR_IA32_PLATFORM_DCA_CAP		0x000001F8U
#define MSR_IA32_CPU_DCA_CAP			0x000001F9U
#define MSR_IA32_DCA_0_CAP			0x000001FAU
#define MSR_IA32_MTRR_PHYSBASE_0		0x00000200U
#define MSR_IA32_MTRR_PHYSMASK_0		0x00000201U
#define MSR_IA32_MTRR_PHYSBASE_1		0x00000202U
#define MSR_IA32_MTRR_PHYSMASK_1		0x00000203U
#define MSR_IA32_MTRR_PHYSBASE_2		0x00000204U
#define MSR_IA32_MTRR_PHYSMASK_2		0x00000205U
#define MSR_IA32_MTRR_PHYSBASE_3		0x00000206U
#define MSR_IA32_MTRR_PHYSMASK_3		0x00000207U
#define MSR_IA32_MTRR_PHYSBASE_4		0x00000208U
#define MSR_IA32_MTRR_PHYSMASK_4		0x00000209U
#define MSR_IA32_MTRR_PHYSBASE_5		0x0000020AU
#define MSR_IA32_MTRR_PHYSMASK_5		0x0000020BU
#define MSR_IA32_MTRR_PHYSBASE_6		0x0000020CU
#define MSR_IA32_MTRR_PHYSMASK_6		0x0000020DU
#define MSR_IA32_MTRR_PHYSBASE_7		0x0000020EU
#define MSR_IA32_MTRR_PHYSMASK_7		0x0000020FU
#define MSR_IA32_MTRR_PHYSBASE_8		0x00000210U
#define MSR_IA32_MTRR_PHYSMASK_8		0x00000211U
#define MSR_IA32_MTRR_PHYSBASE_9		0x00000212U
#define MSR_IA32_MTRR_PHYSMASK_9		0x00000213U
#define MSR_IA32_MTRR_FIX64K_00000		0x00000250U
#define MSR_IA32_MTRR_FIX16K_80000		0x00000258U
#define MSR_IA32_MTRR_FIX16K_A0000		0x00000259U
#define MSR_IA32_MTRR_FIX4K_C0000		0x00000268U
#define MSR_IA32_MTRR_FIX4K_C8000		0x00000269U
#define MSR_IA32_MTRR_FIX4K_D0000		0x0000026AU
#define MSR_IA32_MTRR_FIX4K_D8000		0x0000026BU
#define MSR_IA32_MTRR_FIX4K_E0000		0x0000026CU
#define MSR_IA32_MTRR_FIX4K_E8000		0x0000026DU
#define MSR_IA32_MTRR_FIX4K_F0000		0x0000026EU
#define MSR_IA32_MTRR_FIX4K_F8000		0x0000026FU
#define MSR_IA32_PAT				0x00000277U
#define MSR_IA32_MC0_CTL2			0x00000280U
#define MSR_IA32_MC1_CTL2			0x00000281U
#define MSR_IA32_MC2_CTL2			0x00000282U
#define MSR_IA32_MC3_CTL2			0x00000283U
#define MSR_IA32_MC4_CTL2			0x00000284U
#define MSR_IA32_MC5_CTL2			0x00000285U
#define MSR_IA32_MC6_CTL2			0x00000286U
#define MSR_IA32_MC7_CTL2			0x00000287U
#define MSR_IA32_MC8_CTL2			0x00000288U
#define MSR_IA32_MC9_CTL2			0x00000289U
#define MSR_IA32_MC10_CTL2			0x0000028AU
#define MSR_IA32_MC11_CTL2			0x0000028BU
#define MSR_IA32_MC12_CTL2			0x0000028CU
#define MSR_IA32_MC13_CTL2			0x0000028DU
#define MSR_IA32_MC14_CTL2			0x0000028EU
#define MSR_IA32_MC15_CTL2			0x0000028FU
#define MSR_IA32_MC16_CTL2			0x00000290U
#define MSR_IA32_MC17_CTL2			0x00000291U
#define MSR_IA32_MC18_CTL2			0x00000292U
#define MSR_IA32_MC19_CTL2			0x00000293U
#define MSR_IA32_MC20_CTL2			0x00000294U
#define MSR_IA32_MC21_CTL2			0x00000295U
#define MSR_IA32_MC31_CTL2			0x0000029FU
#define MSR_IA32_MTRR_DEF_TYPE			0x000002FFU
#define MSR_SGXOWNEREPOCH0			0x00000300U
#define MSR_SGXOWNEREPOCH1			0x00000301U
#define MSR_IA32_FIXED_CTR0			0x00000309U
#define MSR_IA32_FIXED_CTR1			0x0000030AU
#define MSR_IA32_FIXED_CTR2			0x0000030BU
#define MSR_IA32_PERF_CAPABILITIES		0x00000345U
#define MSR_IA32_FIXED_CTR_CTL			0x0000038DU
#define MSR_IA32_PERF_GLOBAL_STATUS		0x0000038EU
#define MSR_IA32_PERF_GLOBAL_CTRL		0x0000038FU
#define MSR_IA32_PERF_GLOBAL_OVF_CTRL		0x00000390U
#define MSR_IA32_PERF_GLOBAL_STATUS_SET		0x00000391U
#define MSR_IA32_PERF_GLOBAL_INUSE		0x00000392U
#define MSR_IA32_PEBS_ENABLE			0x000003F1U
#define MSR_IA32_MC0_CTL			0x00000400U
#define MSR_IA32_MC0_STATUS			0x00000401U
#define MSR_IA32_MC0_ADDR			0x00000402U
#define MSR_IA32_MC0_MISC			0x00000403U
#define MSR_IA32_MC1_CTL			0x00000404U
#define MSR_IA32_MC1_STATUS			0x00000405U
#define MSR_IA32_MC1_ADDR			0x00000406U
#define MSR_IA32_MC1_MISC			0x00000407U
#define MSR_IA32_MC2_CTL			0x00000408U
#define MSR_IA32_MC2_STATUS			0x00000409U
#define MSR_IA32_MC2_ADDR			0x0000040AU
#define MSR_IA32_MC2_MISC			0x0000040BU
#define MSR_IA32_MC3_CTL			0x0000040CU
#define MSR_IA32_MC3_STATUS			0x0000040DU
#define MSR_IA32_MC3_ADDR			0x0000040EU
#define MSR_IA32_MC3_MISC			0x0000040FU
#define MSR_IA32_MC4_CTL			0x00000410U
#define MSR_IA32_MC4_STATUS			0x00000411U
#define MSR_IA32_MC4_ADDR			0x00000412U
#define MSR_IA32_MC4_MISC			0x00000413U
#define MSR_IA32_MC5_CTL			0x00000414U
#define MSR_IA32_MC5_STATUS			0x00000415U
#define MSR_IA32_MC5_ADDR			0x00000416U
#define MSR_IA32_MC5_MISC			0x00000417U
#define MSR_IA32_MC6_CTL			0x00000418U
#define MSR_IA32_MC6_STATUS			0x00000419U
#define MSR_IA32_MC6_ADDR			0x0000041AU
#define MSR_IA32_MC6_MISC			0x0000041BU
#define MSR_IA32_MC7_CTL			0x0000041CU
#define MSR_IA32_MC7_STATUS			0x0000041DU
#define MSR_IA32_MC7_ADDR			0x0000041EU
#define MSR_IA32_MC7_MISC			0x0000041FU
#define MSR_IA32_MC8_CTL			0x00000420U
#define MSR_IA32_MC8_STATUS			0x00000421U
#define MSR_IA32_MC8_ADDR			0x00000422U
#define MSR_IA32_MC8_MISC			0x00000423U
#define MSR_IA32_MC9_CTL			0x00000424U
#define MSR_IA32_MC9_STATUS			0x00000425U
#define MSR_IA32_MC9_ADDR			0x00000426U
#define MSR_IA32_MC9_MISC			0x00000427U
#define MSR_IA32_MC10_CTL			0x00000428U
#define MSR_IA32_MC10_STATUS			0x00000429U
#define MSR_IA32_MC10_ADDR			0x0000042AU
#define MSR_IA32_MC10_MISC			0x0000042BU
#define MSR_IA32_MC11_CTL			0x0000042CU
#define MSR_IA32_MC11_STATUS			0x0000042DU
#define MSR_IA32_MC11_ADDR			0x0000042EU
#define MSR_IA32_MC11_MISC			0x0000042FU
#define MSR_IA32_MC12_CTL			0x00000430U
#define MSR_IA32_MC12_STATUS			0x00000431U
#define MSR_IA32_MC12_ADDR			0x00000432U
#define MSR_IA32_MC12_MISC			0x00000433U
#define MSR_IA32_MC13_CTL			0x00000434U
#define MSR_IA32_MC13_STATUS			0x00000435U
#define MSR_IA32_MC13_ADDR			0x00000436U
#define MSR_IA32_MC13_MISC			0x00000437U
#define MSR_IA32_MC14_CTL			0x00000438U
#define MSR_IA32_MC14_STATUS			0x00000439U
#define MSR_IA32_MC14_ADDR			0x0000043AU
#define MSR_IA32_MC14_MISC			0x0000043BU
#define MSR_IA32_MC15_CTL			0x0000043CU
#define MSR_IA32_MC15_STATUS			0x0000043DU
#define MSR_IA32_MC15_ADDR			0x0000043EU
#define MSR_IA32_MC15_MISC			0x0000043FU
#define MSR_IA32_MC16_CTL			0x00000440U
#define MSR_IA32_MC16_STATUS			0x00000441U
#define MSR_IA32_MC16_ADDR			0x00000442U
#define MSR_IA32_MC16_MISC			0x00000443U
#define MSR_IA32_MC17_CTL			0x00000444U
#define MSR_IA32_MC17_STATUS			0x00000445U
#define MSR_IA32_MC17_ADDR			0x00000446U
#define MSR_IA32_MC17_MISC			0x00000447U
#define MSR_IA32_MC18_CTL			0x00000448U
#define MSR_IA32_MC18_STATUS			0x00000449U
#define MSR_IA32_MC18_ADDR			0x0000044AU
#define MSR_IA32_MC18_MISC			0x0000044BU
#define MSR_IA32_MC19_CTL			0x0000044CU
#define MSR_IA32_MC19_STATUS			0x0000044DU
#define MSR_IA32_MC19_ADDR			0x0000044EU
#define MSR_IA32_MC19_MISC			0x0000044FU
#define MSR_IA32_MC20_CTL			0x00000450U
#define MSR_IA32_MC20_STATUS			0x00000451U
#define MSR_IA32_MC20_ADDR			0x00000452U
#define MSR_IA32_MC20_MISC			0x00000453U
#define MSR_IA32_MC21_CTL			0x00000454U
#define MSR_IA32_MC21_STATUS			0x00000455U
#define MSR_IA32_MC21_ADDR			0x00000456U
#define MSR_IA32_MC21_MISC			0x00000457U
#define MSR_IA32_MC28_CTL			0x00000470U
#define MSR_IA32_MC28_STATUS			0x00000471U
#define MSR_IA32_MC28_ADDR			0x00000472U
#define MSR_IA32_MC28_MISC			0x00000473U
#define MSR_IA32_VMX_BASIC			0x00000480U
#define MSR_IA32_VMX_PINBASED_CTLS		0x00000481U
#define MSR_IA32_VMX_PROCBASED_CTLS		0x00000482U
#define MSR_IA32_VMX_EXIT_CTLS			0x00000483U
#define MSR_IA32_VMX_ENTRY_CTLS			0x00000484U
#define MSR_IA32_VMX_MISC			0x00000485U
#define MSR_IA32_VMX_CR0_FIXED0			0x00000486U
#define MSR_IA32_VMX_CR0_FIXED1			0x00000487U
#define MSR_IA32_VMX_CR4_FIXED0			0x00000488U
#define MSR_IA32_VMX_CR4_FIXED1			0x00000489U
#define MSR_IA32_VMX_VMCS_ENUM			0x0000048AU
#define MSR_IA32_VMX_PROCBASED_CTLS2		0x0000048BU
#define MSR_IA32_VMX_EPT_VPID_CAP		0x0000048CU
#define MSR_IA32_VMX_TRUE_PINBASED_CTLS		0x0000048DU
#define MSR_IA32_VMX_TRUE_PROCBASED_CTLS	0x0000048EU
#define MSR_IA32_VMX_TRUE_EXIT_CTLS		0x0000048FU
#define MSR_IA32_VMX_TRUE_ENTRY_CTLS		0x00000490U
#define MSR_IA32_VMX_VMFUNC			0x00000491U
#define MSR_IA32_VMX_PROCBASED_CTLS3		0x00000492U
#define MSR_IA32_A_PMC0				0x000004C1U
#define MSR_IA32_A_PMC1				0x000004C2U
#define MSR_IA32_A_PMC2				0x000004C3U
#define MSR_IA32_A_PMC3				0x000004C4U
#define MSR_IA32_A_PMC4				0x000004C5U
#define MSR_IA32_A_PMC5				0x000004C6U
#define MSR_IA32_A_PMC6				0x000004C7U
#define MSR_IA32_A_PMC7				0x000004C8U
#define MSR_IA32_MCG_EXT_CTL			0x000004D0U
#define MSR_IA32_SGX_SVN_STATUS			0x00000500U
#define MSR_IA32_RTIT_OUTPUT_BASE		0x00000560U
#define MSR_IA32_RTIT_OUTPUT_MASK_PTRS		0x00000561U
#define MSR_IA32_RTIT_CTL			0x00000570U
#define MSR_IA32_RTIT_STATUS			0x00000571U
#define MSR_IA32_RTIT_CR3_MATCH			0x00000572U
#define MSR_IA32_RTIT_ADDR0_A			0x00000580U
#define MSR_IA32_RTIT_ADDR0_B			0x00000581U
#define MSR_IA32_RTIT_ADDR1_A			0x00000582U
#define MSR_IA32_RTIT_ADDR1_B			0x00000583U
#define MSR_IA32_RTIT_ADDR2_A			0x00000584U
#define MSR_IA32_RTIT_ADDR2_B			0x00000585U
#define MSR_IA32_RTIT_ADDR3_A			0x00000586U
#define MSR_IA32_RTIT_ADDR3_B			0x00000587U
#define MSR_IA32_DS_AREA			0x00000600U
#define MSR_IA32_U_CET				0x000006A0U
#define MSR_IA32_S_CET				0x000006A2U
#define MSR_IA32_PL0_SSP			0x000006A4U
#define MSR_IA32_PL1_SSP			0x000006A5U
#define MSR_IA32_PL2_SSP			0x000006A6U
#define MSR_IA32_PL3_SSP			0x000006A7U
#define MSR_IA32_INTERRUPT_SSP_TABLE_ADDR	0x000006A8U
#define MSR_IA32_TSC_DEADLINE			0x000006E0U
#define MSR_IA32_PM_ENABLE			0x00000770U
#define MSR_IA32_HWP_CAPABILITIES		0x00000771U
#define MSR_IA32_HWP_REQUEST_PKG		0x00000772U
#define MSR_IA32_HWP_INTERRUPT			0x00000773U
#define MSR_IA32_HWP_REQUEST			0x00000774U
#define MSR_IA32_HWP_PECI_REQUEST_INFO		0x00000775U
#define MSR_IA32_HWP_STATUS			0x00000777U

#define MSR_IA32_EXT_XAPICID			0x00000802U
#define MSR_IA32_EXT_APIC_VERSION		0x00000803U
#define MSR_IA32_EXT_APIC_TPR			0x00000808U
#define MSR_IA32_EXT_APIC_PPR			0x0000080AU
#define MSR_IA32_EXT_APIC_EOI			0x0000080BU
#define MSR_IA32_EXT_APIC_LDR			0x0000080DU
#define MSR_IA32_EXT_APIC_SIVR			0x0000080FU
#define MSR_IA32_EXT_APIC_ISR0			0x00000810U
#define MSR_IA32_EXT_APIC_ISR1			0x00000811U
#define MSR_IA32_EXT_APIC_ISR2			0x00000812U
#define MSR_IA32_EXT_APIC_ISR3			0x00000813U
#define MSR_IA32_EXT_APIC_ISR4			0x00000814U
#define MSR_IA32_EXT_APIC_ISR5			0x00000815U
#define MSR_IA32_EXT_APIC_ISR6			0x00000816U
#define MSR_IA32_EXT_APIC_ISR7			0x00000817U
#define MSR_IA32_EXT_APIC_TMR0			0x00000818U
#define MSR_IA32_EXT_APIC_TMR1			0x00000819U
#define MSR_IA32_EXT_APIC_TMR2			0x0000081AU
#define MSR_IA32_EXT_APIC_TMR3			0x0000081BU
#define MSR_IA32_EXT_APIC_TMR4			0x0000081CU
#define MSR_IA32_EXT_APIC_TMR5			0x0000081DU
#define MSR_IA32_EXT_APIC_TMR6			0x0000081EU
#define MSR_IA32_EXT_APIC_TMR7			0x0000081FU
#define MSR_IA32_EXT_APIC_IRR0			0x00000820U
#define MSR_IA32_EXT_APIC_IRR1			0x00000821U
#define MSR_IA32_EXT_APIC_IRR2			0x00000822U
#define MSR_IA32_EXT_APIC_IRR3			0x00000823U
#define MSR_IA32_EXT_APIC_IRR4			0x00000824U
#define MSR_IA32_EXT_APIC_IRR5			0x00000825U
#define MSR_IA32_EXT_APIC_IRR6			0x00000826U
#define MSR_IA32_EXT_APIC_IRR7			0x00000827U
#define MSR_IA32_EXT_APIC_ESR			0x00000828U
#define MSR_IA32_EXT_APIC_LVT_CMCI		0x0000082FU
#define MSR_IA32_EXT_APIC_ICR			0x00000830U
#define MSR_IA32_EXT_APIC_LVT_TIMER		0x00000832U
#define MSR_IA32_EXT_APIC_LVT_THERMAL		0x00000833U
#define MSR_IA32_EXT_APIC_LVT_PMI		0x00000834U
#define MSR_IA32_EXT_APIC_LVT_LINT0		0x00000835U
#define MSR_IA32_EXT_APIC_LVT_LINT1		0x00000836U
#define MSR_IA32_EXT_APIC_LVT_ERROR		0x00000837U
#define MSR_IA32_EXT_APIC_INIT_COUNT		0x00000838U
#define MSR_IA32_EXT_APIC_CUR_COUNT		0x00000839U
#define MSR_IA32_EXT_APIC_DIV_CONF		0x0000083EU
#define MSR_IA32_EXT_APIC_SELF_IPI		0x0000083FU
#define MSR_IA32_DEBUG_INTERFACE		0x00000C80U
#define MSR_IA32_L3_QOS_CFG			0x00000C81U
#define MSR_IA32_L2_QOS_CFG			0x00000C82U
#define MSR_IA32_QM_EVTSEL			0x00000C8DU
#define MSR_IA32_QM_CTR				0x00000C8EU
#define MSR_IA32_PQR_ASSOC			0x00000C8FU
#define MSR_IA32_L3_MASK_BASE			0x00000C90U
#define MSR_IA32_XSS				0x00000DA0U
#define MSR_IA32_PKG_HDC_CTL			0x00000DB0U
#define MSR_IA32_PM_CTL1			0x00000DB1U
#define MSR_IA32_THREAD_STALL			0x00000DB2U
#define MSR_IA32_L2_MASK_BASE			0x00000D10U
#define MSR_IA32_MBA_MASK_BASE			0x00000D50U
#define MSR_IA32_BNDCFGS			0x00000D90U
#define MSR_IA32_COPY_LOCAL_TO_PLATFORM		0x00000D91U
#define MSR_IA32_COPY_PLATFORM_TO_LOCAL		0x00000D92U
#define MSR_IA32_COPY_STATUS			0x00000990U
#define MSR_IA32_IWKEY_BACKUP_STATUS		0x00000991U
#define MSR_IA32_EFER				0xC0000080U
#define MSR_IA32_STAR				0xC0000081U
#define MSR_IA32_LSTAR				0xC0000082U
#define MSR_IA32_CSTAR				0xC0000083U
#define MSR_IA32_FMASK				0xC0000084U
#define MSR_IA32_FS_BASE			0xC0000100U
#define MSR_IA32_GS_BASE			0xC0000101U
#define MSR_IA32_KERNEL_GS_BASE			0xC0000102U
#define MSR_IA32_TSC_AUX			0xC0000103U

/* non-architectural MSRs */
#define MSR_EBL_CR_POWERON			0x0000002AU
#define MSR_EBC_SOFT_POWERON			0x0000002BU
#define MSR_EBC_FREQUENCY_ID			0x0000002CU
#define MSR_SMI_COUNT				0x00000034U
#define MSR_CORE_THREAD_COUNT			0x00000035U
#define MSR_LASTBRANCH_0_FROM_IP		0x00000040U
#define MSR_LASTBRANCH_1_FROM_IP		0x00000041U
#define MSR_LASTBRANCH_2_FROM_IP		0x00000042U
#define MSR_LASTBRANCH_3_FROM_IP		0x00000043U
#define MSR_LASTBRANCH_4_FROM_IP		0x00000044U
#define MSR_LASTBRANCH_5_FROM_IP		0x00000045U
#define MSR_LASTBRANCH_6_FROM_IP		0x00000046U
#define MSR_LASTBRANCH_7_FROM_IP		0x00000047U
#define MSR_PPIN_CTL				0x0000004EU
#define MSR_PPIN				0x0000004FU
#define MSR_THREAD_ID_INFO			0x00000053U
#define MSR_LASTBRANCH_0_TO_LIP			0x00000060U
#define MSR_LASTBRANCH_1_TO_LIP			0x00000061U
#define MSR_LASTBRANCH_2_TO_LIP			0x00000062U
#define MSR_LASTBRANCH_3_TO_LIP			0x00000063U
#define MSR_LASTBRANCH_4_TO_LIP			0x00000064U
#define MSR_LASTBRANCH_5_TO_LIP			0x00000065U
#define MSR_LASTBRANCH_6_TO_LIP			0x00000066U
#define MSR_LASTBRANCH_7_TO_LIP			0x00000067U
#define MSR_TRACE_HUB_STH_ACPIBAR_BASE		0x00000080U
#define MSR_FSB_FREQ				0x000000CDU
#define MSR_PLATFORM_INFO			0x000000CEU
#define MSR_PKG_CST_CONFIG_CONTROL		0x000000E2U
#define MSR_PMG_IO_CAPTURE_BASE			0x000000E4U
#define MSR_UNDOCUMENTED_TJMAX			0x000000EEU
#define MSR_BBL_CR_CTL				0x00000119U
#define MSR_BBL_CR_CTL3				0x0000011EU
#define MSR_FEATURE_CONFIG			0x0000013CU
#define MSR_SMM_MCA_CAP				0x0000017DU
#define MSR_ERROR_CONTROL			0x0000017FU
#define MSR_THERM2_CTL				0x0000019DU
#define MSR_PLATFORM_BRV			0x000001A1U
#define MSR_TEMPERATURE_TARGET			0x000001A2U
#define MSR_MISC_FEATURE_CONTROL		0x000001A4U
#define MSR_OFFCORE_RSP_0			0x000001A6U
#define MSR_OFFCORE_RSP_1			0x000001A7U
#define MSR_MISC_PWR_MGMT			0x000001AAU
#define MSR_TURBO_POWER_CURRENT_LIMIT		0x000001ACU
#define MSR_TURBO_RATIO_LIMIT			0x000001ADU
#define MSR_TURBO_GROUP_CORECNT			0x000001AEU
#define MSR_TURBO_RATIO_LIMIT2			0x000001AFU
#define MSR_LBR_SELECT				0x000001C8U
#define MSR_LASTBRANCH_TOS			0x000001DAU
#define MSR_LASTBRANCH_0			0x000001DBU
#define MSR_LASTBRANCH_1			0x000001DCU
#define MSR_LASTBRANCH_2			0x000001DDU
#define MSR_LASTBRANCH_3			0x000001DEU
#define MSR_PRMRR_PHYS_BASE			0x000001F4U
#define MSR_PRMRR_PHYS_MASK			0x000001F5U
#define MSR_PRMRR_VALID_CONFIG			0x000001FBU
#define MSR_POWER_CTL				0x000001FCU
#define MSR_UNCORE_PRMRR_PHYS_BASE		0x000002F4U
#define MSR_UNCORE_PRMRR_PHYS_MASK		0x000002F5U

#define MSR_BR_DETECT_CTRL			0x00000350U
#define MSR_BR_DETECT_STATUS			0x00000351U
#define MSR_UNCORE_PERF_GLOBAL_OVF_CTRL		0x00000393U
#define MSR_UNCORE_FIXED_CTR0			0x00000394U
#define MSR_UNCORE_FIXED_CTR_CTRL		0x00000395U
#define MSR_UNCORE_ADDR_OPCODE_MATCH		0x00000396U
#define MSR_UNCORE_PMC0				0x000003B0U
#define MSR_UNCORE_PMC1				0x000003B1U
#define MSR_UNCORE_PMC2				0x000003B2U
#define MSR_UNCORE_PMC3				0x000003B3U
#define MSR_UNCORE_PMC4				0x000003B4U
#define MSR_UNCORE_PMC5				0x000003B5U
#define MSR_UNCORE_PMC6				0x000003B6U
#define MSR_UNCORE_PMC7				0x000003B7U
#define MSR_UNCORE_PERFEVTSEL0			0x000003C0U
#define MSR_UNCORE_PERFEVTSEL1			0x000003C1U
#define MSR_UNCORE_PERFEVTSEL2			0x000003C2U
#define MSR_UNCORE_PERFEVTSEL3			0x000003C3U
#define MSR_UNCORE_PERFEVTSEL4			0x000003C4U
#define MSR_UNCORE_PERFEVTSEL5			0x000003C5U
#define MSR_UNCORE_PERFEVTSEL6			0x000003C6U
#define MSR_UNCORE_PERFEVTSEL7			0x000003C7U
#define MSR_PEBS_LD_LAT				0x000003F6U
#define MSR_PEBS_FRONTEND			0x000003F7U
#define MSR_PKG_C2_RESIDENCY			0x000003F8U
#define MSR_PKG_C4_RESIDENCY			0x000003F9U
#define MSR_PKG_C6_RESIDENCY			0x000003FAU
#define MSR_CORE_C3_RESIDENCY			0x000003FCU
#define MSR_CORE_C6_RESIDENCY			0x000003FDU
#define MSR_CORE_C7_RESIDENCY			0x000003FEU
#define MSR_SMM_FEATURE_CONTROL			0x000004E0U
#define MSR_SMM_DELAYED				0x000004E2U
#define MSR_SMM_BLOCKED				0x000004E3U
#define MSR_RAPL_POWER_UNIT			0x00000606U
#define MSR_PKGC3_IRTL				0x0000060AU
#define MSR_PKGC_IRTL1				0x0000060BU
#define MSR_PKGC_IRTL2				0x0000060CU
#define MSR_ATOM_PKG_C2_RESIDENCY		0x0000060DU
#define MSR_PKG_POWER_LIMIT			0x00000610U
#define MSR_PKG_ENERGY_STATUS			0x00000611U
#define MSR_PKG_PERF_STATUS			0x00000613U
#define MSR_PKG_POWER_INFO			0x00000614U
#define MSR_DRAM_POWER_LIMIT			0x00000618U
#define MSR_DRAM_ENERGY_STATUS			0x00000619U
#define MSR_DRAM_PERF_STATUS			0x0000061BU
#define MSR_DRAM_POWER_INFO			0x0000061CU
#define MSR_PCIE_PLL_RATIO			0x0000061EU
#define MSR_UNCORE_RATIO_LIMIT			0x00000620U
#define MSR_PKG_C8_RESIDENCY			0x00000630U
#define MSR_PKG_C9_RESIDENCY			0x00000631U
#define MSR_PKG_C10_RESIDENCY			0x00000632U
#define MSR_PKGC8_IRTL				0x00000633U
#define MSR_PKGC9_IRTL				0x00000634U
#define MSR_PKGC10_IRTL				0x00000635U
#define MSR_PP0_POWER_LIMIT			0x00000638U
#define MSR_PP0_ENERGY_STATUS			0x00000639U
#define MSR_PP0_POLICY				0x0000063AU
#define MSR_PP1_POWER_LIMIT			0x00000640U
#define MSR_PP1_ENERGY_STATUS			0x00000641U
#define MSR_PP1_POLICY				0x00000642U
#define MSR_CONFIG_TDP_NOMINAL			0x00000648U
#define MSR_CONFIG_TDP_LEVEL1			0x00000649U
#define MSR_CONFIG_TDP_LEVEL2			0x0000064AU
#define MSR_CONFIG_TDP_CONTROL			0x0000064BU
#define MSR_TURBO_ACTIVATION_RATIO		0x0000064CU
#define MSR_PLATFORM_ENERGY_COUNTER		0x0000064DU
#define MSR_PPERF				0x0000064EU
#define MSR_ATOM_CORE_PERF_LIMIT_REASONS	0X0000064FU
#define MSR_PKG_HDC_CONFIG			0x00000652U
#define MSR_CORE_HDC_RESIDENCY			0x00000653U
#define MSR_PKG_HDC_SHALLOW_RESIDENCY		0x00000655U
#define MSR_PKG_HDC_DEEP_RESIDENCY		0x00000656U
#define MSR_WEIGHTED_CORE_C0			0x00000658U
#define MSR_ANY_CORE_C0				0x00000659U
#define MSR_ANY_GFXE_C0				0x0000065AU
#define MSR_CORE_GFXE_OVERLAP_C0		0x0000065BU
#define MSR_PLATFORM_POWER_LIMIT		0x0000065CU
#define MSR_CORE_C1_RESIDENCY			0x00000660U
#define MSR_MC6_RESIDENCY_COUNTER		0x00000664U
#define MSR_CC6_DEMOTION_POLICY_CONFIG		0x00000668U
#define MSR_MC6_DEMOTION_POLICY_CONFIG		0x00000669U
#define MSR_ATOM_PKG_POWER_INFO			0x0000066EU
#define MSR_RING_PERF_LIMIT_REASONS		0x00000681U
#define MSR_CORE_PERF_LIMIT_REASONS		0x00000690U
#define MSR_LASTBRANCH_31_FROM_IP		0x0000069FU
#define MSR_GRAPHICS_PERF_LIMIT_REASONS		0x000006B0U
#define MSR_LASTBRANCH_0_TO_IP			0x000006C0U
#define MSR_LASTBRANCH_31_TO_IP			0x000006DFU
#define MSR_IA32_L2_QOS_MASK_0			0x00000D10U
#define MSR_IA32_L2_QOS_MASK_1			0x00000D11U
#define MSR_IA32_L2_QOS_MASK_2			0x00000D12U
#define MSR_IA32_L2_QOS_MASK_3			0x00000D13U
#define MSR_LASTBRANCH_INFO_0			0x00000DC0U
#define MSR_LASTBRANCH_INFO_31			0x00000DDFU
#define MSR_R0_PMON_BOX_STATUS			0x00000E01U
#define MSR_EMON_L3_CTR_CTL0			0x000107CCU
#define MSR_EMON_L3_CTR_CTL1			0x000107CDU
#define MSR_EMON_L3_CTR_CTL2			0x000107CEU
#define MSR_EMON_L3_CTR_CTL3			0x000107CFU
#define MSR_EMON_L3_CTR_CTL4			0x000107D0U
#define MSR_EMON_L3_CTR_CTL5			0x000107D1U
#define MSR_EMON_L3_CTR_CTL6			0x000107D2U
#define MSR_EMON_L3_CTR_CTL7			0x000107D3U

#ifdef PROFILING_ON
/* Core (and Goldmont) specific MSRs */
#define MSR_CORE_LASTBRANCH_TOS			0x000001C9U
/* Last branch record stack TOS */
#define MSR_CORE_LASTBRANCH_0_FROM_IP		0x00000680U
/* Last branch record 0 from IP */
#define MSR_CORE_LASTBRANCH_0_TO_IP		0x000006C0U
/* Last branch record 0 to IP */
#endif

/* LINCROFT specific MSRs */
#define MSR_LNC_BIOS_CACHE_AS_RAM		0x000002E0U	/* Configure CAR */

/* EFER bits */
#define MSR_IA32_EFER_SCE_BIT			(1UL << 0U)
#define MSR_IA32_EFER_LME_BIT			(1UL << 8U)	/* IA32e mode enable */
#define MSR_IA32_EFER_LMA_BIT			(1UL << 10U)	/* IA32e mode active */
#define MSR_IA32_EFER_NXE_BIT			(1UL << 11U)

/* FEATURE CONTROL bits */
#define MSR_IA32_FEATURE_CONTROL_LOCK		(1U << 0U)
#define MSR_IA32_FEATURE_CONTROL_VMX_SMX	(1U << 1U)
#define MSR_IA32_FEATURE_CONTROL_VMX_NO_SMX	(1U << 2U)
#define MSR_IA32_FEATURE_CONTROL_SENTERS_MSK	(0x7F00U)
#define MSR_IA32_FEATURE_CONTROL_SENTER		(1U << 15U)
#define MSR_IA32_FEATURE_CONTROL_SGX_LC		(1U << 17U)
#define MSR_IA32_FEATURE_CONTROL_SGX_GE		(1U << 18U)

/* PAT memory type definitions */
#define PAT_MEM_TYPE_UC				0x00UL	/* uncached */
#define PAT_MEM_TYPE_WC				0x01UL	/* write combining */
#define PAT_MEM_TYPE_WT				0x04UL	/* write through */
#define PAT_MEM_TYPE_WP				0x05UL	/* write protected */
#define PAT_MEM_TYPE_WB				0x06UL	/* writeback */
#define PAT_MEM_TYPE_UCM			0x07UL	/* uncached minus */

/* MISC_ENABLE bits: architectural */
#define MSR_IA32_MISC_ENABLE_FAST_STRING	(1UL << 0U)
#define MSR_IA32_MISC_ENABLE_TCC		(1UL << 3U)
#define MSR_IA32_MISC_ENABLE_PMA		(1UL << 7U)
#define MSR_IA32_MISC_ENABLE_BTS_UNAVAIL	(1UL << 11U)
#define MSR_IA32_MISC_ENABLE_PEBS_UNAVAIL	(1UL << 12U)
#define MSR_IA32_MISC_ENABLE_TM2_ENABLE		(1UL << 13U)
#define MSR_IA32_MISC_ENABLE_EITS		(1UL << 16U)
#define MSR_IA32_MISC_ENABLE_MONITOR_ENA	(1UL << 18U)
#define MSR_IA32_MISC_ENABLE_LIMIT_CPUID	(1UL << 22U)
#define MSR_IA32_MISC_ENABLE_xTPR		(1UL << 23U)
#define MSR_IA32_MISC_ENABLE_XD_DISABLE		(1UL << 34U)

/* MSR_IA32_XSS bits */
#define MSR_IA32_XSS_PT				(1UL << 8U)
#define MSR_IA32_XSS_CET_U			(1UL << 11U)
#define MSR_IA32_XSS_CET_S			(1UL << 12U)
#define MSR_IA32_XSS_HDC			(1UL << 13U)

/* Miscellaneous data */
#define MSR_IA32_MISC_UNRESTRICTED_GUEST	(1U<<5U)

/* Width of physical address used by VMX related region */
#define MSR_IA32_VMX_BASIC_ADDR_WIDTH		(1UL << 48U)

/* 5 high-order bits in every field are reserved */
#define PAT_FIELD_RSV_BITS			(0xF8UL)
/* MSR_TEST_CTL bits */
#define MSR_TEST_CTL_GP_UCLOCK                 (1UL << 28U)
#define MSR_TEST_CTL_AC_SPLITLOCK              (1UL << 29U)
#define MSR_TEST_CTL_DISABLE_LOCK_ASSERTION    (1UL << 31U)

#ifndef ASSEMBLER
static inline bool is_pat_mem_type_invalid(uint64_t x)
{
	return (((x & PAT_FIELD_RSV_BITS) != 0UL) || ((x & 0x6UL) == 0x2UL));
}

static inline bool is_x2apic_msr(uint32_t msr)
{
	/*
	 * if msr is in the range of x2APIC MSRs
	 */
	return ((msr >= 0x800U) && (msr < 0x900U));
}

struct acrn_vcpu;

void init_msr_emulation(struct acrn_vcpu *vcpu);
void init_intercepted_cat_msr_list(void);
uint32_t vmsr_get_guest_msr_index(uint32_t msr);
void update_msr_bitmap_x2apic_apicv(struct acrn_vcpu *vcpu);
void update_msr_bitmap_x2apic_passthru(struct acrn_vcpu *vcpu);

#endif /* ASSEMBLER */

#define PAT_POWER_ON_VALUE	(PAT_MEM_TYPE_WB + \
	(PAT_MEM_TYPE_WT << 8U) + \
	(PAT_MEM_TYPE_UCM << 16U) + \
	(PAT_MEM_TYPE_UC << 24U) + \
	(PAT_MEM_TYPE_WB << 32U) + \
	(PAT_MEM_TYPE_WT << 40U) + \
	(PAT_MEM_TYPE_UCM << 48U) + \
	(PAT_MEM_TYPE_UC << 56U))

#define PAT_ALL_UC_VALUE (PAT_MEM_TYPE_UC + \
	(PAT_MEM_TYPE_UC << 8U) + \
	(PAT_MEM_TYPE_UC << 16U) + \
	(PAT_MEM_TYPE_UC << 24U) + \
	(PAT_MEM_TYPE_UC << 32U) + \
	(PAT_MEM_TYPE_UC << 40U) + \
	(PAT_MEM_TYPE_UC << 48U) + \
	(PAT_MEM_TYPE_UC << 56U))

/* MTRR memory type definitions */
#define MTRR_MEM_TYPE_UC			0x00UL	/* uncached */
#define MTRR_MEM_TYPE_WC			0x01UL	/* write combining */
#define MTRR_MEM_TYPE_WT			0x04UL	/* write through */
#define MTRR_MEM_TYPE_WP			0x05UL	/* write protected */
#define MTRR_MEM_TYPE_WB			0x06UL	/* writeback */

/* misc. MTRR flag definitions */
#define MTRR_ENABLE				0x800U	/* MTRR enable */
#define MTRR_FIX_ENABLE				0x400U	/* fixed range MTRR enable */
#define MTRR_VALID				0x800U	/* MTRR setting is valid */

/* SPEC & PRED bit */
#define SPEC_ENABLE_IBRS			(1U << 0U)
#define SPEC_ENABLE_STIBP			(1U << 1U)
#define PRED_SET_IBPB				(1U << 0U)

/* IA32 ARCH Capabilities bit */
#define IA32_ARCH_CAP_RDCL_NO			(1UL << 0U)
#define IA32_ARCH_CAP_IBRS_ALL			(1UL << 1U)
#define IA32_ARCH_CAP_RSBA			(1UL << 2U)
#define IA32_ARCH_CAP_SKIP_L1DFL_VMENTRY	(1UL << 3U)
#define IA32_ARCH_CAP_SSB_NO			(1UL << 4U)
#define IA32_ARCH_CAP_MDS_NO			(1UL << 5U)
#define IA32_ARCH_CAP_IF_PSCHANGE_MC_NO		(1UL << 6U)

/* Flush L1 D-cache */
#define IA32_L1D_FLUSH				(1UL << 0U)

#endif /* MSR_H */
