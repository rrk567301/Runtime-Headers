@interface _PFResultString : _PFAbstractString {
    id _parentObject;
}

+ (unsigned long long)bufferOffset;

- (char)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (char)_tryRetain;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)retainCount;

@end
