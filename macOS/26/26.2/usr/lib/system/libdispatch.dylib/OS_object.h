@interface OS_object : NSObject

- (id)retain;
- (void)_xref_dispose;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (id)init;
- (BOOL)retainWeakReference;

@end
