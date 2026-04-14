@class NSUUID, HMFMessageDispatcher, NSString, NSObject;
@protocol OS_dispatch_queue, HMDMediaGroupStagingManagerDataSource;

@interface HMDMediaGroupStagingManager : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly, copy) NSUUID *identifier;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (weak) id<HMDMediaGroupStagingManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)shortDescription;
+ (id)logCategory;

- (id)privateDescription;
- (id)shortDescription;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)configureWithHome:(id)a0 messageDispatcher:(id)a1;
- (void)handleMediaGroupStageRequestMessage:(id)a0;
- (id)dataSourceRoutersForParentIdentifiers:(id)a0;
- (id)initWithIdentifier:(id)a0 dataSource:(id)a1;
- (id)routersForDestinationControllerIdentifier:(id)a0 destinationIdentifier:(id)a1;
- (void)stageDestinationControllerWithDestinationControllerIdentifier:(id)a0 destinationIdentifier:(id)a1;

@end
