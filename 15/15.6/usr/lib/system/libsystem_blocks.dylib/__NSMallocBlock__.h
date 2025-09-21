@interface __NSMallocBlock__ : NSBlock

- (char)_isDeallocating;
- (oneway void)release;
- (char)_tryRetain;
- (id)retain;
- (unsigned long long)retainCount;

@end
