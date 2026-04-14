@interface __NSMallocBlock : NSBlock

- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (oneway void)release;

@end
