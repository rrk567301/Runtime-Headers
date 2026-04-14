@interface FlexibleNSGlassView : NSGlassView

- (void)viewDidMoveToWindow;
- (id)init;
- (void)forceNoIntrinsicContentSizeOnCoreHostingView;

@end
