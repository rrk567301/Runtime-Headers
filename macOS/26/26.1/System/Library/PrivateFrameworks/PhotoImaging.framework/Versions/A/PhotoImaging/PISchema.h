@class NUIdentifier;

@interface PISchema : NSObject

@property (class, readonly) NUIdentifier *identifier;

+ (id)definitionSchema;
+ (id)autoLoopSchema;
+ (id)noiseReductionSchema;
+ (id)rawNoiseReductionSchema;
+ (id)grainSchema;
+ (id)semanticEnhance;
+ (id)selectiveColorSchema;
+ (id)livePhotoKeyFrameSchema;
+ (id)vignetteSchema;
+ (id)effectSchema;
+ (id)inpaintMasksSchema;
+ (id)whiteBalanceSchema;
+ (id)slomoSchema;
+ (id)smartColorSchema;
+ (id)curvesSchema;
+ (id)cropSchema;
+ (id)apertureRedEyeSchema;
+ (id)videoStabilizeSchema;
+ (id)videoPosterFrameSchema;
+ (id)effect3DSchema;
+ (id)photosCompositionSchema;
+ (id)debugSchema;
+ (id)trimSchema;
+ (id)depthEffectSchema;
+ (id)smartToneSchema;
+ (id)photosSchema;
+ (id)semanticStyleSchema;
+ (id)levelsSchema;
+ (id)sharpenSchema;
+ (id)muteSchema;
+ (id)redEyeSchema;
+ (id)registerPhotosSchema;
+ (id)orientationSchema;
+ (id)highResFusionSchema;
+ (id)cinematicAudioSchema;
+ (id)inpaintSchema;
+ (id)smartBlackAndWhiteSchema;
+ (id)retouchSchema;
+ (id)rawSchema;
+ (id)videoCrossfadeLoopSchema;
+ (id)portraitVideoSchema;
+ (id)registeredPhotosSchemaIdentifier;
+ (id)portraitEffectSchema;

@end
