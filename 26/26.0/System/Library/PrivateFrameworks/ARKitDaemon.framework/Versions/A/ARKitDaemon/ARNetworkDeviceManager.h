@class NSString, ARNetworkServiceCollection, NSMutableDictionary, ARAppConnectionManager, NSObject, NSDictionary;
@protocol OS_dispatch_queue, ARAsyncServiceAdvisorDelegate;

@interface ARNetworkDeviceManager : NSObject <ARNetworkingDeviceClientDelegate, ARAsyncServiceAdvisor, ARServiceEventListener, ARAppConnectionLifecycleObserver, ARDeviceCollection> {
    ARNetworkServiceCollection *_networkServices;
    ARNetworkServiceCollection *_connectingNetworkServices;
    NSMutableDictionary *_deviceIDToDeviceClient;
    NSMutableDictionary *_deviceIDToConnectingDeviceClient;
    NSMutableDictionary *_deviceIDToWorldOriginData;
    NSMutableDictionary *_sessionIDToDeviceID;
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    ARAppConnectionManager *_appConnectionManager;
    NSDictionary *_deviceIdToLoopbackPort;
}

@property (weak, nonatomic) id<ARAsyncServiceAdvisorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createErrorWithString:(id)a0;
+ (id)_overrideNetworkServiceBundleID:(id)a0 endpoint:(id)a1;

- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_removeDeviceClientForDeviceID:(id)a0;
- (void)_removeServices:(id)a0 fromCollection:(id)a1;
- (void)_addConnectedService:(id)a0;
- (void)_callDelegateWithError:(id)a0 forService:(id)a1;
- (void)_createNetworkDeviceClientWithSessionID:(id)a0 appConnection:(id)a1;
- (BOOL)_lockIsHeld;
- (void)_removeServicesWithError:(id)a0 serviceFilter:(id /* block */)a1 invalidateClient:(BOOL)a2;
- (id)_sessionIDFromDeviceID:(id)a0;
- (void)_tryRemoveDeviceClientForDeviceID:(id)a0;
- (void)_updateWorldOriginForService:(id)a0;
- (id)_worldOriginForDeviceID:(id)a0;
- (void)appConnectionWasDeregistered:(id)a0;
- (void)appConnectionWasRegistered:(id)a0;
- (void)canAddService:(id)a0;
- (void)deviceClient:(id)a0 didStartServiceWithName:(id)a1;
- (void)deviceClient:(id)a0 didUpdateWorldOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (void)deviceClientDidConnect:(id)a0;
- (void)deviceClientDidDisconnect:(id)a0 withError:(id)a1;
- (id)deviceIDForSessionID:(id)a0;
- (void)didRemoveService:(id)a0 existingServices:(id)a1;
- (id)initWithAppConnectionManager:(id)a0;
- (id)initWithAppConnectionManager:(id)a0 deviceIdToLoopbackPort:(id)a1;

@end
