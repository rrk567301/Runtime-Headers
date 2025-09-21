@class NSData;

@interface PISliderNetLiftJob : PISliderNetBaseJob {
    NSData *_styleFeatureVectorData;
    NSData *_contentFeatureVectorData;
}

- (void).cxx_destruct;
- (id)result;
- (id)cacheKey;
- (void)cleanUp;
- (id)scalePolicy;
- (char)wantsCompleteStage;
- (char)wantsOutputGeometry;
- (char)wantsOutputImage;
- (char)networkProcessingWithResultingPixelBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;

@end
