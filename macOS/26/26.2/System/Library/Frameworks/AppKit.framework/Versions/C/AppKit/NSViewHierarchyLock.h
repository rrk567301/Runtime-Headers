@interface NSViewHierarchyLock : NSObject {
    void *_priv[0];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_isValid;
- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)unlock;
- (unsigned long long)retainCount;
- (id)description;
- (oneway void)release;
- (void)lock;
- (id)init;
- (void)_invalidate;
- (void)dealloc;
- (void)lockForReading;
- (void)lockForWriting;
- (BOOL)tryLockForWriting;
- (BOOL)_lockForWriting:(BOOL)a0;
- (void)unlockTopMostReader;

@end
