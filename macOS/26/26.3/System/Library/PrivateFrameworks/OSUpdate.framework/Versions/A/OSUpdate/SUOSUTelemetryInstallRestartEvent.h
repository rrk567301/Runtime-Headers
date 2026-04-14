@class SUSharedPrefs, NSString, NSArray, NSError;

@interface SUOSUTelemetryInstallRestartEvent : SUOSUTelemetryEvent <SUTelemetryReportable>

@property (retain) SUSharedPrefs *sharedPrefs;
@property (retain) NSString *productTitle;
@property (retain) NSString *productID;
@property BOOL isSplat;
@property (retain) NSError *restartError;
@property (retain) NSArray *appsBlockingRestart;
@property BOOL isNotificationTriggered;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (id)init;
- (void).cxx_destruct;
- (id)createReportableDictionary;
- (id)initWithSharedPrefs:(id)a0;
- (id)_insertSplatTelemetry:(id)a0;
- (void)addTelemetryForNotificationTriggeredRestartWithProductKey:(id)a0 isSplat:(BOOL)a1;
- (void)addTelemetryWithProduct:(id)a0 restartError:(id)a1 appsBlockingRestart:(id)a2;

@end
