@interface NSViewHierarchyLock : NSObject {
    void *_priv[0];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)unlock;
- (BOOL)_isValid;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (void)lock;
- (void)_invalidate;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (id)description;
- (oneway void)release;
- (void)lockForReading;
- (void)lockForWriting;
- (BOOL)tryLockForWriting;
- (BOOL)_lockForWriting:(BOOL)a0;
- (void)unlockTopMostReader;

@end
