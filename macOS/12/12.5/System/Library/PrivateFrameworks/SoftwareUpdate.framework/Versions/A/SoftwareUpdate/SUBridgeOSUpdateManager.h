@class BridgeOSInstallController;

@interface SUBridgeOSUpdateManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _productLock;
}

@property (retain) BridgeOSInstallController *controller;
@property BOOL currentHardwareHasBridgeOS;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (BOOL)bridgeOSUpdateEnabled;
- (id)productWithAvailableUpdate:(id)a0 isUpdatePrepared:(BOOL *)a1;
- (BOOL)updateIsPrepared;
- (BOOL)applyUpdateForProduct:(id)a0 inForeground:(BOOL)a1 error:(id *)a2 progressHandler:(id /* block */)a3;
- (BOOL)cancelPendingUpdate;
- (id)_localPackageSpecifiersForProduct:(id)a0;
- (BOOL)_prepareProduct:(id)a0 error:(id *)a1 apply:(BOOL)a2 inForeground:(BOOL)a3 progressHandler:(id /* block */)a4;
- (BOOL)prepareUpdateForProduct:(id)a0 inForeground:(BOOL)a1 error:(id *)a2 progressHandler:(id /* block */)a3;
- (BOOL)updateIsPending;

@end
