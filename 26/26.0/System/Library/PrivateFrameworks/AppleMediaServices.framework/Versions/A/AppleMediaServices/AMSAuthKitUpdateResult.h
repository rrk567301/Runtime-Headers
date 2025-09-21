@class NSDictionary, ACAccount;

@interface AMSAuthKitUpdateResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) ACAccount *account;
@property (readonly) NSDictionary *authenticationResults;
@property (readonly) unsigned long long credentialSource;

+ (id)_createUpdatedAccount:(id)a0 usingAuthenticationResults:(id)a1 options:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 authenticationResults:(id)a1 credentialSource:(unsigned long long)a2 options:(id)a3;
- (id)initWithAccount:(id)a0 authenticationResults:(id)a1 options:(id)a2;

@end
