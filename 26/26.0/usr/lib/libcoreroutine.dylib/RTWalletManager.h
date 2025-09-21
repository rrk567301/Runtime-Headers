@class RTDefaultsManager;

@interface RTWalletManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (nonatomic) double maximumTransactionDistance;

- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_unregisterForNotifications;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_registerForNotifications;
- (void)_registerPaymentUseCallbacks;
- (void)_setup;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (id)init;
- (void)_registerPassUseCallbacks;
- (void)_unregisterPaymentUseCallbacks;
- (void)updateDoubleForKey:(id)a0 handler:(id /* block */)a1;
- (void)_unregisterPassUseCallbacks;
- (void).cxx_destruct;
- (void)onDefaultsUpdate:(id)a0;
- (id)initWithDefaultsManager:(id)a0;

@end
