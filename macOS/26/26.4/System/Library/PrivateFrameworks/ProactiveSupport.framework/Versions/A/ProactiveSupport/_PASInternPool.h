@class _PASLock;

@interface _PASInternPool : _PASZonedObject {
    _PASLock *_lock;
    id /* block */ _copyWithZone;
}

- (id)intern:(id)a0;
- (void)clear;
- (BOOL)isEmpty;
- (id)initWithBehavior:(unsigned long long)a0 copyWithZone:(id /* block */)a1;
- (void).cxx_destruct;
- (id)internNoCopy:(id)a0;
- (BOOL)isInterned:(id)a0;
- (id)init;

@end
