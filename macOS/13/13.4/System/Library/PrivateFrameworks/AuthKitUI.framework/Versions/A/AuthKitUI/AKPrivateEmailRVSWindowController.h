@class AKPrivateEmailRVSBootstrapper, AKPrivateEmailContext;

@interface AKPrivateEmailRVSWindowController : AKPromptWindowController <AKPrivateEmailRVSServiceDelegate>

@property (retain, nonatomic) AKPrivateEmailRVSBootstrapper *helper;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) AKPrivateEmailContext *privateEmailContext;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)_setupWithCompletion:(id /* block */)a0;
- (void)callCompletionWithPrivateEmail:(id)a0 error:(id)a1;
- (void)presentPromptWithCompletion:(id /* block */)a0;

@end
