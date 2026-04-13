@class ASCAuthorizationPresentationContext;
@protocol ASPasswordAuthenticationPaneViewControllerDelegate;

@interface ASPasswordAuthenticationPaneViewController : ASCredentialRequestPaneViewController {
    ASCAuthorizationPresentationContext *_presentationContext;
    double _keyboardHeight;
    unsigned long long _persona;
}

@property (weak, nonatomic) id<ASPasswordAuthenticationPaneViewControllerDelegate> authenticationDelegate;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithPersona:(unsigned long long)a0 presentationContext:(id)a1;

@end
