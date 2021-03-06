/*
 * imx185_mode_tbls.h - imx185 sensor mode tables
 *
 * Copyright (c) 2016, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __IMX185_I2C_TABLES__
#define __IMX185_I2C_TABLES__

#include <media/camera_common.h>
#include <linux/miscdevice.h>

#define IMX185_TABLE_WAIT_MS	0
#define IMX185_TABLE_END	1
#define IMX185_MAX_RETRIES	3
#define IMX185_WAIT_MS_STOP	1
#define IMX185_WAIT_MS_START	30
#define IMX185_WAIT_MS_STREAM	210
#define IMX185_GAIN_TABLE_SIZE 255

/*
#define INIT_ET_INSETTING 1
*/

#define imx185_reg struct reg_8

struct  gain_lookup_table {
	u8 gain_x;
	u8 reg_val;
};

static const struct gain_lookup_table
	imx185_gain_lookup_table[IMX185_GAIN_TABLE_SIZE] = {
	/*(20.0f*log10((x))*160.0f /48.0f)) */
	{0x01, 0x00},
	{0x02, 0x14},
	{0x03, 0x1F},
	{0x04, 0x28},
	{0x05, 0x2E},
	{0x06, 0x33},
	{0x07, 0x38},
	{0x08, 0x3C},
	{0x09, 0x3F},
	{0x0A, 0x42},
	{0x0B, 0x45},
	{0x0C, 0x47},
	{0x0D, 0x4A},
	{0x0E, 0x4C},
	{0x0F, 0x4E},
	{0x10, 0x50},
	{0x11, 0x52},
	{0x12, 0x53},
	{0x13, 0x55},
	{0x14, 0x56},
	{0x15, 0x58},
	{0x16, 0x59},
	{0x17, 0x5A},
	{0x18, 0x5C},
	{0x19, 0x5D},
	{0x1A, 0x5E},
	{0x1B, 0x5F},
	{0x1C, 0x60},
	{0x1D, 0x61},
	{0x1E, 0x62},
	{0x1F, 0x63},
	{0x20, 0x64},
	{0x21, 0x65},
	{0x22, 0x66},
	{0x23, 0x66},
	{0x24, 0x67},
	{0x25, 0x68},
	{0x26, 0x69},
	{0x27, 0x6A},
	{0x28, 0x6A},
	{0x29, 0x6B},
	{0x2A, 0x6C},
	{0x2B, 0x6C},
	{0x2C, 0x6D},
	{0x2D, 0x6E},
	{0x2E, 0x6E},
	{0x2F, 0x6F},
	{0x30, 0x70},
	{0x31, 0x70},
	{0x32, 0x71},
	{0x33, 0x71},
	{0x34, 0x72},
	{0x35, 0x72},
	{0x36, 0x73},
	{0x37, 0x74},
	{0x38, 0x74},
	{0x39, 0x75},
	{0x3A, 0x75},
	{0x3B, 0x76},
	{0x3C, 0x76},
	{0x3D, 0x77},
	{0x3E, 0x77},
	{0x3F, 0x77},
	{0x40, 0x78},
	{0x41, 0x78},
	{0x42, 0x79},
	{0x43, 0x79},
	{0x44, 0x7A},
	{0x45, 0x7A},
	{0x46, 0x7B},
	{0x47, 0x7B},
	{0x48, 0x7B},
	{0x49, 0x7C},
	{0x4A, 0x7C},
	{0x4B, 0x7D},
	{0x4C, 0x7D},
	{0x4D, 0x7D},
	{0x4E, 0x7E},
	{0x4F, 0x7E},
	{0x50, 0x7E},
	{0x51, 0x7F},
	{0x52, 0x7F},
	{0x53, 0x7F},
	{0x54, 0x80},
	{0x55, 0x80},
	{0x56, 0x80},
	{0x57, 0x81},
	{0x58, 0x81},
	{0x59, 0x81},
	{0x5A, 0x82},
	{0x5B, 0x82},
	{0x5C, 0x82},
	{0x5D, 0x83},
	{0x5E, 0x83},
	{0x5F, 0x83},
	{0x60, 0x84},
	{0x61, 0x84},
	{0x62, 0x84},
	{0x63, 0x85},
	{0x64, 0x85},
	{0x65, 0x85},
	{0x66, 0x85},
	{0x67, 0x86},
	{0x68, 0x86},
	{0x69, 0x86},
	{0x6A, 0x87},
	{0x6B, 0x87},
	{0x6C, 0x87},
	{0x6D, 0x87},
	{0x6E, 0x88},
	{0x6F, 0x88},
	{0x70, 0x88},
	{0x71, 0x88},
	{0x72, 0x89},
	{0x73, 0x89},
	{0x74, 0x89},
	{0x75, 0x89},
	{0x76, 0x8A},
	{0x77, 0x8A},
	{0x78, 0x8A},
	{0x79, 0x8A},
	{0x7A, 0x8B},
	{0x7B, 0x8B},
	{0x7C, 0x8B},
	{0x7D, 0x8B},
	{0x7E, 0x8C},
	{0x7F, 0x8C},
	{0x80, 0x8C},
	{0x81, 0x8C},
	{0x82, 0x8C},
	{0x83, 0x8D},
	{0x84, 0x8D},
	{0x85, 0x8D},
	{0x86, 0x8D},
	{0x87, 0x8E},
	{0x88, 0x8E},
	{0x89, 0x8E},
	{0x8A, 0x8E},
	{0x8B, 0x8E},
	{0x8C, 0x8F},
	{0x8D, 0x8F},
	{0x8E, 0x8F},
	{0x8F, 0x8F},
	{0x90, 0x8F},
	{0x91, 0x90},
	{0x92, 0x90},
	{0x93, 0x90},
	{0x94, 0x90},
	{0x95, 0x90},
	{0x96, 0x91},
	{0x97, 0x91},
	{0x98, 0x91},
	{0x99, 0x91},
	{0x9A, 0x91},
	{0x9B, 0x92},
	{0x9C, 0x92},
	{0x9D, 0x92},
	{0x9E, 0x92},
	{0x9F, 0x92},
	{0xA0, 0x92},
	{0xA1, 0x93},
	{0xA2, 0x93},
	{0xA3, 0x93},
	{0xA4, 0x93},
	{0xA5, 0x93},
	{0xA6, 0x94},
	{0xA7, 0x94},
	{0xA8, 0x94},
	{0xA9, 0x94},
	{0xAA, 0x94},
	{0xAB, 0x94},
	{0xAC, 0x95},
	{0xAD, 0x95},
	{0xAE, 0x95},
	{0xAF, 0x95},
	{0xB0, 0x95},
	{0xB1, 0x95},
	{0xB2, 0x96},
	{0xB3, 0x96},
	{0xB4, 0x96},
	{0xB5, 0x96},
	{0xB6, 0x96},
	{0xB7, 0x96},
	{0xB8, 0x96},
	{0xB9, 0x97},
	{0xBA, 0x97},
	{0xBB, 0x97},
	{0xBC, 0x97},
	{0xBD, 0x97},
	{0xBE, 0x97},
	{0xBF, 0x98},
	{0xC0, 0x98},
	{0xC1, 0x98},
	{0xC2, 0x98},
	{0xC3, 0x98},
	{0xC4, 0x98},
	{0xC5, 0x98},
	{0xC6, 0x99},
	{0xC7, 0x99},
	{0xC8, 0x99},
	{0xC9, 0x99},
	{0xCA, 0x99},
	{0xCB, 0x99},
	{0xCC, 0x99},
	{0xCD, 0x9A},
	{0xCE, 0x9A},
	{0xCF, 0x9A},
	{0xD0, 0x9A},
	{0xD1, 0x9A},
	{0xD2, 0x9A},
	{0xD3, 0x9A},
	{0xD4, 0x9B},
	{0xD5, 0x9B},
	{0xD6, 0x9B},
	{0xD7, 0x9B},
	{0xD8, 0x9B},
	{0xD9, 0x9B},
	{0xDA, 0x9B},
	{0xDB, 0x9C},
	{0xDC, 0x9C},
	{0xDD, 0x9C},
	{0xDE, 0x9C},
	{0xDF, 0x9C},
	{0xE0, 0x9C},
	{0xE1, 0x9C},
	{0xE2, 0x9C},
	{0xE3, 0x9D},
	{0xE4, 0x9D},
	{0xE5, 0x9D},
	{0xE6, 0x9D},
	{0xE7, 0x9D},
	{0xE8, 0x9D},
	{0xE9, 0x9D},
	{0xEA, 0x9D},
	{0xEB, 0x9E},
	{0xEC, 0x9E},
	{0xED, 0x9E},
	{0xEE, 0x9E},
	{0xEF, 0x9E},
	{0xF0, 0x9E},
	{0xF1, 0x9E},
	{0xF2, 0x9E},
	{0xF3, 0x9F},
	{0xF4, 0x9F},
	{0xF5, 0x9F},
	{0xF6, 0x9F},
	{0xF7, 0x9F},
	{0xF8, 0x9F},
	{0xF9, 0x9F},
	{0xFA, 0x9F},
	{0xFB, 0x9F},
	{0xFC, 0xA0},
	{0xFD, 0xA0},
	{0xFE, 0xA0},
	{0xFF, 0xA0}
};

