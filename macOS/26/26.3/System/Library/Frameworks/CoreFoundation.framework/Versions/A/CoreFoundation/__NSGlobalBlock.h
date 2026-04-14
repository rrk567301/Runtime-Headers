@interface __NSGlobalBlock : NSBlock

- (id)copy;
- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;

@end
