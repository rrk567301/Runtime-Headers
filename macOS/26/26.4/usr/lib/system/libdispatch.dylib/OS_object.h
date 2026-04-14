@interface OS_object : NSObject

- (BOOL)retainWeakReference;
- (void)_xref_dispose;
- (BOOL)allowsWeakReference;
- (id)retain;
- (id)init;
- (oneway void)release;
- (unsigned long long)retainCount;

@end
