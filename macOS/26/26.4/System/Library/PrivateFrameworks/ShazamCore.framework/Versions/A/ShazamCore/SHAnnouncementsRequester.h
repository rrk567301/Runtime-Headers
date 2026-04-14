@class SHRemoteConfiguration;

@interface SHAnnouncementsRequester : NSObject

@property (readonly) SHRemoteConfiguration *remoteConfiguration;
@property (copy) id /* block */ storefrontProvider;

- (void).cxx_destruct;
- (id)endpointURLWithHost:(id)a0 path:(id)a1 languageCode:(id)a2 storefront:(id)a3;
- (id)initWithRemoteConfiguration:(id)a0;
- (id)initWithRemoteConfiguration:(id)a0 storefrontProvider:(id /* block */)a1;
- (void)trackPageEndpointWithCompletion:(id /* block */)a0;

@end
