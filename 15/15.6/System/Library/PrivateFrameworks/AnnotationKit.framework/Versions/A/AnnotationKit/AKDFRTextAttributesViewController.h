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
- (char)isBoldUIEnabled;
- (void)setBoldEnabled:(char)a0;
- (id)_createTextSizeStepperItem;
- (void)_fontSizeDidChange:(id)a0;
- (char)isItalicsUIEnabled;
- (void)setBoldSelected:(char)a0;
- (void)setItalicsEnabled:(char)a0;
- (void)setItalicsSelected:(char)a0;
- (void)setUnderlineSelected:(char)a0;
- (void)syncFontsToUI:(id)a0;
- (void)textStyleAction:(id)a0;

@end
