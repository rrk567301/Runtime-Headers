@class RTDefaultsManager;

@interface RTWalletManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (nonatomic) double maximumTransactionDistance;

- (id)init;
- (void).cxx_destruct;
- (void)_setup;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (id)initWithDefaultsManager:(id)a0;
- (void)onDefaultsUpdate:(id)a0;
- (void)updateDoubleForKey:(id)a0 handler:(id /* block */)a1;
- (void)_unregisterPassUseCallbacks;
- (void)_unregisterPaymentUseCallbacks;
- (void)_registerPassUseCallbacks;
- (void)_registerPaymentUseCallbacks;

@end
