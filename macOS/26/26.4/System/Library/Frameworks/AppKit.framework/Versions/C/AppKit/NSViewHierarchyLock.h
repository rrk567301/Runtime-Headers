@interface NSViewHierarchyLock : NSObject {
    void *_priv[0];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_isValid;
- (BOOL)_tryRetain;
- (void)unlock;
- (BOOL)_isDeallocating;
- (void)_invalidate;
- (id)retain;
- (id)init;
- (id)description;
- (oneway void)release;
- (void)lock;
- (void)dealloc;
- (unsigned long long)retainCount;
- (void)lockForReading;
- (void)lockForWriting;
- (BOOL)tryLockForWriting;
- (BOOL)_lockForWriting:(BOOL)a0;
- (void)unlockTopMostReader;

@end
