@interface NSODNode : ODNode

- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (BOOL)_tryRetain;
- (BOOL)allowsWeakReference;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;

@end
