@class VSAccount, VSOptional, VSAccountMetadata;

@interface VSIdentityProviderResponse : NSObject

@property (copy, nonatomic) VSAccountMetadata *accountMetadata;
@property (retain, nonatomic) VSAccount *account;
@property (nonatomic) BOOL didCreateAccount;
@property (retain, nonatomic) VSOptional *logoLoadOperation;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
