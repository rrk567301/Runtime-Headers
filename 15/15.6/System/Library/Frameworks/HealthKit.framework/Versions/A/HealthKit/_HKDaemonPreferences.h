@interface _HKDaemonPreferences : NSObject

@property (class, readonly, nonatomic) char usingDemoDataDatabase;

+ (char)setValue:(id)a0 forKey:(id)a1;
+ (id)valueForKey:(id)a0;
+ (char)_boolValueForKey:(id)a0;
+ (id)_safePreferenceForKey:(id)a0 expectedReturnClass:(Class)a1;
+ (char)_setPreferenceValue:(void *)a0 forKey:(id)a1;
+ (char)isGenerateDemoDataSet;
+ (char)isStoreDemoModeSet;
+ (char)shouldGenerateDemoData;
+ (void)synchronizePreferencesWithWatch:(id)a0;

@end
