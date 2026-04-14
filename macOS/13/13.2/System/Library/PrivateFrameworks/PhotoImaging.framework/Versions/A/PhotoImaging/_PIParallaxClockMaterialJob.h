@class NSNumber;

@interface _PIParallaxClockMaterialJob : NURenderJob

@property (retain, nonatomic) NSNumber *luminanceValue;

- (void).cxx_destruct;
- (id)result;
- (BOOL)render:(out id *)a0;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsRenderStage;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputImage;
- (id)scalePolicy;
- (id)clockMaterialRequest;

@end
