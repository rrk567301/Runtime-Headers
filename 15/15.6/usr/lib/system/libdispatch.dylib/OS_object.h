@interface OS_object : NSObject

- (oneway void)release;
- (char)allowsWeakReference;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (char)retainWeakReference;
- (void)_xref_dispose;

@end
