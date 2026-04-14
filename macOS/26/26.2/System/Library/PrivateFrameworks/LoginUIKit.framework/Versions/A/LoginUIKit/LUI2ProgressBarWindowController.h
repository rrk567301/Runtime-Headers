@class LUIProgressBar, NSTimer;

@interface LUI2ProgressBarWindowController : NSWindowController {
    NSTimer *_fillTimer;
    float _fillValue;
}

@property (readonly) LUIProgressBar *progressBar;

- (void)loadWindow;
- (void).cxx_destruct;
- (id)init;
- (float)stopProgressBar;
- (void)_fillTimerFired;
- (void)resetProgressBar;
- (void)startProgressBar;

@end
