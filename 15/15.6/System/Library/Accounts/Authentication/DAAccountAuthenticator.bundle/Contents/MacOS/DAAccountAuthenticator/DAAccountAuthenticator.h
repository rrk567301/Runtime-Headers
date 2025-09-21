@class NSString, NSMutableDictionary;

@interface DAAccountAuthenticator : NSObject <ACDAccountAuthenticationPlugin, DAValidityCheckConsumer> {
    NSMutableDictionary *_accountIDToVerificationHandler;
    NSMutableDictionary *_accountIDToAccount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)isPushSupportedForAccount:(id)a0;
- (void)account:(id)a0 isValid:(char)a1 validationError:(id)a2;
- (id)credentialForAccount:(id)a0 client:(id)a1 store:(id)a2 error:(id *)a3;
- (void)renewCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)verifyCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)backgroundThread;
- (id)appIdsForPromptingForDAAccount:(id)a0;
- (void)_acceptCertificatesIfNeededForOptions:(id)a0;
- (void)_handlePasswordNotification:(struct __CFUserNotification { } *)a0 response:(unsigned long long)a1 callback:(id /* block */)a2 account:(id)a3 accountStore:(id)a4 resetAuthenticatedOnAlertFailure:(char)a5;
- (char)_isExchangeOAuthAccount:(id)a0;
- (char)_isTransientNetworkError:(id)a0;
- (char)_needToAcceptCertificatesForOptions:(id)a0;
- (void)_renewCredentialsForAccount:(id)a0 accountStore:(id)a1 completion:(id /* block */)a2;
- (char)_shouldUpgradeAccountToOAuth2:(id)a0 withCredential:(id)a1;
- (void)invokeAndReleaseBlock:(id /* block */)a0;
- (void)parkBackgroundThread:(id)a0;
- (void)showUserAlertWithTitle:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 otherButtonTitle:(id)a3 textFieldTitle:(id)a4 keyboardType:(id)a5 withCompletionBlock:(id /* block */)a6;

@end
