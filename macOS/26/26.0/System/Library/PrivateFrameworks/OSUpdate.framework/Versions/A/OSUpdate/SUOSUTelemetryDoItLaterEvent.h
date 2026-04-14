@class SUSharedPrefs, NSArray, NSString, NSError;

@interface SUOSUTelemetryDoItLaterEvent : SUOSUTelemetryEvent <SUTelemetryReportable>

@property (retain) SUSharedPrefs *sharedPrefs;
@property (retain) NSError *eventError;
@property long long stashState;
@property BOOL collectCredentialHarvestingInfo;
@property (retain) NSArray *appsBlockingRestart;
@property (retain) NSArray *unresponsiveApps;
@property (retain) NSArray *appsLikelyToBlock;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (id)init;
- (void).cxx_destruct;
- (id)createReportableDictionary;
- (id)initWithSharedPrefs:(id)a0;
- (BOOL)_shouldReportExtendedAppBlockingTelemetry;
- (void)addCredentialHarvestingInfoWithStashState:(long long)a0;
- (void)addEventTelemetryWithError:(id)a0;

@end
