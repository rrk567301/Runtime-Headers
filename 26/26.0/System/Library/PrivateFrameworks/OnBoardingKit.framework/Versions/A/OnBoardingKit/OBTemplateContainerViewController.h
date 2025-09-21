@class NSTextField, NSView, NSProgressIndicator, NSTimer, OBTemplateView, NSMutableArray, OBTemplatePartBackButton, NSButton, NSBox;

@interface OBTemplateContainerViewController : NSViewController

@property (retain, nonatomic) NSView *templateContainerView;
@property (retain, nonatomic) NSView *buttonTray;
@property (retain, nonatomic) NSBox *divider;
@property (retain, nonatomic) NSButton *primaryButton;
@property (retain, nonatomic) NSButton *secondaryButton;
@property (retain, nonatomic) OBTemplatePartBackButton *backButton;
@property (retain, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) NSProgressIndicator *spinner;
@property (retain, nonatomic) NSTextField *statusMessage;
@property (retain, nonatomic) NSTimer *spinnerDisplayTimer;
@property (nonatomic, setter=setSpinnerVisible:) BOOL spinnerVisible;
@property (retain, nonatomic) NSMutableArray *buttonConstraints;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (readonly, nonatomic) NSButton *firstButton;
@property (readonly, nonatomic) NSButton *secondButton;
@property (readonly, nonatomic) NSButton *linkButton;

- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidAppear;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)attributedStatusStringForString:(id)a0;
- (void)disableControlsWithStatus:(id)a0 showingSpinnerAfter:(double)a1;
- (void)hideSpinner;
- (id)initWithFirstButtonTitle:(id)a0 secondButtonTitle:(id)a1 linkButtonTitle:(id)a2;
- (id)initWithPrimaryButtonTitle:(id)a0 secondaryButtonTitle:(id)a1 cancelButtonTitle:(id)a2;
- (id)initWithTemplateView:(id)a0 firstButtonTitle:(id)a1 secondButtonTitle:(id)a2 linkButtonTitle:(id)a3;
- (id)initWithTemplateView:(id)a0 primaryButtonTitle:(id)a1 secondaryButtonTitle:(id)a2 cancelButtonTitle:(id)a3;
- (id)makeButtonTray;
- (void)makeDivider;
- (void)setControlsEnabled:(BOOL)a0;
- (void)showSpinnerWithMessage:(id)a0;
- (void)updateButtonConstraints;

@end
