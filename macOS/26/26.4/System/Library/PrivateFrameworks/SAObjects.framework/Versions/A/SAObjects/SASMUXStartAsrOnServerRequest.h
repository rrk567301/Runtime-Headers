@interface SASMUXStartAsrOnServerRequest : SASStartSpeechRequest

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
