@class AKAuthorizationPresentationContext;
@protocol AKAuthorizationPasswordAuthenticationDelegate;

@interface AKAuthorizationPasswordAuthenticationViewController : AKAuthorizationPaneViewController

@property (weak, nonatomic) id<AKAuthorizationPasswordAuthenticationDelegate> delegate;
@property (retain, nonatomic) AKAuthorizationPresentationContext *presentationContext;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)_username;
- (void)presentInWindow:(id)a0;
- (id)_contextForAuthentication;

@end
