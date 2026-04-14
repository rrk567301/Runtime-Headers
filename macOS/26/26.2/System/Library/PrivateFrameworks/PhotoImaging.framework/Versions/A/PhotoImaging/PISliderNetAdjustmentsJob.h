@class NSDictionary, IHKFeatureVector;

@interface PISliderNetAdjustmentsJob : PISliderNetBaseJob {
    NSDictionary *_adjustments;
    float _similarityScore;
    IHKFeatureVector *_sourceStyleFeatureVector;
    IHKFeatureVector *_sourceContentFeatureVector;
}

- (id)cacheKey;
- (void).cxx_destruct;
- (void)cleanUp;
- (id)result;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)networkProcessingWithResultingPixelBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;

@end
