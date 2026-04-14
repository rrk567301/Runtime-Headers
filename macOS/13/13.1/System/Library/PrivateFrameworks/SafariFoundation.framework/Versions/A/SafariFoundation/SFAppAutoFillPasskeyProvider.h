@class WBSAuthenticationServicesAgentProxy;

@interface SFAppAutoFillPasskeyProvider : NSObject {
    WBSAuthenticationServicesAgentProxy *_proxy;
}

- (id)init;
- (void).cxx_destruct;
- (void)getAvailablePasskeysForAppWithAuditToken:(struct { unsigned int x0[8]; })a0 withCompletionHandler:(id /* block */)a1;
- (void)getAvailablePasskeysForApplicationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)userSelectedPasskeyWithUserHandle:(id)a0 authenticatedLAContext:(id)a1;
- (void)userSelectedPasskey:(id)a0 authenticatedLAContext:(id)a1;

@end
