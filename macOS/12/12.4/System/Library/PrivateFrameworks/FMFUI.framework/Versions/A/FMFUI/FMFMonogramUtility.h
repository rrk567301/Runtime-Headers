@interface FMFMonogramUtility : NSObject

+ (id)contactImageCache;
+ (id)monogramImageOfDiameter:(double)a0 forPerson:(id)a1 useTintColor:(id)a2 useCustomFont:(BOOL)a3 isPersonImage:(BOOL *)a4;
+ (void)clearMonogramCache;
+ (id)monogramImageOfDiameter:(double)a0 forPerson:(id)a1 monogramStyle:(long long)a2 tintColor:(id)a3 customFont:(id)a4 isPersonImage:(BOOL *)a5;
+ (struct __CFString { } *)hexStringFromColor:(id)a0;
+ (id)contactStatusCache;

@end
