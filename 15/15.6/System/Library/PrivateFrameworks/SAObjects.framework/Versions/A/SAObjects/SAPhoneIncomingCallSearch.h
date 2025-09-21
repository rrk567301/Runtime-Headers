@interface SAPhoneIncomingCallSearch : SABaseClientBoundCommand

+ (id)incomingCallSearch;
+ (id)incomingCallSearchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
