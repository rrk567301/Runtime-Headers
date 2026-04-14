@interface _TtCC18AppIntentsServices21RemoteAppIntentsActor29PerformActionExecutorDelegate : NSObject <LNActionExecutorDelegate> {
    void /* unknown type, empty encoding */ actionMetadata;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ delegateStore;
    void /* unknown type, empty encoding */ effectiveBundleIdentifier;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ disambiguationRequest;
    void /* unknown type, empty encoding */ needsValueRequest;
    void /* unknown type, empty encoding */ confirmationRequest;
    void /* unknown type, empty encoding */ actionConfirmationRequest;
    void /* unknown type, empty encoding */ continueInAppRequest;
    void /* unknown type, empty encoding */ signposter;
}

- (id)init;
- (void).cxx_destruct;
- (void)executor:(id)a0 needsValueWithRequest:(id)a1;
- (void)executor:(id)a0 didCompleteExecutionWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 didPerformActionWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 needsActionConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsContinueInAppWithRequest:(id)a1;
- (void)executor:(id)a0 needsDisambiguationWithRequest:(id)a1;
- (BOOL)executor:(id)a0 shouldRunShowOutputAction:(id)a1;

@end
