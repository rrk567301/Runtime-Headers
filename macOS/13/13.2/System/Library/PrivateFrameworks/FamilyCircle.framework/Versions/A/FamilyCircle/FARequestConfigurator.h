@class NSData, AIDAServiceOwnersManager, AKAppleIDServerResourceLoadDelegate, AAGrandSlamSigner, ACAccount, AKAppleIDSigningController, AKAppleIDAuthenticationContext, ACAccountStore;

@interface FARequestConfigurator : NSObject {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    ACAccount *_grandSlamAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    AAGrandSlamSigner *_familyGrandSlamSigner;
    AIDAServiceOwnersManager *_serviceOwnersManager;
    AKAppleIDSigningController *_akSigningController;
    AKAppleIDServerResourceLoadDelegate *_resourceLoadDelegate;
    NSData *_pushToken;
}

@property (nonatomic) BOOL attachSetupHeader;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authContext;

- (void).cxx_destruct;
- (id)_account;
- (id)initWithAccount:(id)a0;
- (id)_accountStore;
- (id)_authContext;
- (void)addFresnoHeadersToRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)addFresnoHeadersToRequest:(id)a0;
- (void)pushTokenWithCompletion:(id /* block */)a0;
- (void)addFresnoPayloadToRequest:(id)a0 additionalPayload:(id)a1;
- (void)addPayload:(id)a0 toRequest:(id)a1;
- (void)renewCredentialsWithCompletion:(id /* block */)a0;
- (id)_grandSlamAccount;
- (id)_grandSlamSigner;
- (id)_familyGrandSlamSigner;
- (id)_akSigningController;
- (void)_resourceLoadDelegate:(id /* block */)a0;
- (id)_fresnoPayloadWithAdditionalPayload:(id)a0;
- (void)_addAccountForServiceType:(id)a0 toPayload:(id)a1 forKey:(id)a2;
- (id)_familyTokenForGrandSlamAccount:(id)a0 andTokenID:(id)a1;
- (id)_serviceOwnersManager;

@end
