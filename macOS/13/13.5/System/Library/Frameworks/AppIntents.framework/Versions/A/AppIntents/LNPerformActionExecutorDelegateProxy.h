@class NSError;

@interface LNPerformActionExecutorDelegateProxy : NSObject <LNPerformActionExecutorDelegate> {
    void /* unknown type, empty encoding */ interface;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (void)requestActionConfirmation:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)requestContinueInApp:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)requestParameterConfirmation:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)requestParameterDisambiguation:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)requestParameterNeedsValue:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)requestViewSnippetEnvironmentWithCompletionHandler:(void (^)(id))a0;

@end
