@class NSString;

@interface AuthenticationServicesCore.ASPasswordSignInEventCollector : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ bundleIdentifierToSignInEvents;
}

- (id)init;
- (void)didUseCredentialForUsername:(id)a0 forHost:(id)a1 fromProviderWithBundleIdentifier:(id)a2 inAppWithBundleIdentifier:(id)a3;
- (void)didUseCredentialForUsername:(id)a0 forURL:(id)a1 fromProviderWithBundleIdentifier:(id)a2 inBrowserWithBundleIdentifier:(id)a3;
- (void)providerForRecentlyFilledCredentialWithUsername:(NSString *)a0 forAppWithBundleIdentifier:(NSString *)a1 completionHandler:(void (^)(NSString *))a2;
- (void)providerForRecentlyFilledCredentialWithUsername:(NSString *)a0 forRelyingPartyIdentifier:(NSString *)a1 inAppWithBundleIdentifier:(NSString *)a2 completionHandler:(void (^)(NSString *))a3;

@end
