@class CXInProcessProvider, NSString, NSURL;

@interface CXInProcessCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) CXInProcessProvider *provider;

- (id)vendorProtocolDelegate;
- (BOOL)isPermittedToUsePublicAPI;
- (BOOL)isPermittedToUsePrivateAPI;
- (struct { unsigned int x0[8]; })auditToken;
- (id)bundleURL;
- (int)processIdentifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 fallbackLocalizedName:(id)a2;
- (id)bundleIdentifier;
- (id)localizedName;

@end
