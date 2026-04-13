@interface NSViewHierarchyLock : NSObject {
    void *_priv[0];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)lock;
- (void)unlock;
- (void)_invalidate;
- (void)lockForReading;
- (void)lockForWriting;
- (BOOL)tryLockForWriting;
- (BOOL)_isValid;
- (BOOL)_lockForWriting:(BOOL)a0;
- (void)unlockTopMostReader;

@end
