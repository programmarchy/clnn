// from THCUNN.h:

#include <THCl/THCl.h>
#include "THClApply.h"

TH_API void THNN_ClAbs_updateOutput(
          THClState *state,
          THClTensor *input,
          THClTensor *output);
TH_API void THNN_ClAbs_updateGradInput(
          THClState *state,
          THClTensor *input,
          THClTensor *gradOutput,
          THClTensor *gradInput);

TH_API void THNN_ClELU_updateOutput(
          THClState *state,
          THClTensor *input,
          THClTensor *output,
          float alpha);
TH_API void THNN_ClELU_updateGradInput(
          THClState *state,
          THClTensor *input,
          THClTensor *gradOutput,
          THClTensor *gradInput,
          THClTensor *output,
          float alpha);

TH_API void THNN_ClSpatialConvolutionMM_updateOutput(
          THClState *state,
          THClTensor *input,
          THClTensor *output,
          THClTensor *weight,
          THClTensor *bias,
          THClTensor *columns,
          THClTensor *ones,
          int kW, int kH,
          int dW, int dH,
          int padW, int padH);
TH_API void THNN_ClSpatialConvolutionMM_updateGradInput(
          THClState *state,
          THClTensor *input,
          THClTensor *gradOutput,
          THClTensor *gradInput,
          THClTensor *weight,
          THClTensor *bias,
          THClTensor *columns,
          THClTensor *ones,
          int kW, int kH,
          int dW, int dH,
          int padW, int padH);
TH_API void THNN_ClSpatialConvolutionMM_accGradParameters(
          THClState *state,
          THClTensor *input,
          THClTensor *gradOutput,
          THClTensor *gradWeight,
          THClTensor *gradBias,
          THClTensor *columns,
          THClTensor *ones,
          int kW, int kH,
          int dW, int dH,
          int padW, int padH,
          float scale);
