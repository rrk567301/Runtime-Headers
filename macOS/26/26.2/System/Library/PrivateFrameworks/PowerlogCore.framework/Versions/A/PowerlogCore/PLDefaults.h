@class NSMutableDictionary;

@interface PLDefaults : NSObject

@property (retain) NSMutableDictionary *managedPrefsCache;
@property (retain) NSMutableDictionary *instancePrefsCache;
@property (retain) NSMutableDictionary *userPrefsCache;
@property BOOL enableRestartAtEPL;
@property BOOL debugEnabled;
@property BOOL eplEnabled;

+ (BOOL)objectExistsForKey:(id)a0;
+ (BOOL)liteMode;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (id)objectForKey:(id)a0 synchronize:(BOOL)a1;
+ (BOOL)boolForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
+ (BOOL)isClassNameDebugEnabled:(id)a0;
+ (BOOL)isModelTrigger;
+ (id)applicationID;
+ (double)doubleForKey:(id)a0;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (int)liveModeQuery;
+ (id)sharedDefaults;
+ (BOOL)isModelingDebugEnabled;
+ (BOOL)eplEnabled;
+ (void)setObject:(id)a0 forKey:(id)a1 saveToDisk:(BOOL)a2;
+ (BOOL)taskMode;
+ (BOOL)boolForKey:(id)a0 ifNotSet:(BOOL)a1;
+ (long long)longForKey:(id)a0;
+ (BOOL)isClassNameDebugEnabled:(id)a0 forKey:(id)a1;
+ (BOOL)isDevBoard;
+ (BOOL)oldFullMode;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (BOOL)fullModeForClass:(Class)a0;
+ (BOOL)debugEnabled;
+ (BOOL)fullPLLog;
+ (BOOL)isClassDebugEnabled:(Class)a0 forKey:(id)a1;
+ (void)enableRestartAtEPL;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1;
+ (BOOL)isClassDebugEnabled:(Class)a0;
+ (id)objectForKey:(id)a0 ifNotSet:(id)a1;
+ (BOOL)isTaskFullEPLMode;
+ (id)objectForKey:(id)a0;
+ (BOOL)fullMode;
+ (void)resetUserDefaultCacheForKey:(id)a0;
+ (double)doubleForKey:(id)a0 ifNotSet:(double)a1;
+ (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
+ (void)registerEPLNotificationWithQueue:(id)a0;
+ (long long)mode;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1;
+ (id)allDefaultsEnabled;
+ (long long)longForKey:(id)a0 ifNotSet:(long long)a1;
+ (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;

- (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
- (id)instancePrefsObjectForKey:(id)a0;
- (id)userDefaultsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (void).cxx_destruct;
- (id)managedPrefsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (id)init;
- (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
- (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;

@end
