@class NSDictionary;

@interface CTXPCCreateEncryptedIdentityResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSDictionary *identities;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithIdentities:(id)a0;

@end
