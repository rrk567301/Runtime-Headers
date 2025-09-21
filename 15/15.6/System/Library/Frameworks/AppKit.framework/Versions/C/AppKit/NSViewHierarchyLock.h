@interface NSViewHierarchyLock : NSObject {
    void *_priv[0];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (char)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (char)_tryRetain;
- (id)description;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (void)lock;
- (void)unlock;
- (void)lockForReading;
- (void)lockForWriting;
- (char)tryLockForWriting;
- (void)_invalidate;
- (char)_isValid;
- (char)_lockForWriting:(char)a0;
- (void)unlockTopMostReader;

@end
