@class _PASLock;

@interface _PASInternPool : _PASZonedObject {
    _PASLock *_lock;
    id /* block */ _copyWithZone;
}

- (id)init;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)clear;
- (id)intern:(id)a0;
- (id)initWithBehavior:(unsigned long long)a0 copyWithZone:(id /* block */)a1;
- (id)internNoCopy:(id)a0;
- (char)isInterned:(id)a0;

@end
