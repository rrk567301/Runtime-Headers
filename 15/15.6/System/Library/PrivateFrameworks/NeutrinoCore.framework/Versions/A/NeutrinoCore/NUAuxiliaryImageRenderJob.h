@class NUCVPixelBuffer, CIRenderTask;
@protocol NUAuxiliaryImage, NUImageProperties;

@interface NUAuxiliaryImageRenderJob : NURenderJob {
    CIRenderTask *_renderTask;
    NUCVPixelBuffer *_pixelBuffer;
}

@property (retain) id<NUImageProperties> imageProperties;
@property (retain) id<NUAuxiliaryImage> auxiliaryImage;
@property long long auxiliaryImageType;

- (void).cxx_destruct;
- (id)result;
- (char)complete:(out id *)a0;
- (char)render:(out id *)a0;
- (void)cleanUp;
- (id)evaluateOutputGeometry:(out id *)a0;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (char)prepare:(out id *)a0;
- (id)scalePolicy;
- (unsigned int)targetPixelFormat;
- (char)wantsOutputGeometry;
- (char)wantsOutputImage;
- (char)wantsPrepareNodeCached;
- (char)wantsRenderNodeCached;
- (char)wantsRenderScaleClampedToNativeScale;

@end
