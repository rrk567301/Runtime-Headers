@class NSValue, LNSnippetEnvironment, LNActionExecutor;

@interface _TtCC18AppIntentsServices19InProcessDispatcher29PerformActionExecutorDelegate : NSObject <LNActionExecutorDelegate> {
    void /* unknown type, empty encoding */ actionMetadata;
    void /* unknown type, empty encoding */ clientDelegate;
    void /* unknown type, empty encoding */ continuation;
    void /* unknown type, empty encoding */ dispatcher;
    void /* unknown type, empty encoding */ effectiveBundleIdentifier;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ payloadPrivacy;
    void /* unknown type, empty encoding */ snippetEnvironment;
    void /* unknown type, empty encoding */ _executorIdentifier;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)executor:(id)a0 needsValueWithRequest:(id)a1;
- (void)executor:(id)a0 didCompleteExecutionWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 didPerformActionWithResult:(id)a1 error:(id)a2;
- (void)executor:(LNActionExecutor *)a0 environmentForViewSnippetWithCompletion:(void (^)(LNSnippetEnvironment *))a1;
- (void)executor:(id)a0 needsActionConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsChoiceWithRequest:(id)a1;
- (void)executor:(id)a0 needsConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsContinueInAppWithRequest:(id)a1;
- (void)executor:(id)a0 needsDisambiguationWithRequest:(id)a1;
- (void)executor:(LNActionExecutor *)a0 preferredContentSizeForViewSnippetWithCompletion:(void (^)(NSValue *))a1;
- (BOOL)executor:(id)a0 shouldRunShowOutputAction:(id)a1;

@end
