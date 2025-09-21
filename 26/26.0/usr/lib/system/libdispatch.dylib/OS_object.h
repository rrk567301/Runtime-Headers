@interface OS_object : NSObject

- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (void)_xref_dispose;
- (oneway void)release;

@end
