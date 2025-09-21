@class NUVideoAttributes;

@interface NUVideoAttributesJob : NURenderJob

@property (retain, nonatomic) NUVideoAttributes *videoAttributes;

- (void).cxx_destruct;
- (id)result;
- (char)prepare:(out id *)a0;
- (char)wantsCompleteStage;
- (char)wantsOutputGeometry;
- (char)wantsRenderStage;

@end
