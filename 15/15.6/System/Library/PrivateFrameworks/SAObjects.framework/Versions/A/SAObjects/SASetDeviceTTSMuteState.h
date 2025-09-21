@interface SASetDeviceTTSMuteState : SABaseClientBoundCommand

@property (nonatomic) char textToSpeechIsMuted;

+ (id)setDeviceTTSMuteState;
+ (id)setDeviceTTSMuteStateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
