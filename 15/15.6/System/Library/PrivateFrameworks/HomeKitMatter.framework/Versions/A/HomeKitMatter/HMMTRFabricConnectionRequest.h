@class HMFTimer, HMMTRAccessoryServerBrowser, NSUUID, NSString, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRFabricConnectionRequest : HMFObject <HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableOrderedSet *_activeIPConnectionRequests;
    NSMutableOrderedSet *_activeThreadConnectionRequests;
    NSMutableOrderedSet *_activeThreadWEDConnectionRequests;
    NSMutableOrderedSet *_pendingConnectionRequests;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFTimer *idleTimer;
@property (readonly, weak, nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (readonly, nonatomic) NSUUID *fabricUUID;
@property (readonly, nonatomic) char systemCommissionerFabric;
@property (nonatomic) char active;
@property (nonatomic) unsigned char fabricIdleTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)privateDescription;
- (id)logIdentifier;
- (void)suspendOperations;
- (id)attributeDescriptions;
- (void)timerDidFire:(id)a0;
- (void)_addToPendingConnections:(id)a0;
- (void)_connectPendingConnections;
- (void)_removeFromPendingConnections:(id)a0;
- (void)_restartConnectionIdleTimer:(double)a0;
- (void)_updateConnectionIdleTime:(unsigned char)a0;
- (void)dispatchBlock:(id /* block */)a0;
- (char)_hasPendingAccessoryConnections;
- (void)startOperations;
- (char)_removeFromActiveIPConnections:(id)a0;
- (void)retryOperations;
- (void)_addToActiveIPConnections:(id)a0;
- (void)_addToActiveThreadConnections:(id)a0;
- (void)_addToActiveThreadWEDConnections:(id)a0;
- (void)_calculateFabricIdleTime;
- (char)_hasActiveAccessoryConnections;
- (void)_kickIdleTimer;
- (char)_removeFromActiveThreadConnections:(id)a0;
- (char)_removeFromActiveThreadWEDConnections:(id)a0;
- (char)_tryMergeIntoExistingConnection:(id)a0;
- (void)_updateActiveThreadWEDConnectionsIdleTime:(unsigned char)a0;
- (void)abortAllOperationsWithReason:(id)a0;
- (char)abortOperationsForConnectionRequest:(id)a0 reason:(id)a1;
- (id)activeIPConnectionRequests;
- (id)activeThreadConnectionRequests;
- (id)activeThreadWEDConnectionRequests;
- (void)connectToAccessoryWhenAllowed:(id)a0;
- (char)hasPendingHighPriorityConnectionRequest;
- (id)initWithQueue:(id)a0 browser:(id)a1 fabricUUID:(id)a2 systemCommissionerFabric:(char)a3;
- (void)operationsCompletedForAccessoryConnectionRequest:(id)a0;
- (id)pendingConnectionRequests;
- (void)stopOperations;
- (void)updateAllConnectionIdleTimeoutsToMinimum;

@end
