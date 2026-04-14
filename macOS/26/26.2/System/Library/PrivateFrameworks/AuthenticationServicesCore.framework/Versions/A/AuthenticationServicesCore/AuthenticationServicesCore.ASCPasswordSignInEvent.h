@class NSString, NSXPCListenerEndpoint;

@interface AuthenticationServicesCore.ASCPasswordSignInEvent : NSObject {
    void /* function */ providerApplicationBundleIdentifier;
    void /* function */ providerExtensionBundleIdentifier;
}

@property (nonatomic, readonly) NSString *providerApplicationBundleIdentifier;
@property (nonatomic, readonly) NSString *providerExtensionBundleIdentifier;
@property (nonatomic, readonly) NSXPCListenerEndpoint *externalProviderListenerEndpoint;

- (void).cxx_destruct;
- (id)init;

@end
