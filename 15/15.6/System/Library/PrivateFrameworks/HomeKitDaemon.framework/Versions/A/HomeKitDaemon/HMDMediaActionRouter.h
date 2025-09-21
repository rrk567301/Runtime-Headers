@class NSUUID, NSString, HMDHome, NSObject, HMDResidentDevice;
@protocol OS_dispatch_queue, HMDMediaActionRouterDataSource;

@interface HMDMediaActionRouter : HMFObject <HMDMPCSessionDataMediaProfileSource, HMFMessageReceiver>

@property (readonly, weak, nonatomic) id<HMDMediaActionRouterDataSource> dataSource;
@property (readonly, nonatomic) char shouldExecuteOnCurrentDevice;
@property (weak, nonatomic) HMDResidentDevice *targetResidentDeviceOverride;
@property (readonly, weak) HMDHome *home;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (id)mediaProfileWithUUID:(id)a0;
- (void)_registerForMessages;
- (void)executeMediaActionWithSessionData:(id)a0 completion:(id /* block */)a1;
- (void)gatherTargetDevicesForExecutingMediaActionWithProfiles:(id)a0 targetSystemMediaApplication:(char)a1 outResidentDevicesInMediaAction:(id *)a2 outHomePodsInMediaAction:(id *)a3 outResidentDevicesSupportingMediaActions:(id *)a4 outHomePodsSupportingMediaActions:(id *)a5 outNonOdeonHomePodsSupportingMediaActions:(id *)a6 outNonOdeonResidentDevicesSupportingMediaActions:(id *)a7 outNonOdeonResidentDevicesInMediaAction:(id *)a8 outNonOdeonHomePodsInMediaAction:(id *)a9 dataSource:(id)a10;
- (void)handleNonResidentMediaActionExecutionWithSessionData:(id)a0 encodePlaybackArchive:(char)a1 completion:(id /* block */)a2;
- (void)routeMediaActionForExecution:(id)a0 source:(unsigned long long)a1 clientName:(id)a2 completion:(id /* block */)a3;
- (void)routeMessage:(id)a0;
- (void)routeSessionDataForExecution:(id)a0 encodePlaybackArchive:(char)a1 completion:(id /* block */)a2;
- (void)sendMediaActionMessageToCompanionWithSessionData:(id)a0 encodePlaybackArchive:(char)a1 completion:(id /* block */)a2;
- (void)sendMediaActionMessageToDevice:(id)a0 sessionData:(id)a1 encodePlaybackArchive:(char)a2 canForwardMessage:(char)a3 completion:(id /* block */)a4;
- (void)sendMediaActionMessageToResident:(id)a0 sessionData:(id)a1 encodePlaybackArchive:(char)a2 completion:(id /* block */)a3;
- (id)targetResidentDeviceForExecutingMediaActionWithProfiles:(id)a0 targetSystemMediaApplication:(char)a1;

@end
