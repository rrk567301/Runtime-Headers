@class NSMutableDictionary;

@interface PLDefaults : NSObject

@property (retain) NSMutableDictionary *managedPrefsCache;
@property (retain) NSMutableDictionary *instancePrefsCache;
@property (retain) NSMutableDictionary *userPrefsCache;
@property BOOL enableRestartAtEPL;
@property BOOL debugEnabled;
@property BOOL eplEnabled;

+ (double)doubleForKey:(id)a0;
+ (BOOL)fullMode;
+ (double)doubleForKey:(id)a0 ifNotSet:(double)a1;
+ (long long)longForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;
+ (id)applicationID;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (id)objectForKey:(id)a0 ifNotSet:(id)a1;
+ (id)objectForKey:(id)a0;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1;
+ (long long)longForKey:(id)a0 ifNotSet:(long long)a1;
+ (BOOL)eplEnabled;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1;
+ (void)enableRestartAtEPL;
+ (id)objectForKey:(id)a0 synchronize:(BOOL)a1;
+ (BOOL)fullPLLog;
+ (void)resetUserDefaultCacheForKey:(id)a0;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (BOOL)objectExistsForKey:(id)a0;
+ (BOOL)isModelingDebugEnabled;
+ (BOOL)liteMode;
+ (id)sharedDefaults;
+ (BOOL)isClassNameDebugEnabled:(id)a0;
+ (int)liveModeQuery;
+ (BOOL)fullModeForClass:(Class)a0;
+ (void)setObject:(id)a0 forKey:(id)a1 saveToDisk:(BOOL)a2;
+ (BOOL)isDevBoard;
+ (BOOL)debugEnabled;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (id)allDefaultsEnabled;
+ (BOOL)taskMode;
+ (BOOL)boolForKey:(id)a0 ifNotSet:(BOOL)a1;
+ (BOOL)isTaskFullEPLMode;
+ (void)registerEPLNotificationWithQueue:(id)a0;
+ (long long)mode;
+ (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
+ (BOOL)isClassNameDebugEnabled:(id)a0 forKey:(id)a1;
+ (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
+ (BOOL)oldFullMode;
+ (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
+ (BOOL)isClassDebugEnabled:(Class)a0 forKey:(id)a1;
+ (BOOL)isClassDebugEnabled:(Class)a0;
+ (BOOL)isModelTrigger;

- (id)managedPrefsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (id)userDefaultsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (id)init;
- (id)instancePrefsObjectForKey:(id)a0;
- (void).cxx_destruct;
- (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
- (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;

@end
