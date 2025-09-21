@interface SCRBezelServicesManager : NSObject

@property (nonatomic, setter=_setConnectionID:) unsigned int _connectionID;
@property (nonatomic, setter=_setPreviousDisplayBrightness:) float _previousDisplayBrightness;
@property (nonatomic, setter=_setEchoDisplayBrightnessAttempts:) int _echoDisplayBrightnessAttempts;

- (void)dealloc;
- (id)init;
- (void)handleEvent:(struct __CGEvent { } *)a0;
- (int)_bootDisplay;
- (int)_displayIDForBrightnessAdjustment;
- (void)_echoDisplayBrightnessChange:(id)a0;
- (void)_echoKeyboardBacklightState:(char)a0 orToggle:(char)a1;
- (void)_echoKeyboardBrightnessChange:(id)a0 playErrorSound:(char)a1;
- (void)_echoString:(id)a0;
- (void)_muteSystemVolume;
- (void)_registerForSymbolicBezelHotKeys;
- (void)_resetDisplayBrightness:(id)a0;
- (void)_setDisplayBrightness:(float)a0;
- (float)displayBrightness;
- (id)initWithConnectionID:(unsigned int)a0;
- (char)isBezelServicesEvent:(struct __CGEvent { } *)a0;

@end
