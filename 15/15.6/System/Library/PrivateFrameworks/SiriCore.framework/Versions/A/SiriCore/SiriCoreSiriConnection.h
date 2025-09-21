@class SiriCoreSiriBackgroundConnection, NSString, NSURL, NSError, SAConnectionPolicy, NSObject, NSMutableSet, NSMutableArray;
@protocol SiriCoreSiriConnectionDelegate, OS_dispatch_queue, OS_dispatch_group;

@interface SiriCoreSiriConnection : NSObject <SiriCoreSiriBackgroundConnectionDelegate, SiriCoreSiriConnection> {
    NSObject<OS_dispatch_queue> *_queue;
    char _isCanceled;
    char _sendPings;
    char _isCanceledInternal;
    NSMutableSet *_pendingBackgroundConnections;
    NSMutableSet *_comatoseBackgroundConnections;
    NSMutableSet *_scheduledRoutes;
    SiriCoreSiriBackgroundConnection *_activeBackgroundConnection;
    NSObject<OS_dispatch_group> *_activeConnectionGroup;
    NSMutableArray *_connMethodUsedHistory;
}

@property (copy, nonatomic) SAConnectionPolicy *connectionPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SiriCoreSiriConnectionDelegate> delegate;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) char prefersWWAN;
@property (nonatomic) char skipPeer;
@property (nonatomic) char useWiFiHint;
@property (copy, nonatomic) NSError *skipPeerError;
@property (nonatomic) char forceReconnect;
@property (copy, nonatomic) NSString *aceHost;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (copy, nonatomic) NSString *peerAssistantIdentifier;
@property (copy, nonatomic) NSString *peerType;
@property (copy, nonatomic) NSString *peerVersion;
@property (copy, nonatomic) NSString *productTypePrefix;
@property (nonatomic) char usesProxyConnection;
@property (nonatomic) char deviceIsInWalkaboutExperimentGroup;
@property (nonatomic) char siriConnectionUsesPeerManagedSync;
@property (retain, nonatomic) Class peerProviderClass;
@property (copy, nonatomic) NSString *connectionId;
@property (nonatomic) char imposePolicyBan;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (id)initWithQueue:(id)a0;
- (void)barrier:(id /* block */)a0;
- (id)_connectionInfoForRoute:(id)a0 policy:(id)a1;
- (void)probeConnection;
- (void)_accessPotentiallyActiveConnections:(id /* block */)a0;
- (id)_activeOrAnyPendingConnection;
- (void)_cancelSynchronously:(id /* block */)a0;
- (void)_handleLastEventFromBackgroundConnection:(id)a0 pendingConnectionExhaustionHandler:(id /* block */)a1;
- (void)_recordConnectionMethodForMetrics:(id)a0;
- (void)_scheduleBackgroundConnectionWithRoute:(id)a0 delay:(double)a1 policy:(id)a2;
- (void)_startBackgroundConnectionWithRoute:(id)a0 policy:(id)a1;
- (void)_waitForActiveConnection:(id /* block */)a0;
- (id)analysisInfo;
- (void)cancelSynchronously:(char)a0 onQueue:(char)a1 completion:(id /* block */)a2;
- (void)getAnalysisInfo:(id /* block */)a0;
- (void)getConnectionMetricsSynchronously:(char)a0 completion:(id /* block */)a1;
- (void)sendCommand:(id)a0 errorHandler:(id /* block */)a1;
- (void)sendCommands:(id)a0 errorHandler:(id /* block */)a1;
- (void)setSendPings:(char)a0;
- (void)siriBackgroundConnection:(id)a0 didEncounterError:(id)a1 analysisInfo:(id)a2;
- (void)siriBackgroundConnection:(id)a0 didEncounterIntermediateError:(id)a1;
- (void)siriBackgroundConnection:(id)a0 didOpenWithConnectionType:(id)a1 routeId:(id)a2 delay:(double)a3;
- (void)siriBackgroundConnection:(id)a0 didReceiveAceObject:(id)a1;
- (void)siriBackgroundConnection:(id)a0 willStartConnectionWithHTTPHeader:(id)a1;
- (void)siriBackgroundConnection:(id)a0 willStartWithConnectionType:(id)a1;
- (void)siriBackgroundConnectionDidClose:(id)a0;

@end
