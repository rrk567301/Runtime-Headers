@class NUStorageImageBuffer, PIParallaxInfillRequest, CIRenderTask, CIImage;

@interface PIParallaxInfillJob : NURenderJob {
    NUStorageImageBuffer *_infilledImageBuffer;
    CIRenderTask *_renderTask;
}

@property (readonly, nonatomic) PIParallaxInfillRequest *infillRequest;
@property (retain, nonatomic) CIImage *matteImage;

- (void).cxx_destruct;
- (id)result;
- (char)complete:(out id *)a0;
- (char)render:(out id *)a0;
- (id)initWithRequest:(id)a0;
- (void)cleanUp;
- (char)prepare:(out id *)a0;
- (id)scalePolicy;
- (char)wantsOutputGeometry;
- (char)wantsOutputImage;
- (char)wantsRenderStage;
- (id)initWithParallaxInfillRequest:(id)a0;

@end
