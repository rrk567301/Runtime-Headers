@interface SCRBezelServicesManager : NSObject

@property (nonatomic, setter=_setConnectionID:) unsigned int _connectionID;
@property (nonatomic, setter=_setPreviousDisplayBrightness:) float _previousDisplayBrightness;
@property (nonatomic, setter=_setEchoDisplayBrightnessAttempts:) int _echoDisplayBrightnessAttempts;

- (void)dealloc;
- (id)init;
- (void)handleEvent:(struct __CGEvent { } *)a0;
- (void)_resetDisplayBrightness:(id)a0;
- (void)_muteSystemVolume;
- (void)_echoDisplayBrightnessChange:(id)a0;
- (id)initWithConnectionID:(unsigned int)a0;
- (void)_registerForSymbolicBezelHotKeys;
- (BOOL)isBezelServicesEvent:(struct __CGEvent { } *)a0;
- (int)_bootDisplay;
- (void)_echoKeyboardBacklightState:(BOOL)a0 orToggle:(BOOL)a1;
- (void)_echoKeyboardBrightnessChange:(id)a0 playErrorSound:(BOOL)a1;
- (void)_echoString:(id)a0;
- (float)displayBrightness;
- (int)_displayIDForBrightnessAdjustment;
- (void)_setDisplayBrightness:(float)a0;

@end
