@class NUStorageImageBuffer, PIParallaxInfillRequest, CIRenderTask, CIImage;

@interface PIParallaxInfillJob : NURenderJob {
    NUStorageImageBuffer *_infilledImageBuffer;
    CIRenderTask *_renderTask;
}

@property (readonly, nonatomic) PIParallaxInfillRequest *infillRequest;
@property (retain, nonatomic) CIImage *matteImage;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)cleanUp;
- (id)result;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderStage;
- (id)initWithParallaxInfillRequest:(id)a0;

@end