static imx185_reg imx185_start[] = {
	{0x3000, 0x00 },
	{IMX185_TABLE_WAIT_MS, IMX185_WAIT_MS_START},
	{0x3002, 0x00},
	{0x3049, 0x0a},
	{IMX185_TABLE_WAIT_MS, IMX185_WAIT_MS_STREAM},
	{ IMX185_TABLE_END, 0x00 }
};

static imx185_reg imx185_stop[] = {
	{0x3000, 0x01 },
	{IMX185_TABLE_WAIT_MS, IMX185_WAIT_MS_STOP},
	{IMX185_TABLE_END, 0x00 }
};

static imx185_reg tp_colorbars[] = {
	{0x300A, 0x00},/*BLC for PG*/
	{0x300E, 0x00},
	{0x3089, 0x00},
	{0x308C, 0x13},
	/*
	* bit 0: PG mode enable
	* bit 1: Back Ground Transient:
	* bit [4-7]: PG mode setting, Set at 0h to Fh, suggest 1 or 5
	* raw12 max output FFEh
	*/
	{IMX185_TABLE_WAIT_MS, IMX185_WAIT_MS_STOP},
	{IMX185_TABLE_END, 0x00}
};


/* IMX185_I2C_MIPI_HD1080p_RAW12_60fps.txt
	output: 2200x1125
	total pixels: 1952x1115
	recording pixels: 1920x1080
	data rate: 445.5Mhz
	pixel rate: 148.5Mhz
	mclk_khz = "37125";
	num_lanes = "4";
	fps: 60fps
*/
static imx185_reg imx185_1952x1115[] = {
	{0x3002, 0x01},
	{0x3005, 0x01},
	{0x3006, 0x00},
	{0x3007, 0x10},
	{0x3009, 0x01},
	{0x300a, 0xf0},
	{0x300f, 0x01},
	{0x3018, 0x65},
	{0x3019, 0x04},
	{0x301b, 0x4c},
	{0x301c, 0x04},
	{0x301d, 0x08},
	{0x301e, 0x02},
	{0x3044, 0xe1},
	{0x3048, 0x33},

	{0x305C, 0x20},
	{0x305D, 0x00},
	{0x305E, 0x18},
	{0x305F, 0x00},
	{0x3063, 0x74},

	{0x3084, 0x0f},
	{0x3086, 0x10},
	{0x30A1, 0x44},
	{0x30cf, 0xe1},
	{0x30d0, 0x29},
	{0x30d2, 0x9b},
	{0x30d3, 0x01},

	{0x311d, 0x0a},
	{0x3123, 0x0f},
	{0x3126, 0xdf},
	{0x3147, 0x87},
	{0x31e0, 0x01},
	{0x31e1, 0x9e},
	{0x31e2, 0x01},
	{0x31e5, 0x05},
	{0x31e6, 0x05},
	{0x31e7, 0x3a},
	{0x31e8, 0x3a},

	{0x3203, 0xc8},
	{0x3207, 0x54},
	{0x3213, 0x16},
	{0x3215, 0xf6},
	{0x321a, 0x14},
	{0x321b, 0x51},
	{0x3229, 0xe7},
	{0x322a, 0xf0},
	{0x322b, 0x10},
	{0x3231, 0xe7},
	{0x3232, 0xf0},
	{0x3233, 0x10},
	{0x323c, 0xe8},
	{0x323d, 0x70},
	{0x3243, 0x08},
	{0x3244, 0xe1},
	{0x3245, 0x10},
	{0x3247, 0xe7},
	{0x3248, 0x60},
	{0x3249, 0x1e},
	{0x324b, 0x00},
	{0x324c, 0x41},
	{0x3250, 0x30},
	{0x3251, 0x0a},
	{0x3252, 0xff},
	{0x3253, 0xff},
	{0x3254, 0xff},
	{0x3255, 0x02},
	{0x3257, 0xf0},
	{0x325a, 0xa6},
	{0x325d, 0x14},
	{0x325e, 0x51},
	{0x3260, 0x00},
	{0x3261, 0x61},
	{0x3266, 0x30},
	{0x3267, 0x05},
	{0x3275, 0xe7},
	{0x3281, 0xea},
	{0x3282, 0x70},
	{0x3285, 0xff},
	{0x328a, 0xf0},
	{0x328d, 0xb6},
	{0x328e, 0x40},
	{0x3290, 0x42},
	{0x3291, 0x51},
	{0x3292, 0x1e},
	{0x3294, 0xc4},
	{0x3295, 0x20},
	{0x3297, 0x50},
	{0x3298, 0x31},
	{0x3299, 0x1f},
	{0x329b, 0xc0},
	{0x329c, 0x60},
	{0x329e, 0x4c},
	{0x329f, 0x71},
	{0x32a0, 0x1f},
	{0x32a2, 0xb6},
	{0x32a3, 0xc0},
	{0x32a4, 0x0b},
	{0x32a9, 0x24},
	{0x32aa, 0x41},
	{0x32b0, 0x25},
	{0x32b1, 0x51},
	{0x32b7, 0x1c},
	{0x32b8, 0xc1},
	{0x32b9, 0x12},
	{0x32be, 0x1d},
	{0x32bf, 0xd1},
	{0x32c0, 0x12},
	{0x32c2, 0xa8},
	{0x32c3, 0xc0},
	{0x32c4, 0x0a},
	{0x32c5, 0x1e},
	{0x32c6, 0x21},
	{0x32c9, 0xb0},
	{0x32ca, 0x40},
	{0x32cc, 0x26},
	{0x32cd, 0xa1},
	{0x32d0, 0xb6},
	{0x32d1, 0xc0},
	{0x32d2, 0x0b},
	{0x32d4, 0xe2},
	{0x32d5, 0x40},
	{0x32d8, 0x4e},
	{0x32d9, 0xa1},
	{0x32ec, 0xf0},

	{0x3303, 0x00},
	{0x3305, 0x03},
	{0x3314, 0x08},
	{0x3315, 0x01},
	{0x3316, 0x04},
	{0x3317, 0x04},
	{0x3318, 0x49},
	{0x3319, 0x04},
	{0x332c, 0x40},
	{0x332d, 0x20},
	{0x332e, 0x03},
	{0x333e, 0x0c},
	{0x333f, 0x0c},
	{0x3340, 0x03},
	{0x3341, 0x20},
	{0x3342, 0x25},
	{0x3343, 0x68},
	{0x3344, 0x20},
	{0x3345, 0x40},
	{0x3346, 0x28},
	{0x3347, 0x20},
	{0x3348, 0x18},
	{0x3349, 0x78},
	{0x334a, 0x28},
	{0x334e, 0xb4},
	{0x334f, 0x01},
#ifdef INIT_ET_INSETTING
	{0x3020, 0xe1},
	{0x3021, 0x04},
#endif
	{IMX185_TABLE_END, 0x00}
};

