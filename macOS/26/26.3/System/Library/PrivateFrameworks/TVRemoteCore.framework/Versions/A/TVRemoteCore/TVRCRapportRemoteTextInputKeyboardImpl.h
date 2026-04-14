@class RTIInputSystemDataPayload, RTIInputSystemSourceSession, NSString, TVRXKeyboardController, TVRCRPCompanionLinkClientWrapper, TVRCKeyboardAttributes;

@interface TVRCRapportRemoteTextInputKeyboardImpl : NSObject <RTIInputSystemSessionDelegate, RTIInputSystemPayloadDelegate, TVRXKeyboardImpl>

@property (nonatomic) BOOL editing;
@property (retain, nonatomic) RTIInputSystemSourceSession *currentSession;
@property (retain, nonatomic) RTIInputSystemDataPayload *cachedInputSystemDataPayload;
@property (retain, nonatomic) TVRCKeyboardAttributes *currentAttributes;
@property (copy, nonatomic) NSString *cachedText;
@property (weak, nonatomic) TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) TVRCRPCompanionLinkClientWrapper *companionLinkWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEditing;
- (id)attributes;
- (id)text;
- (void).cxx_destruct;
- (void)inputSessionDidDie:(id)a0;
- (void)setText:(id)a0;
- (void)handleTextActionPayload:(id)a0;
- (void)inputSessionDidBegin:(id)a0;
- (void)inputSessionDidEnd:(id)a0;
- (void)_receivedInputSourceSession:(id)a0;
- (void)_stopObservingTelevisionEditingSession;
- (void)sendReturnKey;
- (void)setTextActionPayload:(id)a0;

@end
