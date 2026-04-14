@class NSDictionary, NSArray;
@protocol LACBackoffCounter, LACEvaluationRequest;

@interface LACAuthenticationUIManagerComposite : NSObject <LACAuthenticationUIManaging, LACEvaluationEventHandling, LACAuthenticationUIProxy, LACAuthenticationUIEventHandling> {
    void /* function */ authenticationHints;
    void /* function */ managers;
    void /* unknown type, empty encoding */ $__lazy_storage_$_customUIManagers;
    void /* unknown type, empty encoding */ $__lazy_storage_$_defaultUIManagers;
    void /* function */ extendedInternalInfo;
    void /* unknown type, empty encoding */ eventQueue;
}

@property (nonatomic, readonly) id<LACEvaluationRequest> request;
@property (nonatomic, readonly) long long type;
@property (nonatomic, weak) void /* function */ uiEventDelegate;
@property (nonatomic, copy) NSDictionary *authenticationHints;
@property (nonatomic, readonly) NSArray *managers;
@property (nonatomic, copy) NSArray *customUIManagers;
@property (nonatomic, copy) NSArray *defaultUIManagers;
@property (nonatomic, copy) NSDictionary *extendedInternalInfo;
@property (nonatomic, readonly) id<LACBackoffCounter> backoffCounter;

- (void).cxx_destruct;
- (id)init;
- (id)externalizedContextWithError:(id *)a0;
- (void)dealloc;
- (void)internalInfoWithReply:(id /* block */)a0;
- (void)uiEvent:(long long)a0 options:(id)a1;
- (id)extendedInternalInfoForRemoteUI;
- (void)finishRunWithResult:(id)a0 error:(id)a1;
- (void)handleEvaluationEvent:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldFinishRunWithResult:(id)a0 error:(id)a1;
- (id)initWithRequest:(id)a0 managers:(id)a1;

@end
