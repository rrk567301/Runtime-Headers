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

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)dismiss;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)initWithAuthenticationManager:(id)a0 message:(id)a1;
- (void)startAuthenticationSession;
- (void)sendAuthenticationResponse:(id)a0;
- (void)finishAuthenticationSession;
- (void)authenticationSessionWillFinish:(id)a0 error:(id)a1;
- (void)didReceiveCallbackRequest:(id)a0;
- (void)didChangeSecureStatus:(BOOL)a0;

@end
