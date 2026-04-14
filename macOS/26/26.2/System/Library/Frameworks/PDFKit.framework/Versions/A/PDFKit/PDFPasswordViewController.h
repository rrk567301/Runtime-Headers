@class NSImageView, NSTextField, NSSecureTextField, NSObject;
@protocol PDFPasswordViewControllerDelegate;

@interface PDFPasswordViewController : NSViewController {
    NSObject<PDFPasswordViewControllerDelegate> *_delegate;
}

@property (weak) NSSecureTextField *passwordField;
@property (weak) NSTextField *passwordPrompt;
@property (weak) NSTextField *passwordInstruction;
@property (weak) NSImageView *lockImageView;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)a0;
- (void)clearPasswordField;
- (void)focusOnPasswordField;
- (void)passwordEntered:(id)a0;

@end
