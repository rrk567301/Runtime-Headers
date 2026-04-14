@protocol HMDIDSService;

@interface _HMDIDSProxyLinkPreferenceAssertion : HMFObject

@property (readonly, nonatomic) id<HMDIDSService> proxyService;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIDSProxyService:(id)a0;

@end
