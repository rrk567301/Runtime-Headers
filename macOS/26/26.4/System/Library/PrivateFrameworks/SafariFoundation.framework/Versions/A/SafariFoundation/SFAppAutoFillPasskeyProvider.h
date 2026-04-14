@class WBSAuthenticationServicesAgentProxy;

@interface SFAppAutoFillPasskeyProvider : NSObject {
    WBSAuthenticationServicesAgentProxy *_proxy;
}

- (void)getAvailablePasskeysForAppWithAuditToken:(struct { unsigned int x0[8]; })a0 withCompletionHandler:(id /* block */)a1;
- (void)userSelectedPasskey:(id)a0 authenticatedLAContext:(id)a1;
- (void)didFillCredentialForUsername:(id)a0 password:(id)a1 serviceIdentifierType:(long long)a2 serviceIdentifier:(id)a3 providerApplicationBundleIdentifier:(id)a4 providerExtensionBundleIdentifier:(id)a5 hostApplicationBundleIdentifier:(id)a6;
- (void).cxx_destruct;
- (void)getAvailablePasskeysForApplicationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)didFillCredentialForUsername:(id)a0 forHost:(id)a1 inAppWithBundleIdentifier:(id)a2;
- (void)userSelectedPasskeyWithUserHandle:(id)a0 authenticatedLAContext:(id)a1;
- (id)init;
- (void)getAvailablePasskeysForWebPageIdentifier:(id)a0 frameID:(id)a1 completionHandler:(id /* block */)a2;

@end
