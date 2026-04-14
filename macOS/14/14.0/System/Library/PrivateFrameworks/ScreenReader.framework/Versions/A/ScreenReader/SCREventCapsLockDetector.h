@class NSArray, SCREventFactory;

@interface SCREventCapsLockDetector : NSObject

@property (nonatomic) double _repeatedKeyPressTimeout;
@property (nonatomic) double _shortKeyHoldDurationTimeout;
@property (nonatomic) BOOL _secureInputSystemCapsLockState;
@property (nonatomic) BOOL _isEchoLockKeysEnabled;
@property (nonatomic) BOOL _isCapsLockSupportConfirmed;
@property (nonatomic) unsigned long long _unhandledVOEventCount;
@property (nonatomic) struct __IOHIDManager { } *_hidManager;
@property (retain, nonatomic) NSArray *_devices;
@property (nonatomic) unsigned int _ioConnection;
@property (weak, nonatomic) SCREventFactory *_eventFactory;
@property (nonatomic) BOOL keyState;
@property (nonatomic) BOOL capsLockState;
@property (nonatomic) long long voiceOverModifierSetting;
@property (readonly, nonatomic) BOOL supportsCapsLockAsVoiceOverModifier;
@property (readonly, nonatomic) BOOL voiceOverModifierState;
@property (nonatomic) BOOL inSecureInput;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_announceCapsLockState:(long long)a0;
- (id)_createDeviceMatchingDictionaryWithUsagePage:(unsigned long long)a0 usage:(unsigned long long)a1;
- (void)_handleKeyDown;
- (void)_handleKeyUp;
- (unsigned int)_openIOConnection;
- (void)_registerForHIDCapsLockKeyEvents;
- (void)_unregisterForHIDCapsLockKeyEvents;
- (void)_updateHIDCapsLockState:(BOOL)a0;
- (id)initWithEventFactory:(id)a0;
- (id)newScancodeMatchingDictionaryWithScancode:(unsigned long long)a0;
- (void)receivedKeyPressWithControlAndOption:(BOOL)a0;
- (void)updateInSecureInputWithCapsLockState:(BOOL)a0;

@end