/*
	output: 2200x1125
	total pixels: 1952x1115
	recording pixels: 1920x1080
	data rate: 222.25Mhz
	pixel rate: 74.25Mhz
	mclk_khz = "37125";
	num_lanes = "4";
	fps: 30fps
*/
static imx185_reg imx185_1952x1115_hdr[] = {
	{0x3002, 0x01},
	{0x3005, 0x01},
	{0x3006, 0x00},
	{0x3007, 0x10},
	{0x3009, 0x02},
	{0x300a, 0xf0},

	{0x300c, 0x02},
	{0x300f, 0x01},
	{0x3010, 0x38},
	{0x3011, 0x00},
	{0x3012, 0x0f},
	{0x3013, 0x00},

	{0x3018, 0x65},
	{0x3019, 0x04},
	{0x301b, 0x98},
	{0x301c, 0x08},
	{0x301d, 0x08},
	{0x301e, 0x02},
	{0x3044, 0xe1},
	{0x3048, 0x33},
#ifdef INIT_ET_INSETTING
	{0x3020, 0x70},
	{0x3021, 0x00},
	{0x3023, 0x20},
	{0x3024, 0x11},
#endif
	{0x3056, 0xc9},
	{0x3057, 0x64},

	{0x305C, 0x20},
	{0x305D, 0x00},
	{0x305E, 0x18},
	{0x305F, 0x00},
	{0x3063, 0x74},

	{0x3065, 0x00},

	{0x3084, 0x0f},
	{0x3086, 0x10},
	{0x30cf, 0xe1},
	{0x30d0, 0x29},
	{0x30d2, 0x9b},
	{0x30d3, 0x01},

	{0x311d, 0x0a},
	{0x3123, 0x0f},
	{0x3126, 0xdf},
	{0x3147, 0x87},
	{0x31e0, 0x01},
	{0x31e1, 0x9e},
	{0x31e2, 0x01},
	{0x31e5, 0x05},
	{0x31e6, 0x05},
	{0x31e7, 0x3a},
	{0x31e8, 0x3a},

	{0x3203, 0xc8},
	{0x3207, 0x54},
	{0x3213, 0x16},
	{0x3215, 0xf6},
	{0x321a, 0x14},
	{0x321b, 0x51},
	{0x3229, 0xe7},
	{0x322a, 0xf0},
	{0x322b, 0x10},
	{0x3231, 0xe7},
	{0x3232, 0xf0},
	{0x3233, 0x10},
	{0x323c, 0xe8},
	{0x323d, 0x70},
	{0x3243, 0x08},
	{0x3244, 0xe1},
	{0x3245, 0x10},
	{0x3247, 0xe7},
	{0x3248, 0x60},
	{0x3249, 0x1e},
	{0x324b, 0x00},
	{0x324c, 0x41},
	{0x3250, 0x30},
	{0x3251, 0x0a},
	{0x3252, 0xff},
	{0x3253, 0xff},
	{0x3254, 0xff},
	{0x3255, 0x02},
	{0x3257, 0xf0},
	{0x325a, 0xa6},
	{0x325d, 0x14},
	{0x325e, 0x51},
	{0x3260, 0x00},
	{0x3261, 0x61},
	{0x3266, 0x30},
	{0x3267, 0x05},
	{0x3275, 0xe7},
	{0x3281, 0xea},
	{0x3282, 0x70},
	{0x3285, 0xff},
	{0x328a, 0xf0},
	{0x328d, 0xb6},
	{0x328e, 0x40},
	{0x3290, 0x42},
	{0x3291, 0x51},
	{0x3292, 0x1e},
	{0x3294, 0xc4},
	{0x3295, 0x20},
	{0x3297, 0x50},
	{0x3298, 0x31},
	{0x3299, 0x1f},
	{0x329b, 0xc0},
	{0x329c, 0x60},
	{0x329e, 0x4c},
	{0x329f, 0x71},
	{0x32a0, 0x1f},
	{0x32a2, 0xb6},
	{0x32a3, 0xc0},
	{0x32a4, 0x0b},
	{0x32a9, 0x24},
	{0x32aa, 0x41},
	{0x32b0, 0x25},
	{0x32b1, 0x51},
	{0x32b7, 0x1c},
	{0x32b8, 0xc1},
	{0x32b9, 0x12},
	{0x32be, 0x1d},
	{0x32bf, 0xd1},
	{0x32c0, 0x12},
	{0x32c2, 0xa8},
	{0x32c3, 0xc0},
	{0x32c4, 0x0a},
	{0x32c5, 0x1e},
	{0x32c6, 0x21},
	{0x32c9, 0xb0},
	{0x32ca, 0x40},
	{0x32cc, 0x26},
	{0x32cd, 0xa1},
	{0x32d0, 0xb6},
	{0x32d1, 0xc0},
	{0x32d2, 0x0b},
	{0x32d4, 0xe2},
	{0x32d5, 0x40},
	{0x32d8, 0x4e},
	{0x32d9, 0xa1},
	{0x32ec, 0xf0},

	{0x3303, 0x10},
	{0x3305, 0x03},
	{0x3314, 0x08},
	{0x3315, 0x01},
	{0x3316, 0x04},
	{0x3317, 0x04},
	{0x3318, 0x49},
	{0x3319, 0x04},
	{0x332c, 0x30},
	{0x332d, 0x20},
	{0x332e, 0x03},
	{0x333e, 0x0c},
	{0x333f, 0x0c},
	{0x3340, 0x03},

	{0x3341, 0x20},
	{0x3342, 0x25},
	{0x3343, 0x58},
	{0x3344, 0x10},
	{0x3345, 0x30},
	{0x3346, 0x18},
	{0x3347, 0x10},
	{0x3348, 0x10},
	{0x3349, 0x48},
	{0x334a, 0x28},
	{0x334e, 0xb4},
	{0x334f, 0x01},

#ifdef INIT_ET_INSETTING
/*
 * *min  ET: (05H-80H)
 * *		SHS1=1125-1-05=1119(0x45F)
 * *		SHS2=1125-1-80=1044(0x414)
 * *max ET: (70H--1120H)
 * *		SHS1=1125-1-70=1054(0x41E)
 * *		SHS2=1125-1-1120=1044(0x04)
 * *mid  ET: (45H--720H)
 * *		SHS1=1125-1-45=1079(0x437)
 * *		SHS2=1125-1-80=404(0x194)
 * */
	{0x3020, 0x05},/*SHS1 short LSB*/
	{0x3021, 0x00},
	{0x3022, 0x00},
	{0x3023, 0x50},/*SHS2 long LSB*/
	{0x3024, 0x00},
	{0x3025, 0x00},
#endif
	{0x300C, 0x02},
	{0x300F, 0x05},
	{0x3010, 0x38},
	{0x3012, 0x0F},
	{0x3084, 0x0F},
	{0x3065, 0x00},
	{IMX185_TABLE_END, 0x00}
};

