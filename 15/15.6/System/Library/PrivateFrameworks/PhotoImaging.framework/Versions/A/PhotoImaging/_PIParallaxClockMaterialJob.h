@class NSNumber;

@interface _PIParallaxClockMaterialJob : NURenderJob

@property (retain, nonatomic) NSNumber *luminanceValue;

- (void).cxx_destruct;
- (id)result;
- (char)render:(out id *)a0;
- (id)scalePolicy;
- (char)wantsCompleteStage;
- (char)wantsOutputGeometry;
- (char)wantsOutputImage;
- (char)wantsRenderStage;
- (id)clockMaterialRequest;

@end
