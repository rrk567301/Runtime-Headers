@class NSTimer, LUIProgressBar;

@interface LUI2ProgressBarWindowController : NSWindowController

@property NSTimer *fillTimer;
@property float fillValue;
@property (readonly) LUIProgressBar *progressBar;

- (void)dealloc;
- (id)init;
- (void)loadWindow;
- (float)stopProgressBar;
- (void)resetProgressBar;
- (void)startProgressBar;

@end
