@interface NSCachedWhiteColor : NSCalibratedWhiteColor

- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
