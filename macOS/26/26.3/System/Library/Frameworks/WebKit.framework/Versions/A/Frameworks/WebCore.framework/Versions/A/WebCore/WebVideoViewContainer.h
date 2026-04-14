@protocol WebVideoViewContainerDelegate;

@interface WebVideoViewContainer : NSView

@property (weak, nonatomic) id<WebVideoViewContainerDelegate> videoViewContainerDelegate;

- (void).cxx_destruct;
- (void)viewDidMoveToSuperview;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x0; double x1; })a0;

@end
