/*
 * Copyright (C) 2018 Intel Corporation.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef E820_H
#define E820_H
#include <types.h>

/* E820 memory types */
#define E820_TYPE_RAM		1U	/* EFI 1, 2, 3, 4, 5, 6, 7 */
#define E820_TYPE_RESERVED	2U
/* EFI 0, 11, 12, 13 (everything not used elsewhere) */
#define E820_TYPE_ACPI_RECLAIM	3U	/* EFI 9 */
#define E820_TYPE_ACPI_NVS	4U	/* EFI 10 */
#define E820_TYPE_UNUSABLE	5U	/* EFI 8 */

#define E820_MAX_ENTRIES	64U

/** Defines a single entry in an E820 memory map. */
struct e820_entry {
   /** The base address of the memory range. */
	uint64_t baseaddr;
   /** The length of the memory range. */
	uint64_t length;
   /** The type of memory region. */
	uint32_t type;
} __packed;

struct mem_range {
	uint64_t mem_bottom;
	uint64_t mem_top;
	uint64_t total_mem_size;
};

/* HV read multiboot header to get e820 entries info and calc total RAM info */
void init_e820(void);

uint64_t e820_alloc_memory(uint64_t size_arg, uint64_t max_addr);
uint64_t get_e820_ram_size(void);
/* get total number of the e820 entries */
uint32_t get_e820_entries_count(void);

/* get the e802 entiries */
const struct e820_entry *get_e820_entry(void);

#endif
