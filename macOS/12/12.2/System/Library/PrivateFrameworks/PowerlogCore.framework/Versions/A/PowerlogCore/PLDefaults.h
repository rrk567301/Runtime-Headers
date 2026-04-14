@class NSMutableDictionary;

@interface PLDefaults : NSObject

@property (retain) NSMutableDictionary *managedPrefsCache;
@property (retain) NSMutableDictionary *instancePrefsCache;
@property (retain) NSMutableDictionary *userPrefsCache;
@property BOOL enableRestartAtEPL;
@property BOOL debugEnabled;
@property BOOL eplEnabled;

+ (id)objectForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (BOOL)boolForKey:(id)a0;
+ (long long)longForKey:(id)a0;
+ (double)doubleForKey:(id)a0;
+ (long long)mode;
+ (id)sharedDefaults;
+ (id)applicationID;
+ (BOOL)debugEnabled;
+ (BOOL)isClassDebugEnabled:(Class)a0;
+ (BOOL)objectExistsForKey:(id)a0;
+ (BOOL)oldFullMode;
+ (void)setObject:(id)a0 forKey:(id)a1 saveToDisk:(BOOL)a2;
+ (void)resetUserDefaultCacheForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0 ifNotSet:(BOOL)a1;
+ (int)liveModeQuery;
+ (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
+ (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
+ (BOOL)fullMode;
+ (BOOL)liteMode;
+ (BOOL)taskMode;
+ (long long)longForKey:(id)a0 ifNotSet:(long long)a1;
+ (BOOL)isClassDebugEnabled:(Class)a0 forKey:(id)a1;
+ (double)doubleForKey:(id)a0 ifNotSet:(double)a1;
+ (void)registerEPLNotificationWithQueue:(id)a0;
+ (id)objectForKey:(id)a0 synchronize:(BOOL)a1;
+ (id)allDefaultsEnabled;
+ (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
+ (BOOL)isDevBoard;
+ (BOOL)isClassNameDebugEnabled:(id)a0;
+ (BOOL)isClassNameDebugEnabled:(id)a0 forKey:(id)a1;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (BOOL)eplEnabled;
+ (void)enableRestartAtEPL;
+ (id)objectForKey:(id)a0 ifNotSet:(id)a1;
+ (BOOL)fullModeForClass:(Class)a0;
+ (BOOL)isModelingDebugEnabled;
+ (BOOL)isModelTrigger;
+ (BOOL)fullPLLog;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (BOOL)isTaskFullEPLMode;

- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
- (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
- (id)userDefaultsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (id)instancePrefsObjectForKey:(id)a0;
- (id)managedPrefsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;

@end
