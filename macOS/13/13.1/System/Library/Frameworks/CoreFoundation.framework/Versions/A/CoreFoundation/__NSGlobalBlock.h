@interface __NSGlobalBlock : NSBlock

- (id)retain;
- (oneway void)release;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
