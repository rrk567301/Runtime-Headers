@class NSString, IKViewElement;

@interface VSAutoAuthenticationAppDocumentController : VSAppDocumentController <VSAutoAuthenticationViewModelDelegate>

@property (retain, nonatomic) IKViewElement *buttonLockupElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_autoAuthenticationViewModelWithViewModel:(id)a0;
- (id)_newViewModel;
- (char)_updateAutoAuthenticationViewModel:(id)a0 error:(id *)a1;
- (char)_updateAutoAuthenticationViewModel:(id)a0 withTemplate:(id)a1;
- (char)_updateViewModel:(id)a0 error:(id *)a1;
- (void)autoAuthenticationViewModelDidManualSignInButton:(id)a0;

@end
