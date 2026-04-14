@class HMDRemoteEventRouterPrimaryResidentClient, NSString, NSUUID, HMDUserMessagePolicy, NSMapTable, NSObject, HMEDelegatingEventRouter;
@protocol OS_dispatch_queue, HMDHomeRemoteEventRouterClientControllerDataSource, HMDHomeRemoteEventRouterClientFactory;

@interface HMDHomeRemoteEventRouterClientController : NSObject <HMDRemoteEventRouterClientDataSource, HMEDelegatingEventRouterDataSource, HMESubscriptionProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_messageTargetUUID;
    NSString *_requestMessageName;
    NSString *_updateMessageName;
    id<HMDHomeRemoteEventRouterClientControllerDataSource> _dataSource;
    HMDUserMessagePolicy *_clientUserMessagePolicy;
    id<HMDHomeRemoteEventRouterClientFactory> _routerClientFactory;
    HMDRemoteEventRouterPrimaryResidentClient *_remoteEventRouterPrimaryResidentClient;
    NSMapTable *_eventRouterResidentClientToRoutingInfoMapping;
}

@property (readonly) HMEDelegatingEventRouter *residentDelegatingEventRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isNetworkAvailable;
- (void)registerConsumer:(id)a0 topicFilters:(id)a1 completion:(id /* block */)a2;
- (void)unregisterConsumer:(id)a0 topicFilters:(id)a1 completion:(id /* block */)a2;
- (BOOL)isCurrentDevicePrimaryResident;
- (id)dumpStateDescription;
- (id)initWithMessageTargetUUID:(id)a0 workQueue:(id)a1 dataSource:(id)a2 requestMessageName:(id)a3 updateMessageName:(id)a4 clientUserMessagePolicy:(id)a5 assertionController:(id)a6;
- (void)createResidentRouterForAccessoryUUID:(id)a0 deviceIdentifier:(id)a1 eventPrefix:(id)a2;
- (void)removeResidentRouterForDeviceIdentifier:(id)a0;
- (void)networkAvailabilityDidChange:(BOOL)a0;
- (id)delegatingRouter:(id)a0 filteredTopics:(id)a1 forRouter:(id)a2;
- (id)routerClientPrimaryResidentDeviceIdentifier:(id)a0;
- (id)routerClientResidentManager:(id)a0;
- (id)routerClientMessageDestination:(id)a0 serverIdentifier:(out id *)a1;
- (BOOL)routerClientSupportsFragmentMessageForServerIdentifier:(id)a0;
- (id)initWithMessageTargetUUID:(id)a0 workQueue:(id)a1 dataSource:(id)a2 routerClientFactory:(id)a3 requestMessageName:(id)a4 updateMessageName:(id)a5 clientUserMessagePolicy:(id)a6 assertionController:(id)a7 delegatingRouterFactory:(id /* block */)a8;
- (void)changeRegistrationsForConsumer:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2 completion:(id /* block */)a3;
- (void)unregisterConsumer:(id)a0 completion:(id /* block */)a1;

@end
