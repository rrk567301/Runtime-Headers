@class NUIdentifier;

@interface PISchema : NSObject

@property (class, readonly) NUIdentifier *identifier;

+ (id)photosCompositionSchema;
+ (id)sharpenSchema;
+ (id)curvesSchema;
+ (id)effect3DSchema;
+ (id)debugSchema;
+ (id)trimSchema;
+ (id)effectSchema;
+ (id)retouchSchema;
+ (id)portraitVideoSchema;
+ (id)rawSchema;
+ (id)autoLoopSchema;
+ (id)semanticStyleSchema;
+ (id)highResFusionSchema;
+ (id)smartToneSchema;
+ (id)registeredPhotosSchemaIdentifier;
+ (id)depthEffectSchema;
+ (id)rawNoiseReductionSchema;
+ (id)muteSchema;
+ (id)videoCrossfadeLoopSchema;
+ (id)grainSchema;
+ (id)smartBlackAndWhiteSchema;
+ (id)apertureRedEyeSchema;
+ (id)semanticEnhance;
+ (id)inpaintSchema;
+ (id)slomoSchema;
+ (id)inpaintMasksSchema;
+ (id)portraitEffectSchema;
+ (id)noiseReductionSchema;
+ (id)livePhotoKeyFrameSchema;
+ (id)orientationSchema;
+ (id)whiteBalanceSchema;
+ (id)registerPhotosSchema;
+ (id)levelsSchema;
+ (id)smartColorSchema;
+ (id)videoPosterFrameSchema;
+ (id)cinematicAudioSchema;
+ (id)selectiveColorSchema;
+ (id)vignetteSchema;
+ (id)cropSchema;
+ (id)videoStabilizeSchema;
+ (id)definitionSchema;
+ (id)redEyeSchema;
+ (id)photosSchema;

@end
