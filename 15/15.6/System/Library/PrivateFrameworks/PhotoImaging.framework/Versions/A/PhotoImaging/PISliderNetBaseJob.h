@class CIRenderTask;
@protocol NUPurgeableStorage;

@interface PISliderNetBaseJob : NURenderJob {
    CIRenderTask *_renderTask;
    id<NUPurgeableStorage> _storage;
}

- (void).cxx_destruct;
- (char)complete:(out id *)a0;
- (char)render:(out id *)a0;
- (id)scalePolicy;
- (char)wantsCompleteStage;
- (char)wantsOutputGeometry;
- (char)wantsOutputImage;
- (char)networkProcessingWithResultingPixelBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;

@end
