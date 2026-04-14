@interface ScreenSaverViewController : NSServiceViewController

@property BOOL initialAnimationState;
@property BOOL didFirstResize;

- (void)startAnimation;
- (void)stopAnimation;
- (BOOL)remoteViewSizeChanged:(struct CGSize { double x0; double x1; })a0 transaction:(id)a1;
- (unsigned long long)awakeFromRemoteView;

@end
