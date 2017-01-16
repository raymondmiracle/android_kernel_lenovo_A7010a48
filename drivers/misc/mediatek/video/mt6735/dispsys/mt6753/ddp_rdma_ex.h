#ifndef _DDP_RDMA_EX_H_
#define _DDP_RDMA_EX_H_
#include "../ddp_info.h"

#define RDMA_INSTANCES  2
#define RDMA_MAX_WIDTH  4095
#define RDMA_MAX_HEIGHT 4095

enum RDMA_INPUT_FORMAT {
	RDMA_INPUT_FORMAT_BGR565 = 0,
	RDMA_INPUT_FORMAT_RGB888 = 1,
	RDMA_INPUT_FORMAT_RGBA8888 = 2,
	RDMA_INPUT_FORMAT_ARGB8888 = 3,
	RDMA_INPUT_FORMAT_VYUY = 4,
	RDMA_INPUT_FORMAT_YVYU = 5,

	RDMA_INPUT_FORMAT_RGB565 = 6,
	RDMA_INPUT_FORMAT_BGR888 = 7,
	RDMA_INPUT_FORMAT_BGRA8888 = 8,
	RDMA_INPUT_FORMAT_ABGR8888 = 9,
	RDMA_INPUT_FORMAT_UYVY = 10,
	RDMA_INPUT_FORMAT_YUYV = 11,

	RDMA_INPUT_FORMAT_UNKNOWN = 32,
};

enum RDMA_OUTPUT_FORMAT {
	RDMA_OUTPUT_FORMAT_ARGB = 0,
	RDMA_OUTPUT_FORMAT_YUV444 = 1,
};

enum RDMA_MODE {
	RDMA_MODE_DIRECT_LINK = 0,
	RDMA_MODE_MEMORY = 1,
};

int rdma_clock_on(DISP_MODULE_ENUM module, void *handle);
int rdma_clock_off(DISP_MODULE_ENUM module, void *handle);

#endif
