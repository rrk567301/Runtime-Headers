@class PFParallaxLayoutConfiguration, PFPosterOrientedLayout, PIPosterInactiveFrameLayoutRequest, CIImage;

@interface _PIPosterInactiveFrameLayoutJob : NURenderJob

@property (readonly, nonatomic) PIPosterInactiveFrameLayoutRequest *layoutInactiveFrameRequest;
@property (retain, nonatomic) PFPosterOrientedLayout *layout;
@property (retain, nonatomic) PFParallaxLayoutConfiguration *layoutConfiguration;
@property (retain, nonatomic) CIImage *matteImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inactiveRect;

- (void).cxx_destruct;
- (id)result;
- (char)complete:(out id *)a0;
- (char)render:(out id *)a0;
- (id)initWithRequest:(id)a0;
- (char)prepare:(out id *)a0;
- (id)scalePolicy;
- (char)wantsCompleteStage;
- (char)wantsOutputGeometry;
- (char)wantsOutputImage;
- (char)wantsRenderStage;
- (id)initWithInactiveFrameLayoutRequest:(id)a0;

@end