static  imx185_reg imx185_1920x1080_crop[] = {
	{0x3002, 0x01},
	{0x3005, 0x01},
	{0x3006, 0x00},
	{0x3007, 0x50},
	{0x3009, 0x01},
	{0x300a, 0xf0},
	{0x300f, 0x01},
	{0x3018, 0x65},
	{0x3019, 0x04},
	{0x301b, 0x4c},
	{0x301c, 0x04},
	{0x301d, 0x08},
	{0x301e, 0x02},

	{0x3036, 0x06},
	{0x3038, 0x08},
	{0x3039, 0x00},
	{0x303a, 0x40},
	{0x303b, 0x04},
	{0x303c, 0x0c},
	{0x303d, 0x00},
	{0x303e, 0x7c},
	{0x303f, 0x07},

	{0x3044, 0xe1},
	{0x3048, 0x33},

	{0x305C, 0x20},
	{0x305D, 0x00},
	{0x305E, 0x18},
	{0x305F, 0x00},
	{0x3063, 0x74},

	{0x3084, 0x0f},
	{0x3086, 0x10},
	{0x30A1, 0x44},
	{0x30cf, 0xe1},
	{0x30d0, 0x29},
	{0x30d2, 0x9b},
	{0x30d3, 0x01},

	{0x311d, 0x0a},
	{0x3123, 0x0f},
	{0x3126, 0xdf},
	{0x3147, 0x87},
	{0x31e0, 0x01},
	{0x31e1, 0x9e},
	{0x31e2, 0x01},
	{0x31e5, 0x05},
	{0x31e6, 0x05},
	{0x31e7, 0x3a},
	{0x31e8, 0x3a},

	{0x3203, 0xc8},
	{0x3207, 0x54},
	{0x3213, 0x16},
	{0x3215, 0xf6},
	{0x321a, 0x14},
	{0x321b, 0x51},
	{0x3229, 0xe7},
	{0x322a, 0xf0},
	{0x322b, 0x10},
	{0x3231, 0xe7},
	{0x3232, 0xf0},
	{0x3233, 0x10},
	{0x323c, 0xe8},
	{0x323d, 0x70},
	{0x3243, 0x08},
	{0x3244, 0xe1},
	{0x3245, 0x10},
	{0x3247, 0xe7},
	{0x3248, 0x60},
	{0x3249, 0x1e},
	{0x324b, 0x00},
	{0x324c, 0x41},
	{0x3250, 0x30},
	{0x3251, 0x0a},
	{0x3252, 0xff},
	{0x3253, 0xff},
	{0x3254, 0xff},
	{0x3255, 0x02},
	{0x3257, 0xf0},
	{0x325a, 0xa6},
	{0x325d, 0x14},
	{0x325e, 0x51},
	{0x3260, 0x00},
	{0x3261, 0x61},
	{0x3266, 0x30},
	{0x3267, 0x05},
	{0x3275, 0xe7},
	{0x3281, 0xea},
	{0x3282, 0x70},
	{0x3285, 0xff},
	{0x328a, 0xf0},
	{0x328d, 0xb6},
	{0x328e, 0x40},
	{0x3290, 0x42},
	{0x3291, 0x51},
	{0x3292, 0x1e},
	{0x3294, 0xc4},
	{0x3295, 0x20},
	{0x3297, 0x50},
	{0x3298, 0x31},
	{0x3299, 0x1f},
	{0x329b, 0xc0},
	{0x329c, 0x60},
	{0x329e, 0x4c},
	{0x329f, 0x71},
	{0x32a0, 0x1f},
	{0x32a2, 0xb6},
	{0x32a3, 0xc0},
	{0x32a4, 0x0b},
	{0x32a9, 0x24},
	{0x32aa, 0x41},
	{0x32b0, 0x25},
	{0x32b1, 0x51},
	{0x32b7, 0x1c},
	{0x32b8, 0xc1},
	{0x32b9, 0x12},
	{0x32be, 0x1d},
	{0x32bf, 0xd1},
	{0x32c0, 0x12},
	{0x32c2, 0xa8},
	{0x32c3, 0xc0},
	{0x32c4, 0x0a},
	{0x32c5, 0x1e},
	{0x32c6, 0x21},
	{0x32c9, 0xb0},
	{0x32ca, 0x40},
	{0x32cc, 0x26},
	{0x32cd, 0xa1},
	{0x32d0, 0xb6},
	{0x32d1, 0xc0},
	{0x32d2, 0x0b},
	{0x32d4, 0xe2},
	{0x32d5, 0x40},
	{0x32d8, 0x4e},
	{0x32d9, 0xa1},
	{0x32ec, 0xf0},

	{0x3303, 0x00},
	{0x3305, 0x03},
	{0x3314, 0x04},
	{0x3315, 0x01},
	{0x3316, 0x04},
	{0x3317, 0x04},
	{0x3318, 0x38},
	{0x3319, 0x04},
	{0x332c, 0x40},
	{0x332d, 0x20},
	{0x332e, 0x03},
	{0x333e, 0x0c},
	{0x333f, 0x0c},
	{0x3340, 0x03},
	{0x3341, 0x20},
	{0x3342, 0x25},
	{0x3343, 0x68},
	{0x3344, 0x20},
	{0x3345, 0x40},
	{0x3346, 0x28},
	{0x3347, 0x20},
	{0x3348, 0x18},
	{0x3349, 0x78},
	{0x334a, 0x28},
	{0x334e, 0xb4},
	{0x334f, 0x01},
#ifdef INIT_ET_INSETTING
	{0x3020, 0xe1},
	{0x3021, 0x04},
#endif
	{IMX185_TABLE_END, 0x00}
};

