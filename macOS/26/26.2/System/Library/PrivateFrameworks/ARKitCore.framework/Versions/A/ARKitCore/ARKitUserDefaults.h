@interface ARKitUserDefaults : NSObject

+ (id)numberForKey:(id)a0;
+ (void)setValue:(id)a0 forKey:(id)a1;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (BOOL)boolForKey:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (id)valueForKey:(id)a0;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (double)doubleForKey:(id)a0;
+ (void)synchronize;
+ (id)cachedObjectForKey:(id)a0;
+ (id)stringForKey:(id)a0;
+ (void)removeObjectForKey:(id)a0;
+ (void)cacheObject:(id)a0 forKey:(id)a1;
+ (float)floatForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (id)defaultValues;
+ (void)removeCachedObjectForKey:(id)a0;
+ (void)removeAllKeys;
+ (id)_numberForObject:(id)a0;
+ (BOOL)boolForKey:(id)a0 useCache:(BOOL)a1;
+ (void)clearUserDefaultsCache;
+ (double)doubleForKey:(id)a0 useCache:(BOOL)a1;
+ (float)floatForKey:(id)a0 useCache:(BOOL)a1;
+ (long long)integerForKey:(id)a0 useCache:(BOOL)a1;
+ (id)keysApprovedForProcessEnvironmentOverride;
+ (id)listForKey:(id)a0;
+ (id)numberForKey:(id)a0 useCache:(BOOL)a1;
+ (id)objectForKey:(id)a0 useCache:(BOOL)a1;
+ (id)objectForKeySlow:(id)a0;
+ (BOOL)resolutionForKey:(id)a0 resultingDimensions:(struct { int x0; int x1; } *)a1;
+ (BOOL)shouldUseCache;
+ (id)userDefaultsCache;

@end
