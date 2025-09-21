@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MPAVRoutingDataSource : NSObject <NSObject> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSString *_activeAudioCategory;
    char _hasActiveAudioCategory;
}

@property (readonly, copy, nonatomic) NSString *activeAudioCategory;
@property (readonly, nonatomic) char didReceiveDiscoveryResults;
@property (readonly, nonatomic) char hasActiveAudioCategory;
@property (nonatomic) long long discoveryMode;
@property (readonly, nonatomic) char devicePresenceDetected;
@property (readonly, nonatomic) char supportsMultipleSelection;
@property (nonatomic) long long filterMode;
@property (nonatomic) unsigned int targetSessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_stateDumpObject;
- (void)_externalScreenTypeDidChangeNotification:(id)a0;
- (void)_reloadActiveAudioCategoryWithCompletion:(id /* block */)a0;
- (void)_superclassRegisterNotifications;
- (void)_superclassUnregisterNotifications;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)a0;
- (void)getExternalScreenTypeWithCompletion:(id /* block */)a0;
- (void)getPickedRouteHasVolumeControlWithCompletion:(id /* block */)a0;
- (id)getRoutesForCategory:(id)a0;
- (char)routeIsLeaderOfEndpoint:(id)a0;
- (void)setPickedRoute:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;
- (void)unpickAirPlayAVRoutesWithCompletion:(id /* block */)a0;

@end
