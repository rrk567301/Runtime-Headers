@interface NSODContext : ODContext

- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (BOOL)retainWeakReference;

@end
