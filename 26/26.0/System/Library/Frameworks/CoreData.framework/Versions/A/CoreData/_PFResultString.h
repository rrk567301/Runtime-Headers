@interface _PFResultString : _PFAbstractString {
    id _parentObject;
}

+ (unsigned long long)bufferOffset;

- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_tryRetain;
- (id)copy;
- (id)retain;
- (unsigned long long)retainCount;
- (oneway void)release;

@end
