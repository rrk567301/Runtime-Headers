@class NUCVPixelBuffer, CIRenderTask;
@protocol NUAuxiliaryImage, NUImageProperties;

@interface NUAuxiliaryImageRenderJob : NURenderJob {
    CIRenderTask *_renderTask;
    NUCVPixelBuffer *_pixelBuffer;
}

@property (retain) id<NUImageProperties> imageProperties;
@property (retain) id<NUAuxiliaryImage> auxiliaryImage;
@property long long auxiliaryImageType;

- (void)cleanUp;
- (id)result;
- (void).cxx_destruct;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (BOOL)prepare:(out id *)a0;
- (id)evaluateOutputGeometry:(out id *)a0;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (id)scalePolicy;
- (unsigned int)targetPixelFormat;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsPrepareNodeCached;
- (BOOL)wantsRenderNodeCached;
- (BOOL)wantsRenderScaleClampedToNativeScale;

@end
