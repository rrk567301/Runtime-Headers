@class LUIProgressBar, NSTimer;

@interface LUI2ProgressBarWindowController : NSWindowController {
    NSTimer *_fillTimer;
    float _fillValue;
}

@property (readonly) LUIProgressBar *progressBar;

- (id)init;
- (void).cxx_destruct;
- (void)loadWindow;
- (float)stopProgressBar;
- (void)_fillTimerFired;
- (void)resetProgressBar;
- (void)startProgressBar;

@end
