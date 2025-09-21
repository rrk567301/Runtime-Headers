@interface SAIntentGroupUnsupportedIntentResponse : SAIntentGroupIntentInvocationResponse

+ (id)unsupportedIntentResponse;
+ (id)unsupportedIntentResponseWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
