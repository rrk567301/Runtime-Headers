@class NSDictionary, ACAccount;

@interface AMSAuthKitUpdateResult : NSObject

@property (readonly) ACAccount *account;
@property (readonly) NSDictionary *authenticationResults;
@property (readonly) unsigned long long credentialSource;

+ (id)_createUpdatedAccount:(id)a0 usingAuthenticationResults:(id)a1 options:(id)a2;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 authenticationResults:(id)a1 options:(id)a2;
- (id)initWithAccount:(id)a0 authenticationResults:(id)a1 credentialSource:(unsigned long long)a2 options:(id)a3;

@end
