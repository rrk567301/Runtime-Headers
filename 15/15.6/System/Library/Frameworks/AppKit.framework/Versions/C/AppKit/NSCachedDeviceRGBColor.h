@interface NSCachedDeviceRGBColor : NSDeviceRGBColor

- (oneway void)release;
- (char)allowsWeakReference;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (char)retainWeakReference;

@end
