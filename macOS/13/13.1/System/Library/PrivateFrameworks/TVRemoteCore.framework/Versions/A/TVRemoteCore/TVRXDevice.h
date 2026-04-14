@class NSString, NSDictionary, NSSet, TVRXVoiceRecorder, TVRXKeyboardController;
@protocol _TVRXDeviceDelegate, _TVRCDeviceImpl;

@interface TVRXDevice : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *alternateIdentifiers;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSSet *supportedButtons;
@property (retain, nonatomic, getter=_impl, setter=_setImpl:) id<_TVRCDeviceImpl> impl;
@property (weak, nonatomic) id<_TVRXDeviceDelegate> delegate;
@property (readonly, nonatomic) long long connectionType;
@property (readonly, nonatomic) BOOL supportsTouchEvents;
@property (readonly, nonatomic) BOOL paired;
@property (readonly, nonatomic) long long connectionState;
@property (readonly, nonatomic) TVRXVoiceRecorder *voiceRecorder;
@property (readonly, nonatomic) TVRXKeyboardController *keyboardController;
@property (readonly, nonatomic) unsigned long long pairingCapability;
@property (readonly, nonatomic) long long attentionState;

- (id)description;
- (id)_init;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (id)allIdentifiers;
- (BOOL)containsIdentifier:(id)a0;
- (void)sendButtonEvent:(id)a0;
- (void)sendGameControllerEvent:(id)a0;
- (void)sendTouchEvent:(id)a0;
- (void)sendEvent:(id)a0 options:(id)a1 response:(id /* block */)a2;
- (void)_setDeviceName:(id)a0;
- (void)_setSupportedButtons:(id)a0;
- (void)_encounteredAuthenticationChallenge:(id)a0;
- (void)_connectionAttemptSucceeded;
- (void)_disconnected:(long long)a0 error:(id)a1;
- (void)_setActiveEndpoint;
- (BOOL)_authenticationIsSupported;
- (void)_applyButtonEventSideEffects:(id)a0;
- (void)_deviceUpdateAttentionState;
- (void)_setIdentifier:(id)a0 alternateIdentifiers:(id)a1 name:(id)a2 model:(id)a3 supportedButtons:(id)a4;

@end
