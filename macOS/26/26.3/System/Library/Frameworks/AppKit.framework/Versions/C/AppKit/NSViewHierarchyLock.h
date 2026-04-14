@interface NSViewHierarchyLock : NSObject {
    void *_priv[0];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_isValid;
- (unsigned long long)retainCount;
- (id)retain;
- (id)description;
- (id)init;
- (BOOL)_tryRetain;
- (void)unlock;
- (BOOL)_isDeallocating;
- (void)lock;
- (void)dealloc;
- (void)_invalidate;
- (oneway void)release;
- (void)lockForReading;
- (void)lockForWriting;
- (BOOL)tryLockForWriting;
- (BOOL)_lockForWriting:(BOOL)a0;
- (void)unlockTopMostReader;

@end
