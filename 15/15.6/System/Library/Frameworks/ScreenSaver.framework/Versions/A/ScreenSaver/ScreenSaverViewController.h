@interface ScreenSaverViewController : NSServiceViewController

@property char initialAnimationState;
@property char didFirstResize;

- (void)startAnimation;
- (void)stopAnimation;
- (unsigned long long)awakeFromRemoteView;
- (char)remoteViewSizeChanged:(struct CGSize { double x0; double x1; })a0 transaction:(id)a1;

@end
