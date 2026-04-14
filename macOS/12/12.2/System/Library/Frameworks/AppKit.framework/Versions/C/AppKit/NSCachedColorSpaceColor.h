@interface NSCachedColorSpaceColor : NSColorSpaceColor

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)_release;

@end
