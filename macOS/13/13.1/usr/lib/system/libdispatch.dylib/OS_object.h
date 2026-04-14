@interface OS_object : NSObject

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (id)init;
- (void)_xref_dispose;

@end
