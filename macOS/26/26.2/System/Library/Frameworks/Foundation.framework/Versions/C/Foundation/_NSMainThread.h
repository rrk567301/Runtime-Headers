@interface _NSMainThread : NSThread

- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;

@end
