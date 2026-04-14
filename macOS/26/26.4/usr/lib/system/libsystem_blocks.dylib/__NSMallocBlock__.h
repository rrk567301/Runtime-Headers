@interface __NSMallocBlock__ : NSBlock

- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;

@end
