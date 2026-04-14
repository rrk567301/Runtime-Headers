@class NSMutableDictionary, BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXMicroLocationVisitScheduler : NSObject

@property (retain, nonatomic) NSMutableDictionary *callbacks;
@property (retain, nonatomic) BPSSink *microLocationSink;
@property (retain, nonatomic) BMBiomeScheduler *microLocationScheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *biomeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;

+ (id)sharedInstance;

- (id)init;
- (BOOL)isSubscribed;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleCompletion:(id)a0;
- (void)_onStateQueue_setupSubscription;
- (void)_handleMicroLocationEvent:(id)a0;
- (void)_onStateQueue_cancelSubscription;
- (BOOL)hasActiveSubscribers;
- (void)removeAllSubscribers;
- (id)subscribeWithCallback:(id /* block */)a0;
- (id)subscribeWithCallback:(id /* block */)a0 onQueue:(id)a1;
- (void)unSubscribeWithToken:(id)a0;

@end
