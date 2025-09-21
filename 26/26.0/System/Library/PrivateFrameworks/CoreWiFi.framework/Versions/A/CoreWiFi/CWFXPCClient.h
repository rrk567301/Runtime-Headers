@class CWFRequestParameters, NSMutableDictionary, CWFXPCProxyConnection, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CWFXPCClient : NSObject <CWFXPCEventProtocolPrivate, NSXPCProxyCreating> {
    NSObject<OS_dispatch_queue> *_mutex;
    CWFRequestParameters *_checkinRequestParams;
    NSMutableDictionary *_mutableEventIDMap;
    NSMutableDictionary *_mutableActivityMap;
    NSMutableDictionary *_mutableEventCallbackMap;
    NSMutableDictionary *_mutableEventAckMap;
    NSXPCConnection *_XPCConnection;
}

@property BOOL invalidated;
@property (retain, nonatomic) CWFXPCProxyConnection *remoteXPCProxyConnection;
@property (readonly) long long serviceType;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (copy) id /* block */ invalidationHandler;
@property (copy) id /* block */ interruptionHandler;
@property (readonly, retain, nonatomic) CWFXPCProxyConnection *localXPCProxyConnection;
@property (copy) id /* block */ queryNearbyRecommendedNetworksHandler;
@property (copy) id /* block */ rememberCloudNetworkHandler;
@property (copy) id /* block */ forgetCloudNetworkHandler;
@property (copy) id /* block */ queryCloudNetworksHandler;
@property (copy) id /* block */ dumpLogsHandler;
@property (copy) id /* block */ queryCaptivePortalCredentialsHandler;
@property (copy) id /* block */ setCaptivePortalCredentialsHandler;
@property (copy) id /* block */ nearbyConfirmBrokenBackhaulHandler;
@property (copy) id /* block */ allowBrokenBackhaulPersonalHotspotFallbackHandler;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dumpLogs:(id)a0 reply:(id /* block */)a1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)queryCloudNetworksAndReply:(id /* block */)a0;
- (void)rememberCloudNetworkProfile:(id)a0 reply:(id /* block */)a1;
- (void)invalidate;
- (void)suspend;
- (void)allowBrokenBackhaulPersonalHotspotFallbackForNetwork:(id)a0 reply:(id /* block */)a1;
- (void)resume;
- (id)init;
- (id)initWithServiceType:(long long)a0;
- (void)nearbyConfirmBrokenBackhaulUsingTimeout:(unsigned long long)a0 count:(unsigned long long)a1 network:(id)a2 minimumCacheTimestamp:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)queryNearbyRecommendedNetworksAndReply:(id /* block */)a0;
- (void)queryCaptivePortalCredentialsForKnownNetworkProfile:(id)a0 reply:(id /* block */)a1;
- (void)activate;
- (void)setCaptivePortalCredentials:(id)a0 knownNetworkProfile:(id)a1 reply:(id /* block */)a2;
- (void)forgetCloudNetworkProfile:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithServiceType:(long long)a0 endpoint:(id)a1;
- (void)__acknowledgeEventWithUUID:(id)a0;
- (void)__beginActivity:(id)a0 requestParameters:(id)a1 reply:(id /* block */)a2;
- (void)__checkinWithRequestParameters:(id)a0 reply:(id /* block */)a1;
- (void)__receivedEvent:(id)a0;
- (void)__startMonitoringEvent:(id)a0 requestParameters:(id)a1 reply:(id /* block */)a2;
- (BOOL)allowRequestType:(long long)a0;
- (BOOL)beginActivity:(id)a0 requestParameters:(id)a1 error:(id *)a2;
- (BOOL)checkinWithRequestParameters:(id)a0 error:(id *)a1;
- (void)clearAllEventHandlers;
- (void)endActivity:(id)a0 requestParameters:(id)a1;
- (void)endAllActivities:(id)a0;
- (id /* block */)eventHandlerWithEventID:(id)a0;
- (id)initWithServiceType:(long long)a0 endpoint:(id)a1 remoteXPCProxyConnection:(id)a2;
- (id)initWithServiceType:(long long)a0 remoteXPCProxyConnection:(id)a1;
- (void)receivedAcknowledgedXPCEvent:(id)a0 reply:(id /* block */)a1;
- (void)receivedXPCEvent:(id)a0;
- (void)setEventHandler:(id /* block */)a0 eventID:(id)a1;
- (BOOL)startMonitoringEvent:(id)a0 requestParameters:(id)a1 error:(id *)a2;
- (void)stopMonitoringAllEvents:(id)a0;
- (void)stopMonitoringEvent:(id)a0 requestParameters:(id)a1;

@end
