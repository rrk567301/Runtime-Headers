@class SUTelemetryEventFormatter, SUSharedPrefs, SUTelemetryReporter;

@interface SUTelemetryManager : NSObject

@property SUSharedPrefs *sharedPrefs;
@property SUTelemetryEventFormatter *formatter;
@property SUTelemetryReporter *reporter;

+ (id)sharedManager;

- (id)init;
- (id)advancedPreferencesEvent;
- (id)downloadEvent;
- (id)initWithReporter:(id)a0;
- (id)installEvent;
- (id)preferencesEvent;
- (void)reportEvent:(id)a0;
- (void)reportPreferences;
- (id)reportableDictionaryForEvent:(id)a0;
- (id)scanEvent;

@end
