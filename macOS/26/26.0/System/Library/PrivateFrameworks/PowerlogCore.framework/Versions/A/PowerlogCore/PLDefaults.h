@class NSMutableDictionary;

@interface PLDefaults : NSObject

@property (retain) NSMutableDictionary *managedPrefsCache;
@property (retain) NSMutableDictionary *instancePrefsCache;
@property (retain) NSMutableDictionary *userPrefsCache;
@property BOOL enableRestartAtEPL;
@property BOOL debugEnabled;
@property BOOL eplEnabled;

+ (double)doubleForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;
+ (long long)mode;
+ (void)setObject:(id)a0 forKey:(id)a1 saveToDisk:(BOOL)a2;
+ (id)applicationID;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (double)doubleForKey:(id)a0 ifNotSet:(double)a1;
+ (id)objectForKey:(id)a0;
+ (void)registerEPLNotificationWithQueue:(id)a0;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1;
+ (int)liveModeQuery;
+ (void)resetUserDefaultCacheForKey:(id)a0;
+ (long long)longForKey:(id)a0;
+ (BOOL)isClassNameDebugEnabled:(id)a0 forKey:(id)a1;
+ (long long)longForKey:(id)a0 ifNotSet:(long long)a1;
+ (BOOL)fullMode;
+ (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
+ (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
+ (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
+ (BOOL)isClassNameDebugEnabled:(id)a0;
+ (BOOL)isDevBoard;
+ (BOOL)isModelingDebugEnabled;
+ (BOOL)oldFullMode;
+ (id)sharedDefaults;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (BOOL)boolForKey:(id)a0 ifNotSet:(BOOL)a1;
+ (id)objectForKey:(id)a0 ifNotSet:(id)a1;
+ (void)enableRestartAtEPL;
+ (BOOL)liteMode;
+ (BOOL)isTaskFullEPLMode;
+ (BOOL)eplEnabled;
+ (BOOL)isClassDebugEnabled:(Class)a0;
+ (id)allDefaultsEnabled;
+ (BOOL)fullModeForClass:(Class)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (id)objectForKey:(id)a0 synchronize:(BOOL)a1;
+ (BOOL)objectExistsForKey:(id)a0;
+ (BOOL)debugEnabled;
+ (BOOL)isModelTrigger;
+ (BOOL)fullPLLog;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1;
+ (BOOL)taskMode;
+ (BOOL)isClassDebugEnabled:(Class)a0 forKey:(id)a1;

- (id)instancePrefsObjectForKey:(id)a0;
- (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
- (id)init;
- (id)userDefaultsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (id)managedPrefsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (void).cxx_destruct;

@end
