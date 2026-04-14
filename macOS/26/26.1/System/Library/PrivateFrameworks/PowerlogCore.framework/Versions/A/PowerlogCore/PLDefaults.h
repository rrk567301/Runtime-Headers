@class NSMutableDictionary;

@interface PLDefaults : NSObject

@property (retain) NSMutableDictionary *managedPrefsCache;
@property (retain) NSMutableDictionary *instancePrefsCache;
@property (retain) NSMutableDictionary *userPrefsCache;
@property BOOL enableRestartAtEPL;
@property BOOL debugEnabled;
@property BOOL eplEnabled;

+ (id)sharedDefaults;
+ (id)applicationID;
+ (BOOL)fullModeForClass:(Class)a0;
+ (BOOL)boolForKey:(id)a0;
+ (double)doubleForKey:(id)a0;
+ (BOOL)fullPLLog;
+ (BOOL)liteMode;
+ (BOOL)oldFullMode;
+ (void)resetUserDefaultCacheForKey:(id)a0;
+ (BOOL)objectExistsForKey:(id)a0;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (id)objectForKey:(id)a0 ifNotSet:(id)a1;
+ (void)setObject:(id)a0 forKey:(id)a1 saveToDisk:(BOOL)a2;
+ (long long)mode;
+ (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
+ (BOOL)isClassDebugEnabled:(Class)a0 forKey:(id)a1;
+ (long long)longForKey:(id)a0;
+ (id)objectForKey:(id)a0 synchronize:(BOOL)a1;
+ (BOOL)eplEnabled;
+ (id)objectForKey:(id)a0;
+ (BOOL)isModelTrigger;
+ (BOOL)fullMode;
+ (long long)longForKey:(id)a0 ifNotSet:(long long)a1;
+ (BOOL)isTaskFullEPLMode;
+ (BOOL)isClassNameDebugEnabled:(id)a0 forKey:(id)a1;
+ (int)liveModeQuery;
+ (BOOL)isClassDebugEnabled:(Class)a0;
+ (BOOL)isModelingDebugEnabled;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1;
+ (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
+ (BOOL)taskMode;
+ (void)registerEPLNotificationWithQueue:(id)a0;
+ (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1;
+ (void)enableRestartAtEPL;
+ (BOOL)isClassNameDebugEnabled:(id)a0;
+ (id)allDefaultsEnabled;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (BOOL)isDevBoard;
+ (BOOL)debugEnabled;
+ (double)doubleForKey:(id)a0 ifNotSet:(double)a1;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (BOOL)boolForKey:(id)a0 ifNotSet:(BOOL)a1;

- (id)instancePrefsObjectForKey:(id)a0;
- (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (id)managedPrefsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (void).cxx_destruct;
- (id)userDefaultsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
- (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
- (id)init;

@end
