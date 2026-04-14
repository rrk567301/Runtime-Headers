@class RTDefaultsManager;

@interface RTWalletManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (nonatomic) double maximumTransactionDistance;

- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_registerForNotifications;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_unregisterForNotifications;
- (void)_setup;
- (void)_registerPassUseCallbacks;
- (void)onDefaultsUpdate:(id)a0;
- (id)initWithDefaultsManager:(id)a0;
- (void).cxx_destruct;
- (void)_unregisterPaymentUseCallbacks;
- (void)updateDoubleForKey:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void)_unregisterPassUseCallbacks;
- (void)_registerPaymentUseCallbacks;

@end
