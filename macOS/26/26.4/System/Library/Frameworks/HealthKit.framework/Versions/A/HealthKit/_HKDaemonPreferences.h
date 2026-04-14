@interface _HKDaemonPreferences : NSObject

@property (class, readonly, nonatomic) BOOL usingDemoDataDatabase;

+ (BOOL)setValue:(id)a0 forKey:(id)a1;
+ (void)synchronizePreferencesWithWatch:(id)a0;
+ (BOOL)isStoreDemoModeSet;
+ (BOOL)_boolValueForKey:(id)a0;
+ (BOOL)shouldGenerateDemoData;
+ (id)valueForKey:(id)a0;
+ (BOOL)isGenerateDemoDataSet;
+ (id)_safePreferenceForKey:(id)a0 expectedReturnClass:(Class)a1;
+ (BOOL)_setPreferenceValue:(void *)a0 forKey:(id)a1;

@end
