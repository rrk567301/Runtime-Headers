@class PFPosterOrientedLayout, PIPosterLayoutPropertiesRequest, PFParallaxLayoutConfiguration, CIImage;
@protocol PISegmentationItem;

@interface _PIPosterLayoutPropertiesJob : NURenderJob

@property (readonly, nonatomic) PIPosterLayoutPropertiesRequest *layoutPropertiesRequest;
@property (retain, nonatomic) id<PISegmentationItem> segmentationItem;
@property (retain, nonatomic) CIImage *matteImage;
@property (retain, nonatomic) PFPosterOrientedLayout *layout;
@property (retain, nonatomic) PFParallaxLayoutConfiguration *layoutConfiguration;
@property (nonatomic) unsigned long long layoutVariant;
@property (nonatomic) double maxClockShift;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adaptiveVisibleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adaptiveTimeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;

- (id)result;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderStage;
- (id)initWithLayoutPropertiesRequest:(id)a0;

@end
