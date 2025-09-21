@class HMFWiFiManager;

@interface __HMFWiFiAssertion : HMFAssertion

@property (readonly) HMFWiFiManager *manager;
@property (readonly) unsigned long long options;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)invalidate;
- (id)initWithOptions:(unsigned long long)a0 manager:(id)a1 reason:(id)a2;
- (char)acquire:(id *)a0;

@end
