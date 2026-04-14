@class CXInProcessProvider, NSString, NSURL;

@interface CXInProcessCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) CXInProcessProvider *provider;

- (id)bundleURL;
- (id)localizedName;
- (struct { unsigned int x0[8]; })auditToken;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 fallbackLocalizedName:(id)a2;
- (int)processIdentifier;
- (BOOL)isPermittedToUsePublicAPI;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (id)vendorProtocolDelegate;

@end
