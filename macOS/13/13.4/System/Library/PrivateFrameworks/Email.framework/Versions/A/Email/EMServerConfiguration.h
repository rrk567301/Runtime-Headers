@interface EMServerConfiguration : NSObject

+ (id)getValueForKey:(id)a0;
+ (BOOL)refresh;
+ (void)refreshAsync;
+ (id)_userDefaultsKey;
+ (BOOL)isCacheRecent;
+ (void)_assertNotMainThread;
+ (double)_cacheValidityInterval;
+ (id)_configurationLocation;
+ (void)_savePropertyList:(id)a0;

@end
