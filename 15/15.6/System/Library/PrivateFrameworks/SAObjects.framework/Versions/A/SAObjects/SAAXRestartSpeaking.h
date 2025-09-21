@interface SAAXRestartSpeaking : SADomainCommand

+ (id)restartSpeaking;
+ (id)restartSpeakingWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
