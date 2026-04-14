@class CRTextDetectorModelV3CoreML, CRTextDetectorModelV3E5ML;

@interface CRNeuralTextDetectorV3 : CRNeuralTextDetector

@property (retain) CRTextDetectorModelV3E5ML *modelE5;
@property (retain) CRTextDetectorModelV3CoreML *modelEIR;

+ (BOOL)computeClassCount:(void *)a0 classProbabiity:(void *)a1 fromSingleTextFeature:(id)a2 map:(const void *)a3 backgroundClass:(int)a4;
+ (struct CGSize { double x0; double x1; })scaledImageSizeForConfiguration:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1 configuration:(id)a2;
+ (BOOL)useE5Detector;

- (void).cxx_destruct;
- (id)detectInImage:(id)a0 delegate:(id)a1 error:(id *)a2;
- (id)detectInImage:(id)a0 trackingSession:(id)a1 delegate:(id)a2 error:(id *)a3;
- (id)enumerateTilesForImage:(id)a0 cachedSurface:(struct __IOSurface **)a1 guidedByScoreMapFullTile:(void *)a2 delegate:(id)a3 block:(id /* block */)a4;
- (id)initWithConfiguration:(id)a0 owner:(id)a1 error:(id *)a2;
- (BOOL)preheatWithError:(id *)a0;
- (void)runFullTileInferenceOnImage:(id)a0 cachedSurface:(struct __IOSurface **)a1 outputMaps:(void *)a2 inputSize:(struct CGSize { double x0; double x1; } *)a3 outputSize:(struct CGSize { double x0; double x1; } *)a4 modelContext:(id)a5 delegate:(id)a6 error:(id *)a7;

@end
