@class NSUUID, HMFMessageDispatcher, NSString, HMDResidentSyncManager, NSObject;
@protocol OS_dispatch_queue, HMDPersonDataSource;

@interface HMDPersonResidentSyncManager : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly, copy) NSUUID *UUID;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDResidentSyncManager *residentSyncManager;
@property (weak) id<HMDPersonDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)addOrUpdatePersons:(id)a0;
- (id)removePersonsWithUUIDs:(id)a0;
- (id)removeAllAssociatedData;
- (void)handleAddOrUpdatePersonsMessage:(id)a0;
- (void)handleRemoveAllAssociatedDataMessage:(id)a0;
- (void)handleRemovePersonsMessage:(id)a0;
- (id)initWithUUID:(id)a0 messageDispatcher:(id)a1 workQueue:(id)a2 residentSyncManager:(id)a3;
- (void)configureWithHome:(id)a0 dataSource:(id)a1;

@end
