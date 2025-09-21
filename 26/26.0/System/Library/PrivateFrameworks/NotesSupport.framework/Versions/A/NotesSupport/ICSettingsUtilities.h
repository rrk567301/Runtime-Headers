@interface ICSettingsUtilities : NSObject

+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (BOOL)boolForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (void)synchronizeSettingsWithUserDefaultsForKeys:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;

@end
