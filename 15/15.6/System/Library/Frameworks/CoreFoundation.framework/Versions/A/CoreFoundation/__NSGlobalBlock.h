@interface __NSGlobalBlock : NSBlock

- (char)_isDeallocating;
- (oneway void)release;
- (char)_tryRetain;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)retainCount;

@end
