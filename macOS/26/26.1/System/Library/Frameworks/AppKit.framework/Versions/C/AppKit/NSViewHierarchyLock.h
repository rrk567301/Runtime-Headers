@interface NSViewHierarchyLock : NSObject {
    void *_priv[0];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)unlock;
- (void)_invalidate;
- (id)retain;
- (BOOL)_isValid;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (void)lock;
- (id)description;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (id)init;
- (void)lockForReading;
- (void)lockForWriting;
- (BOOL)tryLockForWriting;
- (BOOL)_lockForWriting:(BOOL)a0;
- (void)unlockTopMostReader;

@end
