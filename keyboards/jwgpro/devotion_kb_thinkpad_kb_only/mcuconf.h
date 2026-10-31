// Copyright 2026 James Grunewald (@jwgpro)
// SPDX-License-Identifier: GPL-2.0-or-later

// https://github.com/qmk/qmk_firmware/blob/180f394b489c238cb231c2bf8b080262155e03c0/keyboards/xelus/valor_frl_tkl/rev2_1/mcuconf.h

#pragma once

#include_next <mcuconf.h>

#undef STM32_PLLM_VALUE
#undef STM32_PLLN_VALUE
#undef STM32_PLLP_VALUE
#undef STM32_PLLQ_VALUE
#undef STM32_PPRE1
#undef STM32_PPRE2

// 84MHz core
#define STM32_PLLM_VALUE    8
#define STM32_PLLN_VALUE    168
#define STM32_PLLP_VALUE    4
#define STM32_PLLQ_VALUE    7
#define STM32_PPRE1         STM32_PPRE1_DIV2
#define STM32_PPRE2         STM32_PPRE1_DIV1
