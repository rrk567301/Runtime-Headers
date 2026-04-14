@class LNSnippetEnvironment, LNActionExecutor;

@interface SnippetUI.PerformActionExecutorDelegate : NSObject <LNActionExecutorDelegate> {
    void /* unknown type, empty encoding */ continuation;
    void /* unknown type, empty encoding */ snippetEnvironmentProvider;
}

- (id)init;
- (void).cxx_destruct;
- (void)executor:(id)a0 needsValueWithRequest:(id)a1;
- (void)executor:(id)a0 didCompleteExecutionWithResult:(id)a1 error:(id)a2;
- (void)executor:(LNActionExecutor *)a0 environmentForViewSnippetWithCompletion:(void (^)(LNSnippetEnvironment *))a1;
- (void)executor:(id)a0 needsConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsDisambiguationWithRequest:(id)a1;

@end
