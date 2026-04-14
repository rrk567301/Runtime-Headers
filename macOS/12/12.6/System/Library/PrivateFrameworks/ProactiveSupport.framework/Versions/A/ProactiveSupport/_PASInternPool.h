@class _PASLock;

@interface _PASInternPool : _PASZonedObject {
    _PASLock *_lock;
    id /* block */ _copyWithZone;
}

- (id)init;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithBehavior:(unsigned long long)a0 copyWithZone:(id /* block */)a1;
- (id)intern:(id)a0;
- (id)internNoCopy:(id)a0;
- (BOOL)isInterned:(id)a0;

@end
