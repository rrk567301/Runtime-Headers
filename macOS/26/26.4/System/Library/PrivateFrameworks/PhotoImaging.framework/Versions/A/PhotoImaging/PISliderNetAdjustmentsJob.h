@class NSDictionary, IHKFeatureVector;

@interface PISliderNetAdjustmentsJob : PISliderNetBaseJob {
    NSDictionary *_adjustments;
    float _similarityScore;
    IHKFeatureVector *_sourceStyleFeatureVector;
    IHKFeatureVector *_sourceContentFeatureVector;
}

- (void)cleanUp;
- (id)cacheKey;
- (void).cxx_destruct;
- (id)result;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)networkProcessingWithResultingPixelBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;

@end
