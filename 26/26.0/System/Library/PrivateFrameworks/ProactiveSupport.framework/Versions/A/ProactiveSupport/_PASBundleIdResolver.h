@class NSString, _PASLock;

@interface _PASBundleIdResolver : NSObject {
    NSString *_exePath;
    _PASLock *_lock;
}

- (void)_populateResultWithLockWitness:(id)a0;
- (id)bundleIdentifierOrProcessName:(BOOL *)a0;
- (id)initWithProcessIdentifier:(int)a0;
- (void).cxx_destruct;

@end
