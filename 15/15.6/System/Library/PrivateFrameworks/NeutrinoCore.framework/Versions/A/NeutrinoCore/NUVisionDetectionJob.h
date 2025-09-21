@class NUVisionDetectionRequest, NSArray;

@interface NUVisionDetectionJob : NURenderJob

@property (readonly, nonatomic) NUVisionDetectionRequest *detectionRequest;
@property (copy, nonatomic) NSArray *observations;

- (void).cxx_destruct;
- (id)result;
- (char)render:(out id *)a0;
- (id)initWithRequest:(id)a0;
- (void)cleanUp;
- (id)initWithVisionDetectionRequest:(id)a0;
- (id)scalePolicy;
- (char)wantsCompleteStage;
- (char)wantsOutputGeometry;
- (char)wantsOutputImage;

@end
