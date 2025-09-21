@interface MLCPatternMatcher : NSObject

+ (char)canTransformToGELUFromLayer:(id)a0 stopGradientTensorList:(id)a1 fusedLayers:(id)a2 inputTensor:(id *)a3;
+ (char)canTransformToGELUType1FromLayer:(id)a0 fusedLayers:(id)a1 inputTensor:(id)a2 withAccuracy:(float)a3;
+ (char)canTransformToGELUType2FromLayer:(id)a0 fusedLayers:(id)a1 inputTensor:(id)a2 withAccuracy:(float)a3;
+ (char)canTransformToHardSwishFromLayer:(id)a0 stopGradientTensorList:(id)a1 fusedLayers:(id)a2 inputTensor:(id *)a3;
+ (char)canTransformToReLUNFromLayer:(id)a0 stopGradientTensorList:(id)a1 fusedLayers:(id)a2 alpha:(float *)a3 beta:(float *)a4;
+ (char)checkIntermediateTensorsOfFusedLayers:(id)a0 stopGradientTensorList:(id)a1 forPattern:(id)a2;
+ (float)getAccuracyForLayer:(id)a0;
+ (char)isActivationLayer:(id)a0 withActivationType:(int)a1;
+ (char)isArithmeticLayer:(id)a0 withOperation:(int)a1;
+ (char)isConstTensor:(id)a0 withValue:(float)a1 withAccuracy:(float)a2;

@end
