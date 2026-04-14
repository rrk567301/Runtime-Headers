@class TVRCRPCompanionLinkClientWrapper, TVRCRapportRemoteTextInputKeyboardImpl, TVRXDevice, NSString, TVRXKeyboardController;

@interface TVRCRapportDeviceImpl : NSObject <_TVRCDeviceImpl, _TVRCCompanionLinkClientWrapperDelegate>

@property (weak, nonatomic) TVRXDevice *device;
@property (retain, nonatomic) TVRCRPCompanionLinkClientWrapper *deviceWrapper;
@property (retain, nonatomic) TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) TVRCRapportRemoteTextInputKeyboardImpl *keyboardImpl;
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
- (unsigned long long)pairingCapability;
- (BOOL)supportsTouchEvents;
- (id)alternateIdentifiers;
- (id)supportedButtons;
- (id)voiceRecorder;
- (void)sendTouchEvent:(id)a0;
- (void)sendEvent:(id)a0 options:(id)a1 response:(id /* block */)a2;
- (long long)deviceAttentionState;
- (void)connectedToDevice:(id)a0;
- (void)disconnectedFromDevice:(id)a0 error:(id)a1;
- (void)deviceEncounteredAuthenticationChallenge:(id)a0;
- (void)deviceUpdatedSupportedButtons:(id)a0;
- (void)deviceUpdatedAttentionState;
- (void)_setupKeyboardController;

@end
