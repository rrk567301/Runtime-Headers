@class HMFWiFiManager;

@interface __HMFWiFiAssertion : HMFAssertion

@property (readonly) HMFWiFiManager *manager;
@property (readonly) unsigned long long options;

- (BOOL)acquire:(id *)a0;
- (void)invalidate;
- (id)initWithOptions:(unsigned long long)a0 manager:(id)a1 reason:(id)a2;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
