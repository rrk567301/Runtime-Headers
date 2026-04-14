@class NSString, HDProfile, HDHealthStoreClient;
@protocol HDClientDataCollectionObservationStateMonitorDelegate;

@interface HDClientDataCollectionObservationStateMonitor : NSObject <HDProcessStateObserver> {
    _Atomic BOOL _invalidated;
}

@property (readonly, nonatomic) HDHealthStoreClient *client;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, weak, nonatomic) id<HDClientDataCollectionObservationStateMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processDidEnterForeground:(id)a0;
- (void)processDidEnterBackground:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)dealloc;
- (id)initWithClient:(id)a0 delegate:(id)a1;
- (id)currentObserverState;
- (void)workoutManagerDidChangeState:(id)a0;

@end
