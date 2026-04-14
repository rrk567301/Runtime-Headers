@class NSString, _PASLock;

@interface _PASBundleIdResolver : NSObject {
    NSString *_exePath;
    _PASLock *_lock;
}

- (void).cxx_destruct;
- (void)_populateResultWithLockWitness:(id)a0;
- (id)bundleIdentifierOrProcessName:(BOOL *)a0;
- (id)initWithProcessIdentifier:(int)a0;

@end
