@class _PASLock;

@interface BMStreamsAccessTracker : NSObject {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)logMissingEntitlementsForAccess:(id)a0;
- (void)_logMissingEntitlementsForAccess:(id)a0;
- (BOOL)checkHasSandboxAccess:(id)a0;
- (BOOL)_checkAccess:(id)a0;
- (BOOL)_sandboxCheck:(id)a0 path:(id)a1;

@end
