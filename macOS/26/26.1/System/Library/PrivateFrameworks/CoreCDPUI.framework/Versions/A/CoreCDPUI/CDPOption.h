@class NSTextField, CDPContext, NSProgressIndicator, NSLayoutConstraint, NSButton, NSWindow;

@interface CDPOption : NSViewController

@property (retain) NSTextField *instructionLabel;
@property (retain) NSTextField *instructionMessageLabel;
@property (retain) NSProgressIndicator *progressIndicator;
@property (retain) NSButton *nextButton;
@property (retain) NSLayoutConstraint *widthOfPinViewConstraint;
@property (copy) id /* block */ nextButtonAction;
@property (retain) NSWindow *hostWindow;
@property BOOL makeSheetCritical;
@property (retain) CDPContext *cdpContext;
@property unsigned long long setupMutlipleiCSCsOrNot;

- (id)initWithMessage:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)awakeFromNib;
- (void)nextButtonPressed:(id)a0;
- (void)showError:(id)a0;

@end
