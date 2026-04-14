@interface EMServerConfiguration : NSObject

+ (id)getValueForKey:(id)a0;
+ (BOOL)refresh;
+ (void)refreshAsync;
+ (id)_userDefaultsKey;
+ (BOOL)isCacheRecent;
+ (id)_configurationLocation;
+ (double)_cacheValidityInterval;
+ (void)_assertNotMainThread;
+ (void)_savePropertyList:(id)a0;

@end
