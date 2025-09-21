@interface DMCDefaults : NSObject

+ (char)boolForDefaultsKey:(id)a0;
+ (id)numberForDefaultsKey:(id)a0;
+ (id)stringForDefaultsKey:(id)a0;
+ (char)DSLiveOnModeEnabled;
+ (char)ESSOTestModeEnabled;
+ (char)ADETestModeEnabled;
+ (id)dictForDefaultsKey:(id)a0;
+ (id)objectForDefaultsKey:(id)a0;

@end
