@interface OS_object : NSObject

- (void)_xref_dispose;
- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)allowsWeakReference;
- (id)init;
- (BOOL)retainWeakReference;
- (oneway void)release;

@end
