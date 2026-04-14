@class PIParallaxLayoutInactiveFrameRequest, PFParallaxLayout, CIImage;
@protocol PFParallaxLayoutConfiguration;

@interface _PIParallaxLayoutInactiveFrameJob : NURenderJob

@property (readonly, nonatomic) PIParallaxLayoutInactiveFrameRequest *layoutInactiveFrameRequest;
@property (retain, nonatomic) PFParallaxLayout *layout;
@property (retain, nonatomic) id<PFParallaxLayoutConfiguration> layoutConfiguration;
@property (retain, nonatomic) CIImage *matteImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inactiveRect;

- (void).cxx_destruct;
- (id)result;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (id)initWithRequest:(id)a0;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderStage;
- (id)initWithParallaxLayoutInactiveFrameRequest:(id)a0;

@end
