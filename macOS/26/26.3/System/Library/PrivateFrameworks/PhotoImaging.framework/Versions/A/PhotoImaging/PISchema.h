@class NUIdentifier;

@interface PISchema : NSObject

@property (class, readonly) NUIdentifier *identifier;

+ (id)smartToneSchema;
+ (id)inpaintMasksSchema;
+ (id)selectiveColorSchema;
+ (id)smartBlackAndWhiteSchema;
+ (id)cinematicAudioSchema;
+ (id)semanticStyleSchema;
+ (id)depthEffectSchema;
+ (id)levelsSchema;
+ (id)inpaintSchema;
+ (id)sharpenSchema;
+ (id)livePhotoKeyFrameSchema;
+ (id)highResFusionSchema;
+ (id)portraitVideoSchema;
+ (id)smartColorSchema;
+ (id)curvesSchema;
+ (id)semanticEnhance;
+ (id)orientationSchema;
+ (id)grainSchema;
+ (id)rawNoiseReductionSchema;
+ (id)whiteBalanceSchema;
+ (id)videoPosterFrameSchema;
+ (id)effectSchema;
+ (id)autoLoopSchema;
+ (id)redEyeSchema;
+ (id)rawSchema;
+ (id)debugSchema;
+ (id)noiseReductionSchema;
+ (id)apertureRedEyeSchema;
+ (id)videoStabilizeSchema;
+ (id)photosCompositionSchema;
+ (id)effect3DSchema;
+ (id)portraitEffectSchema;
+ (id)muteSchema;
+ (id)registerPhotosSchema;
+ (id)trimSchema;
+ (id)vignetteSchema;
+ (id)slomoSchema;
+ (id)retouchSchema;
+ (id)photosSchema;
+ (id)registeredPhotosSchemaIdentifier;
+ (id)cropSchema;
+ (id)definitionSchema;
+ (id)videoCrossfadeLoopSchema;

@end
