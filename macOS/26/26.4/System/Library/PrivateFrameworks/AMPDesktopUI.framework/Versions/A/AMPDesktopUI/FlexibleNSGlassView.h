@interface FlexibleNSGlassView : NSGlassView

- (id)init;
- (void)viewDidMoveToWindow;
- (void)forceNoIntrinsicContentSizeOnCoreHostingView;

@end
