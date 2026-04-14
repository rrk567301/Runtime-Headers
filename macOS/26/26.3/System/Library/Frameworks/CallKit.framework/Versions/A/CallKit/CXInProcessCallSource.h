@class CXInProcessProvider, NSString, NSURL;

@interface CXInProcessCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) CXInProcessProvider *provider;

- (id)bundleURL;
- (struct { unsigned int x0[8]; })auditToken;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 fallbackLocalizedName:(id)a2;
- (int)processIdentifier;
- (id)localizedName;
- (id)vendorProtocolDelegate;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (BOOL)isPermittedToUsePublicAPI;

@end