static imx185_reg imx185_1920x1080_hdr_crop[] = {
	{0x3002, 0x01},
	{0x3005, 0x01},
	{0x3006, 0x00},
	{0x3007, 0x50},
	{0x3009, 0x02},
	{0x300a, 0xf0},

	{0x300c, 0x02},
	{0x300f, 0x01},
	{0x3010, 0x38},
	{0x3011, 0x00},
	{0x3012, 0x0f},
	{0x3013, 0x00},

	{0x3018, 0x65},
	{0x3019, 0x04},
	{0x301b, 0x98},
	{0x301c, 0x08},
	{0x301d, 0x08},
	{0x301e, 0x02},

	{0x3036, 0x06},
	{0x3038, 0x08},
	{0x3039, 0x00},
	{0x303a, 0x40},
	{0x303b, 0x04},
	{0x303c, 0x0c},
	{0x303d, 0x00},
	{0x303e, 0x7c},
	{0x303f, 0x07},

	{0x3044, 0xe1},
	{0x3048, 0x33},
#ifdef INIT_ET_INSETTING
	{0x3020, 0x70},
	{0x3021, 0x00},
	{0x3023, 0x20},
	{0x3024, 0x11},
#endif
	{0x3056, 0xc9},
	{0x3057, 0x64},

	{0x305C, 0x20},
	{0x305D, 0x00},
	{0x305E, 0x18},
	{0x305F, 0x00},
	{0x3063, 0x74},

	{0x3065, 0x00},

	{0x3084, 0x0f},
	{0x3086, 0x10},
	{0x30cf, 0xe1},
	{0x30d0, 0x29},
	{0x30d2, 0x9b},
	{0x30d3, 0x01},

	{0x311d, 0x0a},
	{0x3123, 0x0f},
	{0x3126, 0xdf},
	{0x3147, 0x87},
	{0x31e0, 0x01},
	{0x31e1, 0x9e},
	{0x31e2, 0x01},
	{0x31e5, 0x05},
	{0x31e6, 0x05},
	{0x31e7, 0x3a},
	{0x31e8, 0x3a},

	{0x3203, 0xc8},
	{0x3207, 0x54},
	{0x3213, 0x16},
	{0x3215, 0xf6},
	{0x321a, 0x14},
	{0x321b, 0x51},
	{0x3229, 0xe7},
	{0x322a, 0xf0},
	{0x322b, 0x10},
	{0x3231, 0xe7},
	{0x3232, 0xf0},
	{0x3233, 0x10},
	{0x323c, 0xe8},
	{0x323d, 0x70},
	{0x3243, 0x08},
	{0x3244, 0xe1},
	{0x3245, 0x10},
	{0x3247, 0xe7},
	{0x3248, 0x60},
	{0x3249, 0x1e},
	{0x324b, 0x00},
	{0x324c, 0x41},
	{0x3250, 0x30},
	{0x3251, 0x0a},
	{0x3252, 0xff},
	{0x3253, 0xff},
	{0x3254, 0xff},
	{0x3255, 0x02},
	{0x3257, 0xf0},
	{0x325a, 0xa6},
	{0x325d, 0x14},
	{0x325e, 0x51},
	{0x3260, 0x00},
	{0x3261, 0x61},
	{0x3266, 0x30},
	{0x3267, 0x05},
	{0x3275, 0xe7},
	{0x3281, 0xea},
	{0x3282, 0x70},
	{0x3285, 0xff},
	{0x328a, 0xf0},
	{0x328d, 0xb6},
	{0x328e, 0x40},
	{0x3290, 0x42},
	{0x3291, 0x51},
	{0x3292, 0x1e},
	{0x3294, 0xc4},
	{0x3295, 0x20},
	{0x3297, 0x50},
	{0x3298, 0x31},
	{0x3299, 0x1f},
	{0x329b, 0xc0},
	{0x329c, 0x60},
	{0x329e, 0x4c},
	{0x329f, 0x71},
	{0x32a0, 0x1f},
	{0x32a2, 0xb6},
	{0x32a3, 0xc0},
	{0x32a4, 0x0b},
	{0x32a9, 0x24},
	{0x32aa, 0x41},
	{0x32b0, 0x25},
	{0x32b1, 0x51},
	{0x32b7, 0x1c},
	{0x32b8, 0xc1},
	{0x32b9, 0x12},
	{0x32be, 0x1d},
	{0x32bf, 0xd1},
	{0x32c0, 0x12},
	{0x32c2, 0xa8},
	{0x32c3, 0xc0},
	{0x32c4, 0x0a},
	{0x32c5, 0x1e},
	{0x32c6, 0x21},
	{0x32c9, 0xb0},
	{0x32ca, 0x40},
	{0x32cc, 0x26},
	{0x32cd, 0xa1},
	{0x32d0, 0xb6},
	{0x32d1, 0xc0},
	{0x32d2, 0x0b},
	{0x32d4, 0xe2},
	{0x32d5, 0x40},
	{0x32d8, 0x4e},
	{0x32d9, 0xa1},
	{0x32ec, 0xf0},

	{0x3303, 0x10},
	{0x3305, 0x03},
	{0x3314, 0x04},
	{0x3315, 0x01},
	{0x3316, 0x04},
	{0x3317, 0x04},
	{0x3318, 0x38},
	{0x3319, 0x04},
	{0x332c, 0x30},
	{0x332d, 0x20},
	{0x332e, 0x03},
	{0x333e, 0x0c},
	{0x333f, 0x0c},
	{0x3340, 0x03},

	{0x3341, 0x20},
	{0x3342, 0x25},
	{0x3343, 0x58},
	{0x3344, 0x10},
	{0x3345, 0x30},
	{0x3346, 0x18},
	{0x3347, 0x10},
	{0x3348, 0x10},
	{0x3349, 0x48},
	{0x334a, 0x28},
	{0x334e, 0xb4},
	{0x334f, 0x01},

#ifdef INIT_ET_INSETTING
	{0x3020, 0x05},/*SHS1 short LSB*/
	{0x3021, 0x00},
	{0x3022, 0x00},
	{0x3023, 0x50},/*SHS2 long LSB*/
	{0x3024, 0x00},
	{0x3025, 0x00},
#endif
	{0x300C, 0x02},
	{0x300F, 0x05},
	{0x3010, 0x38},
	{0x3012, 0x0F},
	{0x3084, 0x0F},
	{0x3065, 0x00},
	{IMX185_TABLE_END, 0x00}
};

