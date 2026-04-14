@class SRDaemonNotification, NSString, NSDictionary, SRAuthorizationClient, SRDatastore, NSXPCConnection, NSDate;
@protocol SRSensorReaderDelegate;

@interface SRSensorReader : NSObject <SRAuthorizationClientDelegate, SRDaemonNotificationDelegate> {
    SRDaemonNotification *_daemonNotification;
    SRDatastore *_datastore;
    NSDictionary *_deviceDetails;
    double _serviceStartTime;
    double _earliestEligibleTime;
    _Atomic int _authState;
}

@property (copy) NSString *canonicalSensor;
@property (readonly, retain) SRDatastore *datastore;
@property (retain) NSDictionary *nextDatastoreFiles;
@property BOOL connectionDidInvalidate;
@property (retain) SRAuthorizationClient *authorizationClient;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy) NSString *bundleId;
@property (retain) NSDate *_lastModifiedAuthorizationTime;
@property (retain) NSString *requestedSensor;
@property (readonly, nonatomic) Class sampleClass;
@property (readonly, nonatomic) Class exportingSampleClass;
@property (nonatomic) BOOL bypassHoldingPeriod;
@property (readonly, nonatomic) double earliestEligibleTime;
@property (readonly, nonatomic) double serviceStartTime;
@property (readonly) long long authorizationStatus;
@property (readonly, copy) NSString *sensor;
@property (weak) id<SRSensorReaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)initialize;
+ (id)clientInterface;
+ (id)remoteInterface;
+ (void)_requestAuthorizationMigrationForSensors:(id)a0 completion:(id /* block */)a1;
+ (void)authorizationRequestStatusForBundle:(id)a0 sensors:(id)a1 completionHandler:(id /* block */)a2;
+ (id)connectionToDaemon;
+ (id /* block */)createExportDataForServices:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id /* block */)createExportDataWithCompletionHandler:(id /* block */)a0;
+ (void)requestAuthorizationForBundle:(id)a0 sensors:(id)a1 legacyPromptErrorBehavior:(BOOL)a2 withCompletionHandler:(id /* block */)a3;
+ (void)requestAuthorizationForBundle:(id)a0 sensors:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)requestAuthorizationForSensors:(id)a0 completion:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)fetch:(id)a0;
- (void)stopRecording;
- (void)setAuthorizationStatus:(long long)a0;
- (void)setupConnection;
- (void)startRecording;
- (BOOL)isAuthorized;
- (BOOL)fetchingRequest:(id)a0 didFetchResult:(id)a1;
- (id)initWithSensor:(id)a0;
- (void)_startRecordingWithSensorConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_updateAuthorizationStatusWithAuthorizedServices:(id)a0 deniedServices:(id)a1 dataCollectionEnabled:(BOOL)a2 onboardingCompleted:(BOOL)a3 lastModifiedTimes:(id)a4 forBundleIdentifier:(id)a5;
- (void)authorizedServicesDidChange:(id)a0 deniedServices:(id)a1 dataCollectionEnabled:(BOOL)a2 onboardingCompleted:(BOOL)a3 lastModifiedTimes:(id)a4 forBundleIdentifier:(id)a5;
- (void)continueFetchRequest:(id)a0 from:(double)a1 to:(double)a2 withDatastoreFiles:(id)a3 callback:(id /* block */)a4;
- (id /* block */)createExportDataWithCompletionHandler:(id /* block */)a0;
- (void)daemonNotificationDaemonDidStart:(id)a0;
- (void)didCompleteFetch:(id)a0;
- (void)didFetchDevices:(id)a0;
- (void)fetchDevices;
- (void)fetchDevices:(id /* block */)a0;
- (void)fetchDevicesDidFailWithError:(id)a0;
- (void)fetchDevicesWithRetryAttempt:(int)a0;
- (void)fetchReaderMetadata;
- (void)fetchSampleBytesFrom:(double)a0 to:(double)a1 inSegment:(id)a2 fetchRequest:(id)a3 retryAttempt:(long long)a4 sampleCallback:(id /* block */)a5;
- (void)fetchSampleBytesFrom:(double)a0 to:(double)a1 inSegment:(id)a2 fetchRequest:(id)a3 sampleCallback:(id /* block */)a4;
- (void)fetchingRequest:(id)a0 failedWithError:(id)a1;
- (id)initWithSensor:(id)a0 bundle:(id)a1;
- (id)initWithSensor:(id)a0 xpcConnection:(id)a1 daemonNotification:(id)a2 authorizationClient:(id)a3 bundleId:(id)a4;
- (void)resetDatastoreFiles:(id)a0;
- (void)sensorReaderDidStopRecording;
- (void)sensorReaderWillStartRecording;
- (void)setExportingSampleFromDescription:(id)a0;
- (void)setSampleClassFromDescription:(id)a0;
- (void)startRecordingFailedWithError:(id)a0;
- (void)startRecordingWithCompletionHandler:(id /* block */)a0;
- (void)stopRecordingFailedWithError:(id)a0;
- (void)stopRecordingWithCompletionHandler:(id /* block */)a0;

@end
