@interface SASSpeechServerEndpointIdentified : SABaseClientBoundCommand

+ (id)speechServerEndpointIdentified;
+ (id)speechServerEndpointIdentifiedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
