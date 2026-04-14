@class NSError;

@interface LNOneShotActionExecutor : NSObject <LNPerformActionExecutorDelegate> {
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ executorOptions;
    void /* unknown type, empty encoding */ appContext;
}

@property (nonatomic, readonly) long long connectionIdentifier;
@property (nonatomic, readonly) BOOL hasValidConnection;

- (id)init;
- (void).cxx_destruct;
- (void)performWithCompletionHandler:(void (^)(void))a0;
- (id)initWithAction:(id)a0 executorOptions:(id)a1 appContext:(id)a2;
- (void)requestActionConfirmation:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (BOOL)requestCancelTimeoutAndReturnError:(id *)a0;
- (void)requestChoice:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)requestContinueInApp:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (BOOL)requestExtendTimeoutAndReturnError:(id *)a0;
- (void)requestOpenURL:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)requestParameterConfirmation:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)requestParameterDisambiguation:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)requestParameterNeedsValue:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)requestViewSnippetEnvironmentWithCompletionHandler:(void (^)(id))a0;

@end
