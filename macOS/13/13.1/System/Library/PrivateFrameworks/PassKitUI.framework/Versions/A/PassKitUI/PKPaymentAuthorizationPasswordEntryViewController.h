@class NSTextField, LAUIUserPasswordViewController, NSView, NSString, NSButton;
@protocol PKPaymentAuthorizationPasswordEntryViewControllerDelegate;

@interface PKPaymentAuthorizationPasswordEntryViewController : NSViewController <LAUIUserPasswordFieldRemoteProtocol>

@property (retain, nonatomic) LAUIUserPasswordViewController *passwordViewController;
@property (retain, nonatomic) NSTextField *passwordLabel;
@property (retain, nonatomic) NSTextField *promptTextField;
@property (retain, nonatomic) NSButton *payButton;
@property (retain, nonatomic) NSView *passwordView;
@property (nonatomic) BOOL didReceiveViewDidAppear;
@property (weak, nonatomic) id<PKPaymentAuthorizationPasswordEntryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (id)nibBundle;
- (void)externalizedContextInReply:(id /* block */)a0;
- (void)didVerifyPassword;
- (void)didSubmitWrongPassword:(BOOL)a0;
- (void)passwordFieldDidResignFirstResponder;
- (void)requestCancelAuthentication;
- (void)payButtonClicked:(id)a0;

@end
