@class SUTelemetryEventFormatter, SUSharedPrefs, SUTelemetryReporter;

@interface SUTelemetryManager : NSObject

@property SUSharedPrefs *sharedPrefs;
@property SUTelemetryEventFormatter *formatter;
@property SUTelemetryReporter *reporter;

+ (id)sharedManager;

- (id)init;
- (void)reportEventName:(id)a0 telemetryServer:(long long)a1 reportableDictionary:(id)a2 className:(id)a3;
- (id)_formatReportableDictionary:(id)a0 className:(id)a1;
- (id)advancedPreferencesEvent;
- (id)downloadEvent;
- (id)initWithReporter:(id)a0;
- (id)installEvent;
- (id)preferencesEvent;
- (void)reportEvent:(id)a0;
- (void)reportPreferences;
- (id)scanEvent;

@end
