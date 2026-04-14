@interface SATTSGetSpeechSynthesisVolume : SABaseClientBoundCommand

+ (id)getSpeechSynthesisVolume;
+ (id)getSpeechSynthesisVolumeWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
