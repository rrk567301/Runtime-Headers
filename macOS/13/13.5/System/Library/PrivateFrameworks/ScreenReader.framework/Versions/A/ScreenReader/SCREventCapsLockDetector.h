@class NSArray, SCREventFactory, SCRWorkspace, SCRCUserDefaults;

@interface SCREventCapsLockDetector : NSObject

@property (nonatomic, setter=_setEchoLockKeysEnabled:) BOOL _isEchoLockKeysEnabled;
@property (nonatomic, setter=_setCapsLockKeyPressed:) BOOL isCapsLockKeyPressed;
@property (nonatomic, setter=_setCapsLockModifierOn:) BOOL _isCapsLockModifierOn;
@property (nonatomic, setter=_setCapsLockKeyUpTime:) double _capsLockKeyUpTime;
@property (nonatomic, setter=_setUnhandledCapsLockEventCount:) unsigned long long _unhandledCapsLockEventCount;
@property (nonatomic, setter=_setCapsLockSupportConfirmed:) BOOL _isCapsLockSupportConfirmed;
@property (nonatomic, setter=_setUnhandledVOEventCount:) unsigned long long _unhandledVOEventCount;
@property (nonatomic, setter=_setUnhandledCapsLockKeyPressTime:) double _unhandledCapsLockKeyPressTime;
@property (weak, nonatomic, setter=_setEventFactoryDelegate:) SCREventFactory *_eventFactoryDelegate;
@property (weak, nonatomic, setter=_setWorkspaceDelegate:) SCRWorkspace *_workspaceDelegate;
@property (nonatomic, setter=_setCapsLockModifierChangeTime:) double _capsLockModifierChangeTime;
@property (nonatomic) unsigned long long _secureInputState;
@property (nonatomic, setter=_setHIDManager:) struct __IOHIDManager { } *_hidManager;
@property (copy, nonatomic, setter=_setDevices:) NSArray *_devices;
@property (nonatomic, setter=_setIOConnection:) unsigned int _ioConnection;
@property (readonly, nonatomic) SCRCUserDefaults *_userDefaults;
@property (nonatomic, setter=setVOModifierPreference:) long long voModifierPreference;
@property (readonly, nonatomic) BOOL isCapsLockKeyDetectionEnabled;
@property (nonatomic, setter=setVOModifierLockingEnabledInSecureInput:) BOOL isVOModifierLockingEnabledInSecureInput;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_announceCapsLockModifier:(long long)a0;
- (id)_createDeviceMatchingDictionaryWithUsagePage:(unsigned long long)a0 usage:(unsigned long long)a1;
- (void)_enableCapsLockKeyPressDetection;
- (void)_handleCapsLockKeyDown;
- (void)_handleCapsLockKeyUp;
- (unsigned int)_openIOConnection;
- (void)_setCapsLockModifierState:(BOOL)a0;
- (void)_updateCapsLockModifierInSecureInput:(BOOL)a0;
- (BOOL)capsLockModifierChanged:(BOOL)a0;
- (id)initWithEventFactory:(id)a0 workspace:(id)a1 userDefaults:(id)a2;
- (id)newScancodeMatchingDictionaryWithScancode:(unsigned long long)a0;
- (void)receivedKeyPressWithControlAndOption:(BOOL)a0;
- (void)systemCapsLockKeyPressedDown;
- (void)systemCapsLockModifierStateChanged;

@end
