@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, TIAnalyticsServiceProvider;

@interface TIAnalyticsService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSMutableDictionary *eventSpecs;
@property (readonly, nonatomic) id<TIAnalyticsServiceProvider> provider;

+ (id)sharedInstance;
+ (void)setMockInstance:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (void)_dispatchEventToDomain:(id)a0 withName:(id)a1 payload:(id)a2 values:(id)a3 inputMode:(id)a4 testingParameters:(id)a5 allowSparsePayload:(char)a6 withCompletionHandler:(id /* block */)a7;
- (void)_registerEventSpec:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addSettings:(id)a0 toPayload:(id)a1 errors:(id)a2;
- (void)appendToErrors:(id)a0 code:(long long)a1 message:(id)a2;
- (void)dispatchEventToInputAnalyticsDomainWithName:(id)a0 payload:(id)a1 testingParameters:(id)a2 allowSparsePayload:(char)a3;
- (void)dispatchEventWithName:(id)a0;
- (char)dispatchEventWithName:(id)a0 error:(id *)a1;
- (void)dispatchEventWithName:(id)a0 inputMode:(id)a1;
- (char)dispatchEventWithName:(id)a0 inputMode:(id)a1 error:(id *)a2;
- (void)dispatchEventWithName:(id)a0 inputMode:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)dispatchEventWithName:(id)a0 payload:(id)a1 testingParameters:(id)a2 allowSparsePayload:(char)a3;
- (char)dispatchEventWithName:(id)a0 payload:(id)a1 testingParameters:(id)a2 allowSparsePayload:(char)a3 error:(id *)a4;
- (void)dispatchEventWithName:(id)a0 payload:(id)a1 testingParameters:(id)a2 allowSparsePayload:(char)a3 withCompletionHandler:(id /* block */)a4;
- (void)dispatchEventWithName:(id)a0 values:(id)a1;
- (char)dispatchEventWithName:(id)a0 values:(id)a1 error:(id *)a2;
- (void)dispatchEventWithName:(id)a0 values:(id)a1 inputMode:(id)a2;
- (char)dispatchEventWithName:(id)a0 values:(id)a1 inputMode:(id)a2 error:(id *)a3;
- (void)dispatchEventWithName:(id)a0 values:(id)a1 inputMode:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)dispatchEventWithName:(id)a0 values:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)dispatchEventWithName:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)queueCompletionHandler:(id /* block */)a0;
- (void)registerEventSpec:(id)a0;
- (char)registerEventSpec:(id)a0 error:(id *)a1;
- (void)registerEventSpec:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)sendCoreAnalyticsEventToDomain:(id)a0 withName:(id)a1 payload:(id)a2;
- (id)settingsFromInputMode:(id)a0 eventSpec:(id)a1 errors:(id)a2;
- (id)settingsFromPayload:(id)a0 andValues:(id)a1 eventSpec:(id)a2 allowSparsePayload:(char)a3 errors:(id)a4;

@end
