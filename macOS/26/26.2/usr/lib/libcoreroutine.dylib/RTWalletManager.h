@class RTDefaultsManager;

@interface RTWalletManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (nonatomic) double maximumTransactionDistance;

- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_registerForNotifications;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_registerPassUseCallbacks;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_unregisterPassUseCallbacks;
- (void)_setup;
- (void)_registerPaymentUseCallbacks;
- (void)_unregisterForNotifications;
- (void).cxx_destruct;
- (void)onDefaultsUpdate:(id)a0;
- (id)initWithDefaultsManager:(id)a0;
- (void)_unregisterPaymentUseCallbacks;
- (id)init;
- (void)updateDoubleForKey:(id)a0 handler:(id /* block */)a1;

@end
