@class NUVideoAttributes;

@interface NUVideoAttributesJob : NURenderJob

@property (retain, nonatomic) NUVideoAttributes *videoAttributes;

- (void).cxx_destruct;
- (id)result;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsRenderStage;
- (BOOL)wantsCompleteStage;
- (BOOL)prepare:(out id *)a0;

@end
