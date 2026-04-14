@interface _PFResultString : _PFAbstractString {
    id _parentObject;
}

+ (unsigned long long)bufferOffset;

- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDeallocating;
- (id)copy;
- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;

@end
