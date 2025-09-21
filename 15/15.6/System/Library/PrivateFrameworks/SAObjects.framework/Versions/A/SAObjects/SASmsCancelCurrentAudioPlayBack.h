@interface SASmsCancelCurrentAudioPlayBack : SABaseClientBoundCommand

+ (id)cancelCurrentAudioPlayBack;
+ (id)cancelCurrentAudioPlayBackWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
