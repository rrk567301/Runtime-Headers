@interface _PFResultString : _PFAbstractString {
    id _parentObject;
}

+ (unsigned long long)bufferOffset;

- (id)copy;
- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;

@end
