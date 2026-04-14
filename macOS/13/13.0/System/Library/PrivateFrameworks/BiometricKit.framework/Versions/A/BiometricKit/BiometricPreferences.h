@interface BiometricPreferences : NSObject

+ (id)preferenceValueOfClass:(Class)a0 forKey:(id)a1;
+ (id)preferenceValueOfClass:(Class)a0 forKey:(id)a1 defaultValue:(id)a2;
+ (void)setPreferenceValue:(id)a0 forKey:(id)a1;
+ (BOOL)isPreferenceKeySet:(id)a0;
+ (id)stateDictionary;

@end
