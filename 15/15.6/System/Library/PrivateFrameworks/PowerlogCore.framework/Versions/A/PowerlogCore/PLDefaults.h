@class NSMutableDictionary;

@interface PLDefaults : NSObject

@property (retain) NSMutableDictionary *managedPrefsCache;
@property (retain) NSMutableDictionary *instancePrefsCache;
@property (retain) NSMutableDictionary *userPrefsCache;
@property char enableRestartAtEPL;
@property char debugEnabled;
@property char eplEnabled;

+ (char)boolForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (double)doubleForKey:(id)a0;
+ (long long)longForKey:(id)a0;
+ (long long)mode;
+ (id)applicationID;
+ (id)sharedDefaults;
+ (char)isClassNameDebugEnabled:(id)a0 forKey:(id)a1;
+ (id)allDefaultsEnabled;
+ (char)boolForKey:(id)a0 ifNotSet:(char)a1;
+ (char)debugEnabled;
+ (double)doubleForKey:(id)a0 ifNotSet:(double)a1;
+ (void)enableRestartAtEPL;
+ (char)eplEnabled;
+ (char)fullMode;
+ (char)fullModeForClass:(Class)a0;
+ (char)fullPLLog;
+ (char)isClassDebugEnabled:(Class)a0;
+ (char)isClassDebugEnabled:(Class)a0 forKey:(id)a1;
+ (char)isClassNameDebugEnabled:(id)a0;
+ (char)isDevBoard;
+ (char)isModelTrigger;
+ (char)isModelingDebugEnabled;
+ (char)isTaskFullEPLMode;
+ (char)liteMode;
+ (int)liveModeQuery;
+ (long long)longForKey:(id)a0 ifNotSet:(long long)a1;
+ (char)objectExistsForKey:(id)a0;
+ (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(char)a2;
+ (id)objectForKey:(id)a0 ifNotSet:(id)a1;
+ (id)objectForKey:(id)a0 synchronize:(char)a1;
+ (char)oldFullMode;
+ (void)registerEPLNotificationWithQueue:(id)a0;
+ (void)resetUserDefaultCacheForKey:(id)a0;
+ (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
+ (void)setClass:(Class)a0 debugEnabled:(char)a1;
+ (void)setClass:(Class)a0 debugEnabled:(char)a1 forKey:(id)a2;
+ (void)setClassName:(id)a0 debugEnabled:(char)a1;
+ (void)setClassName:(id)a0 debugEnabled:(char)a1 forKey:(id)a2;
+ (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(char)a3;
+ (void)setObject:(id)a0 forKey:(id)a1 saveToDisk:(char)a2;
+ (char)taskMode;

- (id)init;
- (void).cxx_destruct;
- (id)instancePrefsObjectForKey:(id)a0;
- (id)managedPrefsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(char)a2;
- (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(char)a2;
- (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(char)a3;
- (id)userDefaultsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(char)a2;

@end
