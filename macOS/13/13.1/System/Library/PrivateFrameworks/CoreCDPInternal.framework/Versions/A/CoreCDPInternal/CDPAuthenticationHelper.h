@interface CDPAuthenticationHelper : NSObject

+ (void)silentAuthenticationForPrimaryAccountWithCompletion:(id /* block */)a0;
+ (void)silentAuthenticationForPrimaryAccountWithClientAppName:(id)a0 clientAppBundleId:(id)a1 withCompletion:(id /* block */)a2;
+ (void)silentAuthenticationForContext:(id)a0 withCompletion:(id /* block */)a1;
+ (id)authController;
+ (void)_authWithContext:(id)a0 completion:(id /* block */)a1;
+ (id)_contextForPrimaryAccountSilentAuth;
+ (id)_authContextForContext:(id)a0;
+ (id)_contextForPrimaryAccount;

@end
