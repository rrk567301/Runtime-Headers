@class SAEmailEmail;

@interface SAEmailSend : SADomainCommand

@property (retain, nonatomic) SAEmailEmail *email;

+ (id)send;
+ (id)sendWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
