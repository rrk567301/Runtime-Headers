@class NSMutableDictionary, NSXPCConnection, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface W5Client : NSObject {
    NSXPCConnection *_conn;
    NSObject<OS_dispatch_queue> *_queue;
    double _lastRecoveryTimestamp;
    NSMutableArray *_mutableEventIDs;
    NSMutableArray *_mutableUUIDs;
    NSMutableDictionary *_mutableEventCallbackMap;
    NSMutableDictionary *_mutablePeerEventCallbackMap;
    NSMutableSet *_mutableFaultEventMonitoringPeers;
}

@property (copy, nonatomic) id /* block */ eventCallback;

+ (id)sharedClient;

- (id)peers;
- (BOOL)stopMonitoringFaultEventsForPeer:(id)a0 error:(out id *)a1;
- (void)requestFileFromPeer:(id)a0 remoteFilePath:(id)a1 reply:(id /* block */)a2;
- (void)associateToNetworkOnPeer:(id)a0 scanResult:(id)a1 configuration:(id)a2 reply:(id /* block */)a3;
- (id)runWiFiSnifferWithTCPDumpOnChannels:(id)a0 duration:(double)a1 peer:(id)a2 error:(out id *)a3;
- (id)collectLogsDiagnosticMode:(id)a0 update:(id /* block */)a1 reply:(id /* block */)a2;
- (BOOL)__tarballWithSource:(id)a0 destination:(id)a1 error:(id *)a2;
- (id)queryDiagnosticsModeForPeer:(id)a0 info:(id)a1 reply:(id /* block */)a2;
- (void)dealloc;
- (void)__queryLocalPeerAndReply:(id /* block */)a0;
- (void)receivedEvent:(id)a0;
- (id)__mostRecentInDirectories:(id)a0 include:(id)a1 exclude:(id)a2 maxAge:(double)a3;
- (void)stopMonitoringEvents:(id)a0;
- (void)startNetworkDiscoveryOnPeer:(id)a0 configuration:(id)a1 reply:(id /* block */)a2;
- (void)__cancelAllRequestsAndReply:(id /* block */)a0;
- (void)queryDebugConfigurationForPeer:(id)a0 reply:(id /* block */)a1;
- (id)startPeerDiscoveryWithConfiguration:(id)a0 reply:(id /* block */)a1;
- (void)stopPeerDiscoveryWithUUID:(id)a0;
- (BOOL)setDebugConfiguration:(id)a0 peer:(id)a1 error:(out id *)a2;
- (id)queryStatusForPeer:(id)a0 error:(out id *)a1;
- (id)collectLogsDiagnosticMode:(id)a0 update:(id /* block */)a1 receipts:(out id *)a2 error:(out id *)a3;
- (id)queryDebugConfigurationForPeer:(id)a0 error:(out id *)a1;
- (BOOL)submitFaultEvent:(id)a0 error:(out id *)a1;
- (id)__collectJetsamFallbackLogsWithReason:(id)a0 compress:(BOOL)a1;
- (void)__log:(id)a0 timestamp:(BOOL)a1 reply:(id /* block */)a2;
- (void)__stopMonitoringEvents:(id)a0 reply:(id /* block */)a1;
- (void)cancelRequestWithUUID:(id)a0 peer:(id)a1 type:(long long)a2 reply:(id /* block */)a3;
- (id)init;
- (id)runWiFiSnifferWithTCPDumpOnChannels:(id)a0 duration:(double)a1 peer:(id)a2 reply:(id /* block */)a3;
- (id)runDiagnostics:(id)a0 configuration:(id)a1 update:(id /* block */)a2 reply:(id /* block */)a3;
- (BOOL)registerRemoteDiagnosticEventsForPeer:(id)a0 configuration:(id)a1 error:(out id *)a2;
- (id)__eventCallbackSignatureForEventID:(long long)a0 peer:(id)a1;
- (void)receivedPeerDiscoveryEvent:(id)a0;
- (id)runWiFiSnifferOnChannel:(id)a0 duration:(double)a1 peer:(id)a2 reply:(id /* block */)a3;
- (id)runWiFiSnifferOnChannels:(id)a0 duration:(double)a1 peer:(id)a2 reply:(id /* block */)a3;
- (void)listFilesFromPeer:(id)a0 remoteDirPath:(id)a1 reply:(id /* block */)a2;
- (id)localPeer;
- (void)log:(id)a0 timestamp:(BOOL)a1;
- (id)faultEventCacheForPeer:(id)a0 error:(out id *)a1;
- (BOOL)unregisterRemoteDiagnosticEventsForPeer:(id)a0 configuration:(id)a1 error:(out id *)a2;
- (void)startBrowsing;
- (id)runWiFiSnifferOnChannels:(id)a0 duration:(double)a1 peer:(id)a2 snifferErrors:(out id *)a3 error:(out id *)a4;
- (id)runWiFiSnifferOnChannel:(id)a0 duration:(double)a1 peer:(id)a2 error:(out id *)a3;
- (void)queryDatabaseForPeer:(id)a0 fetch:(id)a1 reply:(id /* block */)a2;
- (void)__logsCollectedWithTemporaryURL:(id)a0 outputURL:(id)a1 keepParent:(BOOL)a2 compress:(BOOL)a3 reply:(id /* block */)a4;
- (void)queryRegisteredDiagnosticsPeersWithReply:(id /* block */)a0;
- (id)startDiagnosticsModeWithConfiguration:(id)a0 reply:(id /* block */)a1;
- (id)runWiFiPerformanceLoggingWithConfiguration:(id)a0 reply:(id /* block */)a1;
- (void)cancelRequestWithUUID:(id)a0;
- (void)__purgeFilesInDirectory:(id)a0 matching:(id)a1 maxAge:(unsigned long long)a2 maxCount:(unsigned long long)a3;
- (id)collectLogs:(id)a0 configuration:(id)a1 update:(id /* block */)a2 reply:(id /* block */)a3;
- (id)stopDiagnosticsModeWithUUID:(id)a0 info:(id)a1 reply:(id /* block */)a2;
- (id)runDiagnosticsForPeer:(id)a0 diagnostics:(id)a1 configuration:(id)a2 reply:(id /* block */)a3;
- (void)stopBrowsing;
- (id)runDiagnostics:(id)a0 configuration:(id)a1 update:(id /* block */)a2 error:(out id *)a3;
- (void)startMonitoringEvents:(id)a0;
- (id)collectLogs:(id)a0 configuration:(id)a1 update:(id /* block */)a2 receipts:(out id *)a3 error:(out id *)a4;
- (void)queryStatusForPeer:(id)a0 reply:(id /* block */)a1;
- (id)__collectBusyFallbackLogsWithReason:(id)a0 compress:(BOOL)a1;
- (void)setDebugConfiguration:(id)a0 peer:(id)a1 reply:(id /* block */)a2;
- (void)cancelAllRequests;
- (id)runWiFiPerformanceLoggingWithConfiguration:(id)a0 error:(out id *)a1;
- (BOOL)startMonitoringFaultEventsForPeer:(id)a0 eventHandler:(id /* block */)a1 error:(out id *)a2;
- (void)__cancelRequestWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)__startMonitoringEvents:(id)a0 reply:(id /* block */)a1;

@end
