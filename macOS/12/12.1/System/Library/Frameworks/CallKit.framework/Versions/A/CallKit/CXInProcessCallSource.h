@class CXInProcessProvider, NSString, NSURL;

@interface CXInProcessCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) CXInProcessProvider *provider;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)localizedName;
- (struct { unsigned int x0[8]; })auditToken;
- (int)processIdentifier;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (id)vendorProtocolDelegate;
- (BOOL)isPermittedToUsePublicAPI;
- (BOOL)isPermittedToUsePrivateAPI;

@end
