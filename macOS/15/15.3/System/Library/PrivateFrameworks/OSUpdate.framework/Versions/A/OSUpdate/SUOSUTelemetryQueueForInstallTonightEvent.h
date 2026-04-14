@class SUOSUProduct, SUSharedPrefs, NSString;

@interface SUOSUTelemetryQueueForInstallTonightEvent : SUOSUTelemetryEvent <SUTelemetryReportable>

@property (retain) SUOSUProduct *product;
@property unsigned long long reason;
@property (retain) SUSharedPrefs *sharedPrefs;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (void).cxx_destruct;
- (id)createReportableDictionary;
- (id)_telemetryStringForReason:(unsigned long long)a0;
- (id)initWithProduct:(id)a0 reason:(unsigned long long)a1 sharedPrefs:(id)a2;

@end
