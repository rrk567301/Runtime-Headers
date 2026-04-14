@class NSTimer, NSProgressIndicator, LUI2TextField, NSStackView;

@interface LUI2AuthHintViewController : LUI2ViewController

@property (retain) NSStackView *stackView;
@property (retain) NSProgressIndicator *progressIndicator;
@property (retain) NSTimer *delayedProgressStartTimer;
@property (readonly) LUI2TextField *hintTextField;

- (void)dealloc;
- (void)viewDidLoad;
- (void)setProgressIndicatorHidden:(BOOL)a0;
- (void)startProgressIndicatorAfterDelay:(double)a0;
- (void)stopProgressIndicatorTimer;

@end
