@class NSBox, ACAccount, NSTextView, NSTextStorage, NSWindow, NSImageView, NSButton, NSTextFieldCell;
@protocol AOSUIViewControllerProvider;

@interface AOSUICloudMailViewController : NSViewController {
    id<AOSUIViewControllerProvider> _mailViewControllerProvider;
    ACAccount *_appleAccount;
}

@property (retain, nonatomic) NSButton *doneButton;
@property (retain, nonatomic) NSTextView *learnMoreBYOD;
@property (retain, nonatomic) NSTextView *learnMoreICloudMail;
@property (retain, nonatomic) NSTextView *learnMoreEncrypt;
@property (retain, nonatomic) NSImageView *mailLogoImageView;
@property (retain, nonatomic) NSTextFieldCell *statusLabel;
@property (retain, nonatomic) NSButton *switchButton;
@property (retain, nonatomic) NSButton *optionsButton;
@property (retain, nonatomic) NSButton *pontifexButton;
@property (retain, nonatomic) NSBox *customDomainPane;
@property (retain, nonatomic) NSWindow *modalWindow;
@property (retain, nonatomic) NSWindow *hostWindow;
@property (nonatomic) BOOL isEnabled;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSTextStorage *learnMoreBYODTextStorage;
@property (retain, nonatomic) NSTextStorage *learnMoreICloudMailTextStorage;
@property (retain, nonatomic) NSTextStorage *learnMoreEncryptTextStorage;

- (void)viewDidLoad;
- (void)_setEnabled:(BOOL)a0;
- (id)initWithAccount:(id)a0;
- (id)appleAccount;
- (void).cxx_destruct;
- (id)nibName;
- (id)nibBundle;
- (void)doneButtonPressed:(id)a0;
- (void)_dismiss;
- (id)_loadViewControllerProviderWithClassName:(id)a0 inBundle:(id)a1;
- (id)_setupWindowWithContentViewController:(id)a0 isCustomDomainAvailable:(BOOL)a1;
- (id)getICloudMailViewController;
- (id)loadBundle:(id)a0 atPath:(id)a1;
- (void)optionsButtonPressed:(id)a0;
- (void)pontifexButtonPressed:(id)a0;
- (void)presentICloudMailOptions:(id)a0 mailEnabled:(BOOL)a1 customDomainAvailable:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)switchButtonPressed:(id)a0;

@end
