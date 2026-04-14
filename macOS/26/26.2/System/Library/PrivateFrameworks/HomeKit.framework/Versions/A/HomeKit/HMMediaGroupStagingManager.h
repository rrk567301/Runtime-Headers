@class NSUUID, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, HMFTimerManager, HMMediaGroupStagingManagerDataSource;

@interface HMMediaGroupStagingManager : HMFObject <HMFLogging, HMFTimerManagerDelegate, HMFMessageReceiver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_stagedDestinationsByIdentifier;
    NSMutableDictionary *_stagedDestinationControllerDataByIdentifier;
    NSMutableDictionary *_stagedGroupsByIdentifier;
}

@property (readonly, copy) NSUUID *identifier;
@property (readonly) id<HMFTimerManager> timerManager;
@property (weak) id<HMMediaGroupStagingManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)shortDescription;
+ (id)logCategory;

- (id)shortDescription;
- (void)timerManager:(id)a0 didFireForTimerContext:(id)a1;
- (id)logIdentifier;
- (id)privateDescription;
- (void)configureWithMessageDispatcher:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)stagedDestinationForIdentifier:(id)a0;
- (void)clearStagedDataForIdentifier:(id)a0;
- (void)clearStagedDestinationControllerDataForIdentifier:(id)a0;
- (void)clearStagedDestinationForIdentifier:(id)a0;
- (void)clearStagedGroupForIdentifier:(id)a0;
- (void)handleMediaGroupStageRequestMessage:(id)a0;
- (id)initWithIdentifier:(id)a0 timerManager:(id)a1 dataSource:(id)a2;
- (void)notifyDestinationControllerWithIdentifier:(id)a0;
- (void)stageDestinationControllersData:(id)a0;
- (void)stageDestinations:(id)a0;
- (void)stageGroups:(id)a0;
- (id)stagedDestinationControllerDataForIdentifier:(id)a0;
- (id)stagedGroupDestinations;
- (id)stagedGroupForIdentifier:(id)a0;
- (id)stagedGroups;

@end
