@interface DMCDefaults : NSObject

+ (id)stringForDefaultsKey:(id)a0;
+ (id)dictForDefaultsKey:(id)a0;
+ (BOOL)boolForDefaultsKey:(id)a0;
+ (id)numberForDefaultsKey:(id)a0;
+ (id)objectForDefaultsKey:(id)a0;
+ (BOOL)DSLiveOnModeEnabled;
+ (BOOL)ESSOTestModeEnabled;
+ (BOOL)ADETestModeEnabled;

@end
