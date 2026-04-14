@class NSButton, BCSecureLabel, NSView, BCWebViewController, BCAuthenticationManager, BCMessage;
@protocol BCAuthenticationViewControllerDelegate;

@interface BCAuthenticationViewController : NSViewController <BCWebViewControllerDelegate>

@property (retain, nonatomic) BCMessage *message;
@property (retain, nonatomic) BCAuthenticationManager *authenticationManager;
@property (retain, nonatomic) BCWebViewController *webkitController;
@property (retain, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) NSView *rightSpacer;
@property (retain, nonatomic) BCSecureLabel *label;
@property (weak, nonatomic) id<BCAuthenticationViewControllerDelegate> delegate;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)commitEditingAndReturnError:(id *)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)dismiss;
- (void)setupConstraints;
- (void)setupSubviews;
- (BOOL)shouldHandleRedirectURI:(id)a0;
- (void)didReceiveCallbackRequest:(id)a0;
- (void)didChangeSecureStatus:(BOOL)a0;
- (void)didChangeNavigationURL:(id)a0;
- (id)initWithAuthenticationManager:(id)a0 message:(id)a1;
- (void)startAuthenticationSession;
- (void)authenticationSessionWillFinish:(id)a0 error:(id)a1;
- (void)finishAuthenticationSession;

@end