static imx185_reg imx185_1920x1080_crop_10bit[] = {
/*10bit 60fps*/

	{0x3002, 0x01},
	{0x3005, 0x00},/*10BIT*/
	{0x3006, 0x00},
	{0x3007, 0x50},
	{0x3009, 0x01},
	{0x300a, 0x3c},/*10BIT*/
	{0x300f, 0x01},
	{0x3018, 0x65},
	{0x3019, 0x04},
	{0x301b, 0x4c},
	{0x301c, 0x04},
	{0x301d, 0x08},
	{0x301e, 0x02},

	{0x3036, 0x06},
	{0x3038, 0x08},
	{0x3039, 0x00},
	{0x303a, 0x40},
	{0x303b, 0x04},
	{0x303c, 0x0c},
	{0x303d, 0x00},
	{0x303e, 0x7c},
	{0x303f, 0x07},

	{0x3044, 0xe1},
	{0x3048, 0x33},

	{0x305C, 0x20},
	{0x305D, 0x00},
	{0x305E, 0x18},
	{0x305F, 0x00},
	{0x3063, 0x74},

	{0x3084, 0x0f},
	{0x3086, 0x10},
	{0x30A1, 0x44},
	{0x30cf, 0xe1},
	{0x30d0, 0x29},
	{0x30d2, 0x9b},
	{0x30d3, 0x01},

	{0x311d, 0x0a},
	{0x3123, 0x0f},
	{0x3126, 0xdf},
	{0x3147, 0x87},
	{0x31e0, 0x01},
	{0x31e1, 0x9e},
	{0x31e2, 0x01},
	{0x31e5, 0x05},
	{0x31e6, 0x05},
	{0x31e7, 0x3a},
	{0x31e8, 0x3a},

	{0x3203, 0xc8},
	{0x3207, 0x54},
	{0x3213, 0x16},
	{0x3215, 0xf6},
	{0x321a, 0x14},
	{0x321b, 0x51},
	{0x3229, 0xe7},
	{0x322a, 0xf0},
	{0x322b, 0x10},
	{0x3231, 0xe7},
	{0x3232, 0xf0},
	{0x3233, 0x10},
	{0x323c, 0xe8},
	{0x323d, 0x70},
	{0x3243, 0x08},
	{0x3244, 0xe1},
	{0x3245, 0x10},
	{0x3247, 0xe7},
	{0x3248, 0x60},
	{0x3249, 0x1e},
	{0x324b, 0x00},
	{0x324c, 0x41},
	{0x3250, 0x30},
	{0x3251, 0x0a},
	{0x3252, 0xff},
	{0x3253, 0xff},
	{0x3254, 0xff},
	{0x3255, 0x02},
	{0x3257, 0xf0},
	{0x325a, 0xa6},
	{0x325d, 0x14},
	{0x325e, 0x51},
	{0x3260, 0x00},
	{0x3261, 0x61},
	{0x3266, 0x30},
	{0x3267, 0x05},
	{0x3275, 0xe7},
	{0x3281, 0xea},
	{0x3282, 0x70},
	{0x3285, 0xff},
	{0x328a, 0xf0},
	{0x328d, 0xb6},
	{0x328e, 0x40},
	{0x3290, 0x42},
	{0x3291, 0x51},
	{0x3292, 0x1e},
	{0x3294, 0xc4},
	{0x3295, 0x20},
	{0x3297, 0x50},
	{0x3298, 0x31},
	{0x3299, 0x1f},
	{0x329b, 0xc0},
	{0x329c, 0x60},
	{0x329e, 0x4c},
	{0x329f, 0x71},
	{0x32a0, 0x1f},
	{0x32a2, 0xb6},
	{0x32a3, 0xc0},
	{0x32a4, 0x0b},
	{0x32a9, 0x24},
	{0x32aa, 0x41},
	{0x32b0, 0x25},
	{0x32b1, 0x51},
	{0x32b7, 0x1c},
	{0x32b8, 0xc1},
	{0x32b9, 0x12},
	{0x32be, 0x1d},
	{0x32bf, 0xd1},
	{0x32c0, 0x12},
	{0x32c2, 0xa8},
	{0x32c3, 0xc0},
	{0x32c4, 0x0a},
	{0x32c5, 0x1e},
	{0x32c6, 0x21},
	{0x32c9, 0xb0},
	{0x32ca, 0x40},
	{0x32cc, 0x26},
	{0x32cd, 0xa1},
	{0x32d0, 0xb6},
	{0x32d1, 0xc0},
	{0x32d2, 0x0b},
	{0x32d4, 0xe2},
	{0x32d5, 0x40},
	{0x32d8, 0x4e},
	{0x32d9, 0xa1},
	{0x32ec, 0xf0},

	{0x3303, 0x00},
	{0x3305, 0x03},
	{0x3314, 0x04},
	{0x3315, 0x01},
	{0x3316, 0x04},
	{0x3317, 0x04},
	{0x3318, 0x38},
	{0x3319, 0x04},
	{0x332c, 0x40},
	{0x332d, 0x20},
	{0x332e, 0x03},
	{0x333e, 0x0a},/*10BIT*/
	{0x333f, 0x0a},/*10BIT*/
	{0x3340, 0x03},
	{0x3341, 0x20},
	{0x3342, 0x25},
	{0x3343, 0x68},
	{0x3344, 0x20},
	{0x3345, 0x40},
	{0x3346, 0x28},
	{0x3347, 0x20},
	{0x3348, 0x18},
	{0x3349, 0x78},
	{0x334a, 0x28},
	{0x334e, 0xb4},
	{0x334f, 0x01},
#ifdef INIT_ET_INSETTING
	{0x3020, 0xe1},
	{0x3021, 0x04},
#endif
	{IMX185_TABLE_END, 0x00}
};

