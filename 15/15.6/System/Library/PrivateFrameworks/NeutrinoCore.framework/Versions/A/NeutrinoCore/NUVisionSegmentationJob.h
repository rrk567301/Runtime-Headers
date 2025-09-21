@class NUVisionSegmentationRequest;
@protocol NUImageBuffer;

@interface NUVisionSegmentationJob : NURenderJob

@property (readonly, nonatomic) NUVisionSegmentationRequest *segmentationRequest;
@property (readonly, nonatomic) NUVisionSegmentationRequest *confidenceMapRequest;
@property (retain, nonatomic) id<NUImageBuffer> segmentedMatte;
@property (retain, nonatomic) id<NUImageBuffer> confidenceMap;

- (void).cxx_destruct;
- (id)result;
- (char)render:(out id *)a0;
- (id)initWithRequest:(id)a0;
- (void)cleanUp;
- (struct __CVBuffer { } *)_combineMultipleObservations:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)initWithVisionSegmentationRequest:(id)a0;
- (id)scalePolicy;
- (char)wantsCompleteStage;
- (char)wantsOutputGeometry;
- (char)wantsOutputImage;

@end
