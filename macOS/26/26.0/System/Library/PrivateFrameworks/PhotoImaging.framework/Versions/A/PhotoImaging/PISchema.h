@class NUIdentifier;

@interface PISchema : NSObject

@property (class, readonly) NUIdentifier *identifier;

+ (id)orientationSchema;
+ (id)smartColorSchema;
+ (id)redEyeSchema;
+ (id)curvesSchema;
+ (id)effect3DSchema;
+ (id)effectSchema;
+ (id)photosCompositionSchema;
+ (id)depthEffectSchema;
+ (id)cinematicAudioSchema;
+ (id)inpaintMasksSchema;
+ (id)sharpenSchema;
+ (id)whiteBalanceSchema;
+ (id)livePhotoKeyFrameSchema;
+ (id)definitionSchema;
+ (id)apertureRedEyeSchema;
+ (id)muteSchema;
+ (id)portraitVideoSchema;
+ (id)autoLoopSchema;
+ (id)videoPosterFrameSchema;
+ (id)registeredPhotosSchemaIdentifier;
+ (id)cropSchema;
+ (id)semanticStyleSchema;
+ (id)smartToneSchema;
+ (id)rawSchema;
+ (id)vignetteSchema;
+ (id)videoStabilizeSchema;
+ (id)trimSchema;
+ (id)registerPhotosSchema;
+ (id)levelsSchema;
+ (id)videoCrossfadeLoopSchema;
+ (id)slomoSchema;
+ (id)rawNoiseReductionSchema;
+ (id)photosSchema;
+ (id)semanticEnhance;
+ (id)smartBlackAndWhiteSchema;
+ (id)highResFusionSchema;
+ (id)retouchSchema;
+ (id)selectiveColorSchema;
+ (id)noiseReductionSchema;
+ (id)debugSchema;
+ (id)portraitEffectSchema;
+ (id)inpaintSchema;
+ (id)grainSchema;

@end
