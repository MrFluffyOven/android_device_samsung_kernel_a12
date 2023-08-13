/*************************************************************************/ /*!
@Title          RGX Configuration for BVNC 27.V.254.2 (kernel defines)
@Copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved
@License        Dual MIT/GPLv2

The contents of this file are subject to the MIT license as set out below.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

Alternatively, the contents of this file may be used under the terms of
the GNU General Public License Version 2 ("GPL") in which case the provisions
of GPL are applicable instead of those above.

If you wish to allow use of your version of this file only under the terms of
GPL, and not to allow others to use your version of this file under the terms
of the MIT license, indicate your decision by deleting the provisions above
and replace them with the notice and other provisions required by GPL as set
out in the file called "GPL-COPYING" included in this distribution. If you do
not delete the provisions above, a recipient may use your version of this file
under the terms of either the MIT license or GPL.

This License is also included in this distribution in the file called
"MIT-COPYING".

EXCEPT AS OTHERWISE STATED IN A NEGOTIATED AGREEMENT: (A) THE SOFTWARE IS
PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT; AND (B) IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/ /**************************************************************************/

#ifndef RGXCONFIG_KM_27_V_254_2_H
#define RGXCONFIG_KM_27_V_254_2_H

/***** Automatically generated file. Do not edit manually ********************/

/******************************************************************************
 * B.V.N.C Validation defines
 *****************************************************************************/
#define RGX_BNC_KM_B 27
#define RGX_BNC_KM_N 254
#define RGX_BNC_KM_C 2

/******************************************************************************
 * DDK Defines
 *****************************************************************************/
#define RGX_FEATURE_AXI_ACE
#define RGX_FEATURE_BIF_TILING
#define RGX_FEATURE_CDM_CONTROL_STREAM_FORMAT (4U)
#define RGX_FEATURE_CLUSTER_GROUPING
#define RGX_FEATURE_COMPUTE
#define RGX_FEATURE_COMPUTE_MORTON_CAPABLE
#define RGX_FEATURE_COMPUTE_OVERLAP
#define RGX_FEATURE_COMPUTE_OVERLAP_WITH_BARRIERS
#define RGX_FEATURE_CONTEXT_SWITCH_3D_LEVEL (3U)
#define RGX_FEATURE_COREID_PER_OS
#define RGX_FEATURE_DUST_POWER_ISLAND_S7
#define RGX_FEATURE_ECC_RAMS (0U)
#define RGX_FEATURE_FASTRENDER_DM
#define RGX_FEATURE_FBCDC (4U)
#define RGX_FEATURE_FBCDC_ALGORITHM (4U)
#define RGX_FEATURE_FBCDC_ARCHITECTURE (6U)
#define RGX_FEATURE_GPU_VIRTUALISATION
#define RGX_FEATURE_GS_RTA_SUPPORT
#define RGX_FEATURE_LAYOUT_MARS (0U)
#define RGX_FEATURE_MAX_TPU_PER_SPU (1U)
#define RGX_FEATURE_META (MTP219)
#define RGX_FEATURE_META_COREMEM_BANKS (8U)
#define RGX_FEATURE_META_COREMEM_SIZE (96U)
#define RGX_FEATURE_META_DMA
#define RGX_FEATURE_META_DMA_CHANNEL_COUNT (4U)
#define RGX_FEATURE_MMU_VERSION (3U)
#define RGX_FEATURE_NUM_CLUSTERS (2U)
#define RGX_FEATURE_NUM_ISP_IPP_PIPES (4U)
#define RGX_FEATURE_NUM_ISP_PER_SPU (2U)
#define RGX_FEATURE_NUM_MEMBUS (1U)
#define RGX_FEATURE_NUM_OSIDS (8U)
#define RGX_FEATURE_NUM_SPU (1U)
#define RGX_FEATURE_PBE_CHECKSUM_2D
#define RGX_FEATURE_PBE_PER_SPU (2U)
#define RGX_FEATURE_PBVNC_COREID_REG
#define RGX_FEATURE_PDS_TEMPSIZE8
#define RGX_FEATURE_PERFBUS
#define RGX_FEATURE_PERF_COUNTER_BATCH
#define RGX_FEATURE_PHYS_BUS_WIDTH (40U)
#define RGX_FEATURE_PM_BYTE_ALIGNED_BASE_ADDRESSES
#define RGX_FEATURE_POWER_ISLAND_VERSION (1U)
#define RGX_FEATURE_RAY_TRACING_ARCH (0U)
#define RGX_FEATURE_RENDER_TARGET_XY_MAX (16384U)
#define RGX_FEATURE_S7_CACHE_HIERARCHY
#define RGX_FEATURE_S7_TOP_INFRASTRUCTURE
#define RGX_FEATURE_SCALABLE_TE_ARCH (1U)
#define RGX_FEATURE_SCALABLE_VCE (1U)
#define RGX_FEATURE_SCALABLE_VDM_GPP
#define RGX_FEATURE_SIGNAL_SNOOPING
#define RGX_FEATURE_SLC_BANKS (1U)
#define RGX_FEATURE_SLC_CACHE_LINE_SIZE_BITS (1024U)
#define RGX_FEATURE_SLC_SIZE_IN_KILOBYTES (128U)
#define RGX_FEATURE_SLC_VIVT
#define RGX_FEATURE_SYS_BUS_SECURE_RESET
#define RGX_FEATURE_TDM_PDS_CHECKSUM
#define RGX_FEATURE_TESSELLATION
#define RGX_FEATURE_TILE_SIZE_X (32U)
#define RGX_FEATURE_TILE_SIZE_Y (32U)
#define RGX_FEATURE_TPU_CEM_DATAMASTER_GLOBAL_REGISTERS
#define RGX_FEATURE_TPU_DM_GLOBAL_REGISTERS
#define RGX_FEATURE_VDM_DRAWINDIRECT
#define RGX_FEATURE_VDM_OBJECT_LEVEL_LLS
#define RGX_FEATURE_VIRTUAL_ADDRESS_SPACE_BITS (40U)
#define RGX_FEATURE_ZLS_CHECKSUM

#endif /* RGXCONFIG_KM_27_V_254_2_H */
