@class NSString, _TtC26AuthenticationServicesCore22ASCPasswordSignInEvent, _TtC26AuthenticationServicesCore26ASCPasswordGenerationEvent;

@interface AuthenticationServicesCore.ASPasswordSignInEventCollector : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ bundleIdentifierToSignInEvents;
    void /* unknown type, empty encoding */ bundleIdentifierToGenerationEvents;
}

- (id)init;
- (void)didGenerateStrongPassword:(id)a0 passwordKind:(id)a1 serviceIdentifierType:(long long)a2 serviceIdentifier:(id)a3 providerApplicationBundleIdentifier:(id)a4 providerExtensionBundleIdentifier:(id)a5 hostApplicationBundleIdentifier:(id)a6;
- (void)didUseCredentialForUsername:(id)a0 password:(id)a1 serviceIdentifierType:(long long)a2 serviceIdentifier:(id)a3 providerApplicationBundleIdentifier:(id)a4 providerExtensionBundleIdentifier:(id)a5 hostApplicationBundleIdentifier:(id)a6 listenerEndpoint:(id)a7;
- (void)generationEventForStrongPassword:(NSString *)a0 serviceIdentifierType:(long long)a1 serviceIdentifier:(NSString *)a2 hostApplicationBundleIdentifier:(NSString *)a3 completionHandler:(void (^)(_TtC26AuthenticationServicesCore26ASCPasswordGenerationEvent *))a4;
- (void)signInEventForAutoFillOfUsername:(NSString *)a0 password:(NSString *)a1 serviceIdentifierType:(long long)a2 serviceIdentifier:(NSString *)a3 hostApplicationBundleIdentifier:(NSString *)a4 completionHandler:(void (^)(_TtC26AuthenticationServicesCore22ASCPasswordSignInEvent *))a5;
- (void)signInEventForRecentlyFilledCredentialWithUsername:(NSString *)a0 forAppWithBundleIdentifier:(NSString *)a1 completionHandler:(void (^)(_TtC26AuthenticationServicesCore22ASCPasswordSignInEvent *))a2;
- (void)signInEventForRecentlyFilledCredentialWithUsername:(NSString *)a0 forRelyingPartyIdentifier:(NSString *)a1 inAppWithBundleIdentifier:(NSString *)a2 completionHandler:(void (^)(_TtC26AuthenticationServicesCore22ASCPasswordSignInEvent *))a3;

@end
