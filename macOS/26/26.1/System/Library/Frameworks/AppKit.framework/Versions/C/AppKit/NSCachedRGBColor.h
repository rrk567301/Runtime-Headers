@interface NSCachedRGBColor : NSCalibratedRGBColor

- (id)copy;
- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;

@end
