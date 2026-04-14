@class NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface CBBespokeModeManager : NSObject {
    NSMutableDictionary *_modes;
    long long _currentModeType;
    long long _previousModeType;
    NSObject<OS_os_log> *_logHandle;
    float _rampTimeGameModeEntry;
    float _rampTimeGameModeExit;
    float _activeTransitionRampTime;
}

- (id)currentMode;
- (id)modeToString:(long long)a0;
- (void)dealloc;
- (void)loadCurrentModeAABToWorkingAAB:(id)a0;
- (id)registeredModes;
- (long long)currentModeType;
- (void)setCustomRampTimeGameModeEntry:(float)a0;
- (id)currentAAB;
- (BOOL)executeTransitionToMode:(long long)a0;
- (float)getModeTransitionRampTime;
- (void)handleCurveReset;
- (void)handleCurveResetToGoodCurve;
- (BOOL)handleGameModeTransitionNotification:(unsigned long long)a0 withWorkingAAB:(id)a1;
- (id)initWithAAB:(id)a0 andInitialMode:(long long)a1;
- (void)initializeRampTimesFromPreferences;
- (id)modeOfType:(long long)a0;
- (id)previousMode;
- (long long)previousModeType;
- (void)registerDefaultModesWithAAB:(id)a0;
- (void)registerMode:(id)a0;
- (id)registeredModeTypes;
- (BOOL)saveWorkingAAB:(id)a0 toMode:(long long)a1;
- (BOOL)saveWorkingAABToCurrentMode:(id)a0;
- (void)setCustomRampTimeGameModeExit:(float)a0;
- (void)transitionToMode:(long long)a0 withWorkingAAB:(id)a1;

@end
