@class NSDictionary;
@protocol LACEvaluationRequest;

@interface LACAuthenticationUIManagerCustom : NSObject <LACAuthenticationUIManaging, LACEvaluationEventHandling> {
    void /* function */ authenticationHints;
}

@property (nonatomic, readonly) id<LACEvaluationRequest> request;
@property (nonatomic, readonly) long long type;
@property (nonatomic, copy) NSDictionary *authenticationHints;
@property (nonatomic, weak) void /* function */ uiEventDelegate;
@property (nonatomic, weak) void /* function */ uiDelegate;

- (void).cxx_destruct;
- (id)init;
- (void)handleEvaluationEvent:(id)a0 completion:(id /* block */)a1;
- (id)initWithRequest:(id)a0 uiDelegate:(id)a1;

@end
