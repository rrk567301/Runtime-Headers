@interface UAOnboardingUtility : NSObject

+ (id)buttonBackgroundColorForEffectiveAppearance;
+ (id)buttonShadowColorForEffectiveAppearance;
+ (id)buttonRolloverColorForEffectiveAppearance;
+ (id)buttonPressColorForEffectiveAppearance;
+ (id)localizedCurrentCategoryName:(id)a0;
+ (BOOL)appearanceIsDark;
+ (float)_RGBValueFromAlpha:(float)a0 overlay:(float)a1 background:(float)a2;

@end
