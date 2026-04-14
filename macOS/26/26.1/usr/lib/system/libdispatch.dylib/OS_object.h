@interface OS_object : NSObject

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)_xref_dispose;
- (id)init;

@end
