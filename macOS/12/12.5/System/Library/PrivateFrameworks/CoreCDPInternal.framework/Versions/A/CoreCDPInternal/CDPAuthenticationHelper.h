@interface CDPAuthenticationHelper : NSObject

+ (void)silentAuthenticationForContext:(id)a0 withCompletion:(id /* block */)a1;
+ (id)_contextForPrimaryAccountSilentAuth;
+ (void)_authWithContext:(id)a0 completion:(id /* block */)a1;
+ (id)_authContextForContext:(id)a0;
+ (id)_contextForPrimaryAccount;
+ (void)silentAuthenticationForPrimaryAccountWithCompletion:(id /* block */)a0;

@end
