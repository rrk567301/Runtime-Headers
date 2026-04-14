@class NUIdentifier;

@interface PISchema : NSObject

@property (class, readonly) NUIdentifier *identifier;

+ (id)photosSchema;
+ (id)semanticEnhance;
+ (id)smartToneSchema;
+ (id)apertureRedEyeSchema;
+ (id)autoLoopSchema;
+ (id)cropSchema;
+ (id)curvesSchema;
+ (id)debugSchema;
+ (id)definitionSchema;
+ (id)depthEffectSchema;
+ (id)effect3DSchema;
+ (id)effectSchema;
+ (id)grainSchema;
+ (id)highResFusionSchema;
+ (id)levelsSchema;
+ (id)livePhotoKeyFrameSchema;
+ (id)muteSchema;
+ (id)noiseReductionSchema;
+ (id)orientationSchema;
+ (id)photosCompositionSchema;
+ (id)portraitEffectSchema;
+ (id)portraitVideoSchema;
+ (id)rawNoiseReductionSchema;
+ (id)rawSchema;
+ (id)redEyeSchema;
+ (id)registerPhotosSchema;
+ (id)registeredPhotosSchemaIdentifier;
+ (id)retouchSchema;
+ (id)selectiveColorSchema;
+ (id)sharpenSchema;
+ (id)slomoSchema;
+ (id)smartBlackAndWhiteSchema;
+ (id)smartColorSchema;
+ (id)sourceSelectSchema;
+ (id)trimSchema;
+ (id)videoCrossfadeLoopSchema;
+ (id)videoPosterFrameSchema;
+ (id)videoReframeSchema;
+ (id)videoStabilizeSchema;
+ (id)vignetteSchema;
+ (id)whiteBalanceSchema;

@end
