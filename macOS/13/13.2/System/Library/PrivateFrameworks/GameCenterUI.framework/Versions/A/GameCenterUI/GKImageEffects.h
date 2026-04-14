@interface GKImageEffects : NSObject

+ (id)imageByApplyingLightEffectToImage:(id)a0;
+ (id)imageByApplyingExtraLightEffectToImage:(id)a0;
+ (id)imageByApplyingDarkEffectToImage:(id)a0;
+ (id)imageByApplyingTintEffectWithColor:(id)a0 toImage:(id)a1;
+ (id)imageByApplyingBlurToImage:(id)a0 withRadius:(double)a1 tintColor:(id)a2 saturationDeltaFactor:(double)a3 maskImage:(id)a4;

@end
