@class NSMapTable, HMFMessageDispatcher, NSUUID, NSMutableDictionary, NSString, NSObject, HMUserActionPredictionTransformer;
@protocol HMUserActionPredictionDataSource, HMUserActionPredictionProviderDataSource, HMDarwinNotificationProvider, OS_dispatch_queue;

@interface HMUserActionPredictionProvider : NSObject <HMFMessageReceiver, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _firstUnlockToken;
    NSMapTable *_subscribers;
    BOOL _shouldRefetchFromBackend;
}

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSUUID *uuid;
@property (readonly, weak) id<HMUserActionPredictionProviderDataSource> dataSource;
@property (readonly) id<HMUserActionPredictionDataSource> predictionDataSource;
@property (readonly) HMUserActionPredictionTransformer *predictionTransformer;
@property (readonly) NSMutableDictionary *lastMappedPredictionsPerHome;
@property (readonly) id<HMDarwinNotificationProvider> darwinNotificationProvider;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0 forHomeIdentifier:(id)a1;
- (void)fetchPredictionsForHomeWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)handleRefreshPredictionsMessage:(id)a0;
- (id)initWithWorkQueue:(id)a0 messageDispatcher:(id)a1 UUID:(id)a2 dataSource:(id)a3 predictionDataSource:(id)a4 predictionTransformer:(id)a5 darwinNotificationProvider:(id)a6;
- (void)recalculatePredictions;
- (void)removeSubscriber:(id)a0 forHomeIdentifier:(id)a1;

@end
