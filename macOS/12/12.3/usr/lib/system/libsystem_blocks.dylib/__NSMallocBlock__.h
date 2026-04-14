@interface __NSMallocBlock__ : NSBlock

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;

@end
