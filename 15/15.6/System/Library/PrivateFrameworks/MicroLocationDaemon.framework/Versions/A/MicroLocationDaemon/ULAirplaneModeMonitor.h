@class RadiosPreferences;

@interface ULAirplaneModeMonitor : ULEventMonitor <RadiosPreferencesDelegate>

@property (retain, nonatomic) RadiosPreferences *radiosPref;
@property (nonatomic) char airplaneMode;

- (void).cxx_destruct;
- (void)startMonitoring:(id)a0;
- (void)airplaneModeChanged;
- (void)stopMonitoring:(id)a0;
- (char)_checkAirplaneMode;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
