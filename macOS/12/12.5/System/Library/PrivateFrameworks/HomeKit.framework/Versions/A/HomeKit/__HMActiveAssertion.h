@class HMHomeManager;

@interface __HMActiveAssertion : HMFAssertion

@property (readonly, weak) HMHomeManager *manager;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithHomeManager:(id)a0 reason:(id)a1;

@end
