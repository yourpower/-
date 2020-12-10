/*
  各类滤波器。
*/

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "user_math.h"

typedef struct {
  float cutoff_freq; /* 截止频率 */

  float a1;
  float a2;

  float b0;
  float b1;
  float b2;

  float delay_element_1;
  float delay_element_2;

} LowPassFilter2p_t; /* 二阶低通滤波器 */

typedef struct {
  float notch_freq; /* 阻止频率 */
  float bandwidth;  /* 带宽 */

  float a1;
  float a2;

  float b0;
  float b1;
  float b2;
  float delay_element_1;
  float delay_element_2;

} NotchFilter_t; /* 带阻滤波器 */

void LowPassFilter2p_Init(LowPassFilter2p_t *f, float sample_freq,
                          float cutoff_freq);
float LowPassFilter2p_Apply(LowPassFilter2p_t *f, float sample);
float LowPassFilter2p_Reset(LowPassFilter2p_t *f, float sample);

void NotchFilter_Init(NotchFilter_t *f, float sample_freq, float notch_freq,
                      float bandwidth);
float NotchFilter_Apply(NotchFilter_t *f, float sample);
float NotchFilter_Reset(NotchFilter_t *f, float sample);

#ifdef __cplusplus
}
#endif
