@class TDEffectRenditionSpec, NSSet, TDEffectType;

@interface TDEffectComponent : NSManagedObject

@property (retain, nonatomic) TDEffectRenditionSpec *rendition;
@property (retain, nonatomic) NSSet *parameters;
@property (retain, nonatomic) TDEffectType *effectType;
@property (nonatomic) char isEnabled;

+ (id)keyPathsForValuesAffectingCUIEffectParameterAngle;
+ (id)keyPathsForValuesAffectingCUIEffectParameterBevelStyle;
+ (id)keyPathsForValuesAffectingCUIEffectParameterBlendMode;
+ (id)keyPathsForValuesAffectingCUIEffectParameterBlurSize;
+ (id)keyPathsForValuesAffectingCUIEffectParameterColor1;
+ (id)keyPathsForValuesAffectingCUIEffectParameterColor2;
+ (id)keyPathsForValuesAffectingCUIEffectParameterOffset;
+ (id)keyPathsForValuesAffectingCUIEffectParameterOpacity;
+ (id)keyPathsForValuesAffectingCUIEffectParameterOpacity2;
+ (id)keyPathsForValuesAffectingCUIEffectParameterSoftenSize;
+ (id)keyPathsForValuesAffectingCUIEffectParameterSpread;
+ (id)keyPathsForValuesAffectingCUIEffectParameterTintable;

- (id)CUIEffectParameterBevelStyle;
- (id)CUIEffectParameterBlurSize;
- (id)CUIEffectParameterColor2;
- (id)CUIEffectParameterOpacity;
- (id)CUIEffectParameterSoftenSize;
- (id)CUIEffectParameterTintable;
- (id)CUIEffectParameterAngle;
- (id)CUIEffectParameterBlendMode;
- (id)CUIEffectParameterColor1;
- (id)CUIEffectParameterOffset;
- (id)CUIEffectParameterOpacity2;
- (id)CUIEffectParameterSpread;
- (void)updatePresetParameters:(id)a0 atIndex:(unsigned long long)a1;
- (void)addParametersToPreset:(id)a0;
- (id)parameterOfType:(unsigned int)a0;
- (void)setEffectParametersFromPreset:(id)a0 atIndex:(unsigned long long)a1 withDocument:(id)a2;

@end
