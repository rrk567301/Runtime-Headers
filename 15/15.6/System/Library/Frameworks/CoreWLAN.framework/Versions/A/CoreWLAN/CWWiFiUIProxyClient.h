@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CWWiFiUIProxyClient : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    char _isMonitoringEvents;
}

@property (nonatomic) id delegate;

+ (id)sharedWiFiUIProxyClient;

- (void)dealloc;
- (id)init;
- (void)stopMonitoringEvents;
- (id)queryDiagnosticsAndReturnError:(out id *)a0;
- (void)showErrorUIWithScanResult:(id)a0 uuid:(id)a1;
- (void)__startMonitoringEventsAndReply:(id /* block */)a0;
- (char)addCloudWiFiProfile:(id)a0 authorization:(id)a1 error:(out id *)a2;
- (id)createDiagnosticsReportWithAuthorization:(id)a0 error:(out id *)a1;
- (char)createIBSSNetworkWithConfiguration:(id)a0 authorization:(id)a1 error:(out id *)a2;
- (char)deleteUserWiFiKeychainPasswordWithSSID:(id)a0 error:(out id *)a1;
- (void)didCompleteDiagnostics:(id)a0;
- (void)didFindScanResults:(id)a0;
- (void)didReceiveSharedPassword:(id)a0 uuid:(id)a1;
- (void)didUpdateUIState:(unsigned long long)a0 previous:(unsigned long long)a1;
- (void)dismissUIWithUUID:(id)a0;
- (void)displayWiFiRecommendationItem:(id)a0;
- (void)displayWiFiRecommendationUI;
- (char)joinScanResult:(id)a0 configuration:(id)a1 authorization:(id)a2 error:(out id *)a3;
- (id)queryCachedScanResultsAndReturnError:(out id *)a0;
- (char)queryIsWiFiCloudSyncEngineRunningAndReturnError:(id *)a0;
- (id)queryUserWiFiKeychainPasswordWithSSID:(id)a0 error:(out id *)a1;
- (char)queryWiFiDebugLoggingEnabled;
- (unsigned long long)queryWiFiUIState;
- (char)removeCloudWiFiProfileWithSSID:(id)a0 authorization:(id)a1 error:(out id *)a2;
- (char)setUserWiFiKeychainPasswordWithSSID:(id)a0 password:(id)a1 error:(out id *)a2;
- (char)setWiFiDebugLoggingEnabled:(char)a0 authorization:(id)a1 error:(out id *)a2;
- (void)showInfoUIWithTitle:(id)a0 description:(id)a1 uuid:(id)a2;
- (void)showJoinUIWithScanResult:(id)a0 previousError:(id)a1 previousPassword:(id)a2 supportsWiFiPasswordSharing:(char)a3 remember:(char)a4 uuid:(id)a5;
- (void)showLimitedNetworkOptionUIForScanResult:(id)a0 candidates:(id)a1 uuid:(id)a2;
- (void)showLockdownModeUIWithScanResult:(id)a0 uuid:(id)a1;
- (void)showSecurityMismatchUIWithScanResult:(id)a0 uuid:(id)a1;
- (void)showWPSUIWithScanResult:(id)a0 pin:(id)a1 uuid:(id)a2;
- (void)startMonitoringEvents;
- (void)startScanning;
- (void)stopScanning;
- (char)synchronizeCloudWiFiProfilesAndReturnError:(id *)a0;
- (char)updateCloudWiFiProfile:(id)a0 authorization:(id)a1 error:(out id *)a2;
- (void)updatedWiFiConfiguration:(id)a0;
- (void)userDidConfirmJoin:(char)a0 uuid:(id)a1;
- (void)userDidDismissJoinUIWithUUID:(id)a0;
- (void)userDidJoinWithConfiguration:(id)a0 uuid:(id)a1;

@end
