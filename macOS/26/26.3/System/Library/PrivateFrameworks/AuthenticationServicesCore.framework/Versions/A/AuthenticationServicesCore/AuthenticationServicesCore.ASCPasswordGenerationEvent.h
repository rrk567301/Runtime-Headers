@class NSString;

@interface AuthenticationServicesCore.ASCPasswordGenerationEvent : NSObject {
    void /* function */ providerApplicationBundleIdentifier;
    void /* function */ providerExtensionBundleIdentifier;
    void /* function */ passwordKind;
}

@property (nonatomic, readonly) NSString *providerApplicationBundleIdentifier;
@property (nonatomic, readonly) NSString *providerExtensionBundleIdentifier;
@property (nonatomic, readonly) NSString *passwordKind;

- (id)init;
- (void).cxx_destruct;

@end
