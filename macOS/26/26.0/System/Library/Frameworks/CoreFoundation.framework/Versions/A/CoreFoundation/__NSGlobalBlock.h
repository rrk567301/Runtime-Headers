@interface __NSGlobalBlock : NSBlock

- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_tryRetain;
- (id)copy;
- (id)retain;
- (unsigned long long)retainCount;
- (oneway void)release;

@end
