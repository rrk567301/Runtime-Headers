@class NSData;

@interface PISliderNetLiftJob : PISliderNetBaseJob {
    NSData *_styleFeatureVectorData;
    NSData *_contentFeatureVectorData;
}

- (void)cleanUp;
- (id)cacheKey;
- (void).cxx_destruct;
- (id)result;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)networkProcessingWithResultingPixelBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;

@end
