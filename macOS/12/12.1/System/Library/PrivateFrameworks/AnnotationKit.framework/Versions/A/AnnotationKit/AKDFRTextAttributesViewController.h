@class NSStackView, NSButton, NSStepperTouchBarItem;

@interface AKDFRTextAttributesViewController : AKTextAttributesViewController

@property (retain) NSStackView *stackView;
@property (retain) NSStackView *textStyleView;
@property (retain) NSButton *boldButton;
@property (retain) NSButton *italicsButton;
@property (retain) NSButton *underlineButton;
@property (retain, nonatomic) NSStepperTouchBarItem *textSizeStepperItem;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)viewDidLoad;
- (id)_createTextSizeStepperItem;
- (void)setBoldEnabled:(BOOL)a0;
- (void)setBoldSelected:(BOOL)a0;
- (void)setItalicsEnabled:(BOOL)a0;
- (void)setItalicsSelected:(BOOL)a0;
- (BOOL)isBoldUIEnabled;
- (BOOL)isItalicsUIEnabled;
- (void)setUnderlineSelected:(BOOL)a0;
- (void)syncFontsToUI:(id)a0;
- (void)_fontSizeDidChange:(id)a0;
- (void)textStyleAction:(id)a0;

@end