static imx185_reg imx185_1920x1080_crop_10bit_30fps[] = {
/*30fps 10bit*/
	{0x3002, 0x01},
	{0x3005, 0x00},
	{0x3006, 0x00},
	{0x3007, 0x50},
	{0x3009, 0x02},
	{0x300a, 0x3c},
	{0x300f, 0x01},
	{0x3018, 0x65},
	{0x3019, 0x04},
	{0x301b, 0x98},
	{0x301c, 0x08},
	{0x301d, 0x08},
	{0x301e, 0x02},

	{0x3036, 0x06},
	{0x3038, 0x08},
	{0x3039, 0x00},
	{0x303a, 0x40},
	{0x303b, 0x04},
	{0x303c, 0x0c},
	{0x303d, 0x00},
	{0x303e, 0x7c},
	{0x303f, 0x07},

	{0x3044, 0xe1},
	{0x3048, 0x33},

	{0x305C, 0x20},
	{0x305D, 0x00},
	{0x305E, 0x18},
	{0x305F, 0x00},
	{0x3063, 0x74},

	{0x3084, 0x0f},
	{0x3086, 0x10},
	{0x30cf, 0xe1},
	{0x30d0, 0x29},
	{0x30d2, 0x9b},
	{0x30d3, 0x01},

	{0x311d, 0x0a},
	{0x3123, 0x0f},
	{0x3126, 0xdf},
	{0x3147, 0x87},
	{0x31e0, 0x01},
	{0x31e1, 0x9e},
	{0x31e2, 0x01},
	{0x31e5, 0x05},
	{0x31e6, 0x05},
	{0x31e7, 0x3a},
	{0x31e8, 0x3a},

	{0x3203, 0xc8},
	{0x3207, 0x54},
	{0x3213, 0x16},
	{0x3215, 0xf6},
	{0x321a, 0x14},
	{0x321b, 0x51},
	{0x3229, 0xe7},
	{0x322a, 0xf0},
	{0x322b, 0x10},
	{0x3231, 0xe7},
	{0x3232, 0xf0},
	{0x3233, 0x10},
	{0x323c, 0xe8},
	{0x323d, 0x70},
	{0x3243, 0x08},
	{0x3244, 0xe1},
	{0x3245, 0x10},
	{0x3247, 0xe7},
	{0x3248, 0x60},
	{0x3249, 0x1e},
	{0x324b, 0x00},
	{0x324c, 0x41},
	{0x3250, 0x30},
	{0x3251, 0x0a},
	{0x3252, 0xff},
	{0x3253, 0xff},
	{0x3254, 0xff},
	{0x3255, 0x02},
	{0x3257, 0xf0},
	{0x325a, 0xa6},
	{0x325d, 0x14},
	{0x325e, 0x51},
	{0x3260, 0x00},
	{0x3261, 0x61},
	{0x3266, 0x30},
	{0x3267, 0x05},
	{0x3275, 0xe7},
	{0x3281, 0xea},
	{0x3282, 0x70},
	{0x3285, 0xff},
	{0x328a, 0xf0},
	{0x328d, 0xb6},
	{0x328e, 0x40},
	{0x3290, 0x42},
	{0x3291, 0x51},
	{0x3292, 0x1e},
	{0x3294, 0xc4},
	{0x3295, 0x20},
	{0x3297, 0x50},
	{0x3298, 0x31},
	{0x3299, 0x1f},
	{0x329b, 0xc0},
	{0x329c, 0x60},
	{0x329e, 0x4c},
	{0x329f, 0x71},
	{0x32a0, 0x1f},
	{0x32a2, 0xb6},
	{0x32a3, 0xc0},
	{0x32a4, 0x0b},
	{0x32a9, 0x24},
	{0x32aa, 0x41},
	{0x32b0, 0x25},
	{0x32b1, 0x51},
	{0x32b7, 0x1c},
	{0x32b8, 0xc1},
	{0x32b9, 0x12},
	{0x32be, 0x1d},
	{0x32bf, 0xd1},
	{0x32c0, 0x12},
	{0x32c2, 0xa8},
	{0x32c3, 0xc0},
	{0x32c4, 0x0a},
	{0x32c5, 0x1e},
	{0x32c6, 0x21},
	{0x32c9, 0xb0},
	{0x32ca, 0x40},
	{0x32cc, 0x26},
	{0x32cd, 0xa1},
	{0x32d0, 0xb6},
	{0x32d1, 0xc0},
	{0x32d2, 0x0b},
	{0x32d4, 0xe2},
	{0x32d5, 0x40},
	{0x32d8, 0x4e},
	{0x32d9, 0xa1},
	{0x32ec, 0xf0},

	{0x3303, 0x10},
	{0x3305, 0x03},
	{0x3314, 0x04},
	{0x3315, 0x01},
	{0x3316, 0x04},
	{0x3317, 0x04},
	{0x3318, 0x38},
	{0x3319, 0x04},
	{0x332c, 0x30},
	{0x332d, 0x20},
	{0x332e, 0x03},
	{0x333e, 0x0a},
	{0x333f, 0x0a},
	{0x3340, 0x03},

	{0x3341, 0x20},
	{0x3342, 0x25},
	{0x3343, 0x58},
	{0x3344, 0x10},
	{0x3345, 0x30},
	{0x3346, 0x18},
	{0x3347, 0x10},
	{0x3348, 0x10},
	{0x3349, 0x48},
	{0x334a, 0x28},
	{0x334e, 0xb4},
	{0x334f, 0x01},
#ifdef INIT_ET_INSETTING
	{0x3020, 0xe1},
	{0x3021, 0x04},
#endif
	{IMX185_TABLE_END, 0x00}
};


