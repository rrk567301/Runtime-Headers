@class AKAccountManager;

@interface AAPrivacyConsentManager : NSObject

@property (retain, nonatomic) AKAccountManager *accountManager;

- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0;
- (id)init;
- (id)createAuthenticationController;
- (id)createConsentConfigurationWithVersion:(id)a0;
- (void)getConsentStatusForAccount:(id)a0 completion:(id /* block */)a1;
- (long long)getCurrentConsentVersionWithError:(id *)a0;
- (long long)getStoredConsentVersionForAccount:(id)a0;
- (void)performConsentUpdateWithController:(id)a0 configInfo:(id)a1 altDSID:(id)a2 completion:(id /* block */)a3;
- (void)recordConsentAcknowledgmentForAccount:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldPresentConsentForAccount:(id)a0 currentVersion:(long long *)a1 storedVersion:(long long *)a2 error:(id *)a3;
- (void)shouldPresentConsentUIForAccount:(id)a0 completion:(id /* block */)a1;
- (void)updateIdMSConsentVersion:(id)a0 forAccount:(id)a1 completion:(id /* block */)a2;
- (void)updateLocalConsentVersion:(long long)a0 forAccount:(id)a1;

@end
