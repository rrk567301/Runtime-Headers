@interface __NSMallocBlock__ : NSBlock

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)retain;
- (unsigned long long)retainCount;
- (oneway void)release;

@end
