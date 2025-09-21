@class LUI2TextField, NSTimer, NSProgressIndicator, NSLayoutConstraint, NSStackView, NSObject;
@protocol OS_dispatch_queue;

@interface LUI2AuthHintViewController : LUI2ViewController

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain) NSStackView *stackView;
@property (retain) NSProgressIndicator *progressIndicator;
@property (retain) NSTimer *delayedProgressStartTimer;
@property (retain) NSLayoutConstraint *mainToSubHintTextFieldMinGapConstraint;
@property (retain) NSLayoutConstraint *subHintTextFieldWidthConstraint;
@property (retain) NSLayoutConstraint *stackViewBottomConstraint;
@property (readonly) LUI2TextField *mainHintTextField;
@property (readonly) LUI2TextField *subHintTextField;
@property (readonly) char subHintTextFieldInMultiLineMode;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayout;
- (void)_updateTextLegibilityShouldIncreaseContrast:(char)a0;
- (void)setProgressIndicatorHidden:(char)a0;
- (void)startProgressIndicatorAfterDelay:(double)a0;
- (void)stopProgressIndicatorTimer;
- (void)updateTextLegibilityIfNeededWithImage:(id)a0 displayID:(unsigned int)a1;

@end
