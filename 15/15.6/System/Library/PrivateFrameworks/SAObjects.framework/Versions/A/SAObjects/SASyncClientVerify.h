@interface SASyncClientVerify : SABaseClientBoundCommand

+ (id)clientVerify;
+ (id)clientVerifyWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
