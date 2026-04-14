@interface OS_object : NSObject

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)init;
- (void)_xref_dispose;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;

@end