enum {
	IMX185_MODE_1952X1115_60FPS,
	IMX185_MODE_1952X1115_HDR_30FPS,
	IMX185_MODE_1920X1080_CROP,
	IMX185_MODE_1920X1080_HDR_CROP,
	IMX185_MODE_1920X1080_CROP_10BIT,
	IMX185_MODE_TEST_1080P_10BIT_30FPS,
	IMX185_MODE_START_STREAM,
	IMX185_MODE_STOP_STREAM,
	IMX185_MODE_TEST_PATTERN
};

static imx185_reg *mode_table[] = {
	[IMX185_MODE_1952X1115_60FPS] = imx185_1952x1115,
	[IMX185_MODE_1952X1115_HDR_30FPS] = imx185_1952x1115_hdr,

	[IMX185_MODE_1920X1080_CROP] = imx185_1920x1080_crop,
	[IMX185_MODE_1920X1080_HDR_CROP] = imx185_1920x1080_hdr_crop,
	[IMX185_MODE_1920X1080_CROP_10BIT] = imx185_1920x1080_crop_10bit,
	[IMX185_MODE_TEST_1080P_10BIT_30FPS] =
		imx185_1920x1080_crop_10bit_30fps,

	[IMX185_MODE_START_STREAM] = imx185_start,
	[IMX185_MODE_STOP_STREAM] = imx185_stop,
	[IMX185_MODE_TEST_PATTERN] = tp_colorbars,
};

static const struct camera_common_frmfmt imx185_frmfmt[] = {
#if 0
	/*1080p-HD mode*/
	{{1952, 1115}, 0, IMX185_MODE_1952X1115_60FPS},
	{{1952, 1115}, 1, IMX185_MODE_1952X1115_HDR_30FPS},

	/*cropping mode*/
	{{1920, 1080}, 0, IMX185_MODE_1920X1080_CROP},
	{{1920, 1080}, 1, IMX185_MODE_1920X1080_HDR_CROP},
	{{1920, 1080}, 0, IMX185_MODE_1920X1080_CROP_10BIT},
	{{1920, 1080}, 0, IMX185_MODE_TEST_1080P_10BIT_30FPS},
#endif
	{{1920, 1080}, 0, IMX185_MODE_1920X1080_CROP_10BIT},

};
#endif /* __IMX185_I2C_TABLES__ */
