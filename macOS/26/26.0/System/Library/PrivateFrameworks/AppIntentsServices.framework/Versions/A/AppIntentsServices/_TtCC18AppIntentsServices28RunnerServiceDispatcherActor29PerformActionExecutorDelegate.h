@class NSValue, LNSnippetEnvironment, LNActionExecutor;

@interface _TtCC18AppIntentsServices28RunnerServiceDispatcherActor29PerformActionExecutorDelegate : NSObject <LNActionExecutorDelegate> {
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ delegateStore;
    void /* unknown type, empty encoding */ actionMetadata;
    void /* unknown type, empty encoding */ effectiveBundleIdentifier;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ executionIdentifier;
    void /* unknown type, empty encoding */ payloadPrivacy;
    void /* unknown type, empty encoding */ pendingRequests;
    void /* unknown type, empty encoding */ snippetEnvironment;
}

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
