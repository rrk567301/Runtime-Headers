@class NSArray;

@interface VNRecognizeObjectsRequestConfiguration : VNImageBasedRequestConfiguration

@property unsigned long long imageCropAndScaleOption;
@property BOOL useImageAnalyzerScaling;
@property float modelMinimumDetectionConfidence;
@property float modelNonMaximumSuppressionThreshold;
@property (copy) NSArray *targetedIdentifiers;

- (id)initWithRequestClass:(Class)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
