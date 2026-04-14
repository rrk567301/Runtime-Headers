@class NSString, NSXPCListenerEndpoint;

@interface AuthenticationServicesCore.ASCPasswordSignInEvent : NSObject {
    void /* function */ providerBundleIdentifier;
}

@property (nonatomic, readonly) NSString *providerBundleIdentifier;
@property (nonatomic, readonly) NSXPCListenerEndpoint *externalProviderListenerEndpoint;

- (id)init;
- (void).cxx_destruct;

@end
