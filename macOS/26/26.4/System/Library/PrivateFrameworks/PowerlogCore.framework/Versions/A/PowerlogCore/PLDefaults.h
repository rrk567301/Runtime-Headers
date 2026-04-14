@class NSMutableDictionary;

@interface PLDefaults : NSObject

@property (retain) NSMutableDictionary *managedPrefsCache;
@property (retain) NSMutableDictionary *instancePrefsCache;
@property (retain) NSMutableDictionary *userPrefsCache;
@property BOOL enableRestartAtEPL;
@property BOOL debugEnabled;
@property BOOL eplEnabled;

+ (double)doubleForKey:(id)a0;
+ (BOOL)debugEnabled;
+ (BOOL)boolForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
+ (BOOL)isClassDebugEnabled:(Class)a0 forKey:(id)a1;
+ (id)objectForKey:(id)a0;
+ (BOOL)fullMode;
+ (BOOL)fullModeForClass:(Class)a0;
+ (void)enableRestartAtEPL;
+ (void)resetUserDefaultCacheForKey:(id)a0;
+ (id)objectForKey:(id)a0 synchronize:(BOOL)a1;
+ (long long)longForKey:(id)a0 ifNotSet:(long long)a1;
+ (BOOL)objectExistsForKey:(id)a0;
+ (BOOL)isClassNameDebugEnabled:(id)a0 forKey:(id)a1;
+ (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
+ (BOOL)isModelTrigger;
+ (BOOL)isModelingDebugEnabled;
+ (id)applicationID;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1;
+ (BOOL)isClassDebugEnabled:(Class)a0;
+ (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
+ (BOOL)isClassNameDebugEnabled:(id)a0;
+ (BOOL)isDevBoard;
+ (int)liveModeQuery;
+ (BOOL)boolForKey:(id)a0 ifNotSet:(BOOL)a1;
+ (id)allDefaultsEnabled;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (void)setObject:(id)a0 forKey:(id)a1 saveToDisk:(BOOL)a2;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1;
+ (long long)mode;
+ (void)registerEPLNotificationWithQueue:(id)a0;
+ (BOOL)eplEnabled;
+ (BOOL)oldFullMode;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (id)sharedDefaults;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (double)doubleForKey:(id)a0 ifNotSet:(double)a1;
+ (BOOL)isTaskFullEPLMode;
+ (BOOL)fullPLLog;
+ (long long)longForKey:(id)a0;
+ (id)objectForKey:(id)a0 ifNotSet:(id)a1;
+ (BOOL)taskMode;
+ (BOOL)liteMode;

- (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
- (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
- (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (id)instancePrefsObjectForKey:(id)a0;
- (id)managedPrefsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (id)userDefaultsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;

@end
