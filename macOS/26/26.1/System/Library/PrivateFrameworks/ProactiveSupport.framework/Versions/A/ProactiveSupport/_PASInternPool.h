@class _PASLock;

@interface _PASInternPool : _PASZonedObject {
    _PASLock *_lock;
    id /* block */ _copyWithZone;
}

- (id)intern:(id)a0;
- (void)clear;
- (id)initWithBehavior:(unsigned long long)a0 copyWithZone:(id /* block */)a1;
- (id)internNoCopy:(id)a0;
- (void).cxx_destruct;
- (BOOL)isInterned:(id)a0;
- (BOOL)isEmpty;
- (id)init;

@end
