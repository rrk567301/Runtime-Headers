@protocol WebVideoViewContainerDelegate;

@interface WebVideoViewContainer : NSView

@property (nonatomic) id<WebVideoViewContainerDelegate> videoViewContainerDelegate;

- (void)resizeWithOldSuperviewSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidMoveToSuperview;

@end
