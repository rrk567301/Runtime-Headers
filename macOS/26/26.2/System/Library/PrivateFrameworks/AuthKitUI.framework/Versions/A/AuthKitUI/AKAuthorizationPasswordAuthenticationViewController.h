@class AKAuthorizationPresentationContext;
@protocol AKAuthorizationPasswordAuthenticationDelegate;

@interface AKAuthorizationPasswordAuthenticationViewController : AKAuthorizationPaneViewController

@property (weak, nonatomic) id<AKAuthorizationPasswordAuthenticationDelegate> delegate;
@property (retain, nonatomic) AKAuthorizationPresentationContext *presentationContext;

- (void).cxx_destruct;
- (id)_username;
- (void)viewDidLoad;
- (void)dealloc;
- (id)_contextForAuthentication;
- (void)presentInWindow:(id)a0;

@end
