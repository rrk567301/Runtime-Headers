@class NSTimer, NSProgressIndicator, NSLayoutConstraint, NSStackView, LUI2TextField;

@interface LUI2AuthHintViewController : LUI2ViewController

@property (retain) NSStackView *stackView;
@property (retain) NSProgressIndicator *progressIndicator;
@property (retain) NSTimer *delayedProgressStartTimer;
@property (retain) NSLayoutConstraint *mainToSubHintTextFieldMinGapConstraint;
@property (retain) NSLayoutConstraint *subHintTextFieldWidthConstraint;
@property (retain) NSLayoutConstraint *stackViewBottomConstraint;
@property (readonly) LUI2TextField *mainHintTextField;
@property (readonly) LUI2TextField *subHintTextField;
@property (readonly) BOOL subHintTextFieldInMultiLineMode;

- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayout;
- (void)setProgressIndicatorHidden:(BOOL)a0;
- (void)startProgressIndicatorAfterDelay:(double)a0;
- (void)stopProgressIndicatorTimer;
- (void)updateTextLegibilityIfNeededWithImage:(id)a0 displayID:(unsigned int)a1;

@end
