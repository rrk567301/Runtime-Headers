@class NSImageView, NSTextFieldCell, NSBox, NSTextStorage, NSTextView, NSButton, NSWindow;

@interface AOSUICloudMailViewController : NSViewController

@property (retain, nonatomic) NSButton *doneButton;
@property (retain, nonatomic) NSTextView *learnMoreBYOD;
@property (retain, nonatomic) NSTextView *learnMoreICloudMail;
@property (retain, nonatomic) NSImageView *mailLogoImageView;
@property (retain, nonatomic) NSTextFieldCell *statusLabel;
@property (retain, nonatomic) NSButton *switchButton;
@property (retain, nonatomic) NSButton *optionsButton;
@property (retain, nonatomic) NSBox *customDomainPane;
@property (retain, nonatomic) NSWindow *modalWindow;
@property (retain, nonatomic) NSWindow *hostWindow;
@property (nonatomic) BOOL isEnabled;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSTextStorage *learnMoreBYODTextStorage;
@property (retain, nonatomic) NSTextStorage *learnMoreICloudMailTextStorage;

- (void).cxx_destruct;
- (id)nibName;
- (void)viewDidLoad;
- (id)nibBundle;
- (void)_setEnabled:(BOOL)a0;
- (void)doneButtonPressed:(id)a0;
- (void)_dismiss;
- (void)switchButtonPressed:(id)a0;
- (void)optionsButtonPressed:(id)a0;
- (id)_setupWindowWithContentViewController:(id)a0 isCustomDomainAvailable:(BOOL)a1;
- (void)presentICloudMailOptions:(id)a0 mailEnabled:(BOOL)a1 customDomainAvailable:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
