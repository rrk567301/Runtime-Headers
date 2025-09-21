@class VSAccount, VSOptional, VSAccountMetadata;

@interface VSIdentityProviderResponse : NSObject

@property (copy, nonatomic) VSAccountMetadata *accountMetadata;
@property (retain, nonatomic) VSAccount *account;
@property (nonatomic) char didCreateAccount;
@property (retain, nonatomic) VSOptional *logoLoadOperation;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
