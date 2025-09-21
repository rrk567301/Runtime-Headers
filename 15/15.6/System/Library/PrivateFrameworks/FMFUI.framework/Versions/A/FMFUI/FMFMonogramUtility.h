@interface FMFMonogramUtility : NSObject

+ (struct __CFString { } *)hexStringFromColor:(id)a0;
+ (id)contactImageCache;
+ (void)clearMonogramCache;
+ (id)contactStatusCache;
+ (id)monogramImageOfDiameter:(double)a0 forPerson:(id)a1 monogramStyle:(long long)a2 tintColor:(id)a3 customFont:(id)a4 isPersonImage:(char *)a5;
+ (id)monogramImageOfDiameter:(double)a0 forPerson:(id)a1 useTintColor:(id)a2 useCustomFont:(char)a3 isPersonImage:(char *)a4;

@end
