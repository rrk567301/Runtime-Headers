@class SCREventFactory;

@interface SCREventCapsLockDetector : NSObject

@property (nonatomic) double _repeatedKeyPressTimeout;
@property (nonatomic) char _isEchoLockKeysEnabled;
@property (nonatomic) char _isCapsLockSupportConfirmed;
@property (nonatomic) unsigned long long _unhandledVOEventCount;
@property (weak, nonatomic) SCREventFactory *_eventFactory;
@property (nonatomic) char keyState;
@property (nonatomic) char modifierState;
@property (nonatomic) long long voiceOverModifierSetting;
@property (readonly, nonatomic) char supportsCapsLockAsVoiceOverModifier;
@property (readonly, nonatomic) char voiceOverModifierState;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_announceCapsLockState:(long long)a0;
- (void)_handleKeyDown;
- (void)_handleKeyUpWithModifierState:(char)a0;
- (id)initWithEventFactory:(id)a0;
- (void)receivedKeyPressWithControlAndOption:(char)a0;
- (void)updateWithKeyState:(char)a0 modifierState:(char)a1;

@end
