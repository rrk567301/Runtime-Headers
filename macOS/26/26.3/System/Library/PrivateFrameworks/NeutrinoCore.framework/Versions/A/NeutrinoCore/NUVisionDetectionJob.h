@class NUVisionDetectionRequest, NSArray;

@interface NUVisionDetectionJob : NURenderJob

@property (readonly, nonatomic) NUVisionDetectionRequest *detectionRequest;
@property (copy, nonatomic) NSArray *observations;

- (void)cleanUp;
- (id)initWithRequest:(id)a0;
- (id)result;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (id)initWithVisionDetectionRequest:(id)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end
