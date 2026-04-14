@class NSMutableDictionary, HMDHome, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMDLastSeenStatusManager : NSObject {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) HMDHome *home;
@property (readonly, nonatomic) NSMutableSet *pendingSyncAccessoryUUIDs;
@property (readonly, nonatomic) NSMutableSet *penaltyBoxAccessoryUUIDs;
@property (readonly, nonatomic) NSMutableDictionary *lastSeenRequestTime;
@property (nonatomic) BOOL isSyncScheduled;
@property (nonatomic) BOOL isStarted;
@property (nonatomic) BOOL enableDelayedSync;

+ (id)logCategory;

- (void)start;
- (void)stop;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_syncAllLastSeenData;
- (void)_updatePenaltyBox;
- (id)initWithHome:(id)a0 queue:(id)a1;
- (BOOL)isSyncNeeded;
- (void)runTransactionsForHome:(id)a0;
- (void)syncLastSeenStateForAccessory:(id)a0;

@end
