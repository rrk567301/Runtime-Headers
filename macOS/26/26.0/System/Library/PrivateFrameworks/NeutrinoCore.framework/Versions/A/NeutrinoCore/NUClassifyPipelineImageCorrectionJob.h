@class VNObservation, NUClassifyPipelineImageCorrectionRequest;

@interface NUClassifyPipelineImageCorrectionJob : NURenderJob {
    VNObservation *_observation;
    struct { long long width; long long height; } _imageSize;
}

@property (readonly) NUClassifyPipelineImageCorrectionRequest *classifyPipelineImageCorrectionRequest;

- (id)cacheKey;
- (void)cleanUp;
- (id)result;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (id)detectClassifyPipelineImageCorrectionInBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;
- (id)initWithClassifyPipelineImageCorrectionRequest:(id)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end
