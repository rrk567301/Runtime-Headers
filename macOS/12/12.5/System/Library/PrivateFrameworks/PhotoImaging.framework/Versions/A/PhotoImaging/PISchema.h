@class NUIdentifier;

@interface PISchema : NSObject

@property (class, readonly) NUIdentifier *identifier;

+ (id)photosSchema;
+ (id)registeredPhotosSchemaIdentifier;
+ (id)sourceSelectSchema;
+ (id)photosCompositionSchema;
+ (id)rawSchema;
+ (id)rawNoiseReductionSchema;
+ (id)retouchSchema;
+ (id)smartToneSchema;
+ (id)smartColorSchema;
+ (id)whiteBalanceSchema;
+ (id)cropSchema;
+ (id)trimSchema;
+ (id)slomoSchema;
+ (id)livePhotoKeyFrameSchema;
+ (id)muteSchema;
+ (id)videoPosterFrameSchema;
+ (id)autoLoopSchema;
+ (id)orientationSchema;
+ (id)effectSchema;
+ (id)redEyeSchema;
+ (id)apertureRedEyeSchema;
+ (id)smartBlackAndWhiteSchema;
+ (id)grainSchema;
+ (id)sharpenSchema;
+ (id)definitionSchema;
+ (id)noiseReductionSchema;
+ (id)vignetteSchema;
+ (id)levelsSchema;
+ (id)curvesSchema;
+ (id)selectiveColorSchema;
+ (id)depthEffectSchema;
+ (id)effect3DSchema;
+ (id)portraitEffectSchema;
+ (id)highResFusionSchema;
+ (id)videoReframeSchema;
+ (id)videoStabilizeSchema;
+ (id)videoCrossfadeLoopSchema;
+ (id)debugSchema;
+ (id)semanticEnhance;
+ (id)portraitVideoSchema;
+ (id)registerPhotosSchema;

@end
