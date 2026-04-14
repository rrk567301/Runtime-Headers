@interface __NSGlobalBlock : NSBlock

- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)retainCount;
- (id)copy;
- (oneway void)release;

@end
