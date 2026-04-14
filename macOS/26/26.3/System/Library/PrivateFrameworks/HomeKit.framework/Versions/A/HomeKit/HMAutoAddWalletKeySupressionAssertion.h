@class NSUUID, HMHomeManager;

@interface HMAutoAddWalletKeySupressionAssertion : HMFAssertion

@property (readonly, weak) HMHomeManager *homeManager;
@property (readonly, copy) NSUUID *homeUUID;

- (void)invalidate;
- (void).cxx_destruct;
- (void)acquireWithCompletion:(id /* block */)a0;
- (id)initWithHomeManager:(id)a0 homeUUID:(id)a1;

@end
