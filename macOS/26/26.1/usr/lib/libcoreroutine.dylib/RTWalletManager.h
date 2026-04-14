@class RTDefaultsManager;

@interface RTWalletManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (nonatomic) double maximumTransactionDistance;

- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_unregisterPaymentUseCallbacks;
- (void)_setup;
- (id)initWithDefaultsManager:(id)a0;
- (void)_registerForNotifications;
- (void)_unregisterPassUseCallbacks;
- (void)_unregisterForNotifications;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_registerPassUseCallbacks;
- (void)_registerPaymentUseCallbacks;
- (void).cxx_destruct;
- (void)onDefaultsUpdate:(id)a0;
- (void)updateDoubleForKey:(id)a0 handler:(id /* block */)a1;
- (id)init;

@end
