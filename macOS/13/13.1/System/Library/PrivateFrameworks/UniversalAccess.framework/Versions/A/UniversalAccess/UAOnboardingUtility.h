@interface UAOnboardingUtility : NSObject

+ (id)buttonBackgroundColorForEffectiveAppearance;
+ (id)buttonRolloverColorForEffectiveAppearance;
+ (id)buttonPressColorForEffectiveAppearance;
+ (id)buttonShadowColorForEffectiveAppearance;
+ (float)_RGBValueFromAlpha:(float)a0 overlay:(float)a1 background:(float)a2;
+ (id)localizedCurrentCategoryName:(id)a0;
+ (BOOL)appearanceIsDark;

@end
