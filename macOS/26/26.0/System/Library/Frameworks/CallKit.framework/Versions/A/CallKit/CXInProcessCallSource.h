@class CXInProcessProvider, NSString, NSURL;

@interface CXInProcessCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) CXInProcessProvider *provider;

- (id)vendorProtocolDelegate;
- (id)bundleIdentifier;
- (id)bundleURL;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 fallbackLocalizedName:(id)a2;
- (int)processIdentifier;
- (BOOL)isPermittedToUsePublicAPI;
- (struct { unsigned int x0[8]; })auditToken;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (id)localizedName;
- (void).cxx_destruct;

@end
