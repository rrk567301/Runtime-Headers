@class NSImageView, NSArray, NSTextField, NSString;
@protocol PKPaymentAuthorizationPassphraseEntryViewControllerDelegate;

@interface PKPaymentAuthorizationPassphraseEntryViewController : PKPaymentAuthorizationChildViewController <NSTextFieldDelegate>

@property (retain, nonatomic) NSImageView *paymentLogoImageView;
@property (retain, nonatomic) NSTextField *promptField;
@property (retain, nonatomic) NSArray *passphraseFields;
@property (nonatomic) unsigned long long passphraseLength;
@property (copy, nonatomic) NSString *prompt;
@property (weak, nonatomic) id<PKPaymentAuthorizationPassphraseEntryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)cancelButtonClicked:(id)a0;
- (void)_send_didCancel;
- (void)_clearPassphraseFields;
- (id)_gatherPassphrase;
- (void)_replaceSubviews;
- (void)_sendDidEnterPassphrase;

@end
