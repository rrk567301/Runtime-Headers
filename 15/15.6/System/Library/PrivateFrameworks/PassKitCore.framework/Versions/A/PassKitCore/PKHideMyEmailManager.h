@class AKPrivateEmailController;

@interface PKHideMyEmailManager : NSObject {
    AKPrivateEmailController *_controller;
    unsigned long long _isAvailable;
}

- (id)init;
- (void).cxx_destruct;
- (id)_primaryAccount;
- (char)_isHSA2Enabled;
- (id)_primaryAccountAltDSID;
- (void)bestDomainForAppIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)createHideMyEmailAddressWithKey:(id)a0 completion:(id /* block */)a1;
- (void)findHideMyEmailAddressWithKey:(id)a0 completion:(id /* block */)a1;
- (id)forwardingEmailForPrimaryAccount;
- (char)isAccountConfigured;
- (void)isAvailable:(id /* block */)a0;
- (void)registerHideMyEmailAddressWithKey:(id)a0 originIdentifier:(id)a1 merchantIdentifier:(id)a2 isWebPayment:(char)a3 completion:(id /* block */)a4;

@end
