@interface NSCachedColorSpaceColor : NSColorSpaceColor

- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)_release;

@end
