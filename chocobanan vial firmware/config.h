// Copyright 2023 Léon Ratinckx (@leonrat)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define SPLIT_HAND_PIN GP9 //split_hand and master_left both try to set the master half
#define MASTER_LEFT
#define ENCODERS_PAD_A_RIGHT {GP3}
#define ENCODERS_PAD_B_RIGHT {GP2}
#define ENCODERS_PAD_A_LEFT {GP29}
#define ENCODERS_PAD_B_LEFT {GP28}


#define ENCODER_RESOLUTION 2
#define MOUSE_EXTENDED_REPORT
#define RGBLED_NUM 12