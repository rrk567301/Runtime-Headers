@class NSXPCConnection;
@protocol STDiagnosticsServiceProtocol;

@interface STDiagnosticsServiceClient : NSObject

@property (copy, nonatomic) id /* block */ idsMessageCallback;
@property (copy, nonatomic) id /* block */ cloudKitMessageCallback;
@property (copy, nonatomic) id /* block */ genericMessageCallback;
@property (retain, nonatomic) id<STDiagnosticsServiceProtocol> remoteObject;
@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (void)registerCallbackForIDSMessages:(id /* block */)a0;
- (id)configurationVersionWithError:(id *)a0;
- (void)didReceiveCloudKitMessage:(id)a0;
- (void)didReceiveGenericMessage:(id)a0;
- (void)didReceiveIDSMessage:(id)a0;
- (void)killScreenTimeAgent:(id)a0 completionHandler:(id /* block */)a1;
- (id)localConfigurationVersionWithError:(id *)a0;
- (char)postNotificationWithContext:(id)a0 error:(id *)a1;
- (char)postWeeklyReportNotification:(id *)a0;
- (void)registerCallbackForCloudKitMessages:(id /* block */)a0;
- (void)registerCallbackForGenericMessages:(id /* block */)a0;
- (char)removeNotificationWithContext:(id)a0 error:(id *)a1;
- (char)repairBlueprintsWithError:(id *)a0;
- (char)sendBlueprintChangesWithError:(id *)a0;
- (char)sendBlueprintsWithError:(id *)a0;
- (char)sendCheckInRequestOnV2WithError:(id *)a0;
- (char)sendCheckInRequestWithError:(id *)a0;
- (char)sendSettingsChangesWithError:(id *)a0;
- (char)sendSettingsWithError:(id *)a0;
- (char)sendUserDeviceStateWithError:(id *)a0;
- (char)setLocalConfigurationVersion:(id)a0 error:(id *)a1;

@end
