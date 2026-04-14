@class NUCVPixelBuffer, CIRenderTask;
@protocol NUAuxiliaryImage;

@interface NUAuxiliaryImageRenderJob : NURenderJob {
    unsigned int _pixelFormat;
    CIRenderTask *_renderTask;
    NUCVPixelBuffer *_cvBuffer;
}

@property (retain) id<NUAuxiliaryImage> auxiliaryImage;
@property long long auxiliaryImageType;

- (void).cxx_destruct;
- (id)result;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsOutputGeometry;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (BOOL)wantsOutputImage;
- (BOOL)wantsPrepareNodeCached;
- (BOOL)wantsRenderNodeCached;
- (BOOL)wantsRenderScaleClampedToNativeScale;
- (id)scalePolicy;

@end
