@interface PXSmartScaleView : UXView

@property struct CGSize { double width; double height; } displaySize;
@property (readonly) double displayScale;

- (void)viewDidEndLiveResize;
- (void)viewDidChangeBackingProperties;
- (void)viewScaleDidChange;

@end
