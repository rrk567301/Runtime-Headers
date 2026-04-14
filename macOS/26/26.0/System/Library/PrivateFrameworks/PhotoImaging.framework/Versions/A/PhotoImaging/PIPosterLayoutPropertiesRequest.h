@class PFPosterOrientedLayout;
@protocol PISegmentationItem;

@interface PIPosterLayoutPropertiesRequest : NURenderRequest

@property (readonly, nonatomic) id<PISegmentationItem> segmentationItem;
@property (retain, nonatomic) PFPosterOrientedLayout *layout;
@property (nonatomic) BOOL calculateAdaptiveFrame;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)initWithSegmentationItem:(id)a0;

@end
