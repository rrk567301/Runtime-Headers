@class RTDefaultsManager;

@interface RTWalletManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (nonatomic) double maximumTransactionDistance;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (id)initWithDefaultsManager:(id)a0;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_registerPassUseCallbacks;
- (id)init;
- (void)onDefaultsUpdate:(id)a0;
- (void)_setup;
- (void)_unregisterPaymentUseCallbacks;
- (void).cxx_destruct;
- (void)updateDoubleForKey:(id)a0 handler:(id /* block */)a1;
- (void)_unregisterPassUseCallbacks;
- (void)_registerPaymentUseCallbacks;

@end
