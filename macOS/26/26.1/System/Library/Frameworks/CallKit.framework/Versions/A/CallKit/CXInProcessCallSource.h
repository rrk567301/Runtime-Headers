@class CXInProcessProvider, NSString, NSURL;

@interface CXInProcessCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) CXInProcessProvider *provider;

- (id)bundleURL;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isPermittedToUsePublicAPI;
- (struct { unsigned int x0[8]; })auditToken;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 fallbackLocalizedName:(id)a2;
- (id)localizedName;
- (id)vendorProtocolDelegate;
- (int)processIdentifier;
- (void).cxx_destruct;
- (id)bundleIdentifier;

@end
