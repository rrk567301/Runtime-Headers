@class _PASLock;

@interface _PASInternPool : _PASZonedObject {
    _PASLock *_lock;
    id /* block */ _copyWithZone;
}

- (void)clear;
- (id)internNoCopy:(id)a0;
- (void).cxx_destruct;
- (id)initWithBehavior:(unsigned long long)a0 copyWithZone:(id /* block */)a1;
- (BOOL)isInterned:(id)a0;
- (BOOL)isEmpty;
- (id)intern:(id)a0;
- (id)init;

@end
