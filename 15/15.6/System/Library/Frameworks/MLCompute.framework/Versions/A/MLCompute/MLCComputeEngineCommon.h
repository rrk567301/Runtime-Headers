@interface MLCComputeEngineCommon : NSObject

+ (void)updateLayersAndTensorsForComplexActivationFunction:(id)a0 inputTensor:(id)a1;
+ (void)applyPatternMatcherForGraph:(id)a0 stopGradientTensorList:(id)a1 startAtLayerIndex:(unsigned long long)a2 forInference:(char)a3;
+ (char)doesActivationRequireInput:(id)a0 forInference:(char)a1;
+ (char)forwardSourceTensorToChildLayersFrom:(id)a0 stopGradientTensorList:(id)a1;
+ (char)isResultTensorInStopGradientTensorList:(id)a0 resultTensor:(id)a1 forInference:(char)a2;
+ (void)updateTensorsForFusedPaddingAndConvolutionLayer:(id)a0 layerNext:(id)a1;
+ (void)updateTensorsForThreeFusedLayers:(id)a0 layerNext:(id)a1 layerNext2:(id)a2;
+ (void)updateTensorsForTwoFusedLayers:(id)a0 layerNext:(id)a1;

@end
