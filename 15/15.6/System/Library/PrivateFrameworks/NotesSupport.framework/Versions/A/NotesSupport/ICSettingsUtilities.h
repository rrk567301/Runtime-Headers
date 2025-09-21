@interface ICSettingsUtilities : NSObject

+ (char)boolForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (void)setBool:(char)a0 forKey:(id)a1;
+ (void)synchronizeSettingsWithUserDefaultsForKeys:(id)a0;

@end
