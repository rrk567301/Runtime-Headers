@class CXInProcessProvider, NSString, NSURL;

@interface CXInProcessCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) CXInProcessProvider *provider;

- (void).cxx_destruct;
- (int)processIdentifier;
- (id)bundleIdentifier;
- (struct { unsigned int x0[8]; })auditToken;
- (id)bundleURL;
- (id)localizedName;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (id)vendorProtocolDelegate;
- (BOOL)isPermittedToUsePublicAPI;
- (BOOL)isPermittedToUsePrivateAPI;

@end
