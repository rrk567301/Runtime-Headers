@class RadiosPreferences;

@interface ULAirplaneModeMonitor : ULEventMonitor <RadiosPreferencesDelegate>

@property (retain, nonatomic) RadiosPreferences *radiosPref;
@property (nonatomic) BOOL airplaneMode;

- (void)airplaneModeChanged;
- (void).cxx_destruct;
- (void)stopMonitoring:(id)a0;
- (void)startMonitoring:(id)a0;
- (BOOL)_checkAirplaneMode;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
