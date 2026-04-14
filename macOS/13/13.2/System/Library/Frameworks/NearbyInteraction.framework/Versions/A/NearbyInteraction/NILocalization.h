@interface NILocalization : NSObject

+ (id)fallbackBundle;
+ (id)_niFrameworkBundle;
+ (id)_niLocalizedStringFromFrameworkBundleWithKey:(id)a0;
+ (id)localizedBundle;
+ (id)_niLocalizedStringFromBundle:(id)a0 withKey:(id)a1;
+ (id)fallbackBundleWithBundle:(id)a0;
+ (id)localizedBundleWithBundle:(id)a0;

@end
