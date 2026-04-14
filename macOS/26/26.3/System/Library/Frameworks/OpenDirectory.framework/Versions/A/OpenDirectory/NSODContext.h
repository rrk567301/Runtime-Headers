@interface NSODContext : ODContext

- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)allowsWeakReference;
- (BOOL)_tryRetain;
- (BOOL)retainWeakReference;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (oneway void)release;

@end
