@class _TVRCRPCompanionLinkClientWrapper, _TVRCRapportRemoteTextInputKeyboardImpl, _TVRXKeyboardController, NSString, _TVRXDevice;

@interface _TVRCRapportDeviceImpl : NSObject <_TVRCCompanionLinkClientWrapperDelegate, _TVRCDeviceImpl>

@property (retain, nonatomic) _TVRCRPCompanionLinkClientWrapper *deviceWrapper;
@property (retain, nonatomic) _TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) _TVRCRapportRemoteTextInputKeyboardImpl *keyboardImpl;
@property (weak, nonatomic) _TVRXDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implWithDevice:(id)a0;

- (id)name;
- (void).cxx_destruct;
- (id)identifier;
- (long long)connectionType;
- (id)initWithDevice:(id)a0;
- (void)disconnect;
- (void)connect;
- (id)model;
- (BOOL)isPaired;
- (void)sendButtonEvent:(id)a0;
- (void)sendGameControllerEvent:(id)a0;
- (void)setAuthenticationSupported:(BOOL)a0;
- (id)alternateIdentifiers;
- (id)supportedButtons;
- (unsigned long long)pairingCapability;
- (BOOL)supportsTouchEvents;
- (id)voiceRecorder;
- (void)sendTouchEvent:(id)a0;
- (void)sendEvent:(id)a0 options:(id)a1 response:(id /* block */)a2;
- (void)_setupKeyboardController;
- (void)deviceEncounteredAuthenticationChallenge:(id)a0;
- (void)disconnectedFromDevice:(id)a0 error:(id)a1;
- (void)deviceUpdatedSupportedButtons:(id)a0;
- (void)connectedToDevice:(id)a0;

@end
