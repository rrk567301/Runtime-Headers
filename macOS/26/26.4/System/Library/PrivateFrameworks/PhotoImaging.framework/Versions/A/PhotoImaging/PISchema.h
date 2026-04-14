@class NUIdentifier;

@interface PISchema : NSObject

@property (class, readonly) NUIdentifier *identifier;

+ (id)slomoSchema;
+ (id)inpaintSchema;
+ (id)curvesSchema;
+ (id)effect3DSchema;
+ (id)rawSchema;
+ (id)cinematicAudioSchema;
+ (id)levelsSchema;
+ (id)videoPosterFrameSchema;
+ (id)orientationSchema;
+ (id)smartColorSchema;
+ (id)rawNoiseReductionSchema;
+ (id)selectiveColorSchema;
+ (id)retouchSchema;
+ (id)depthEffectSchema;
+ (id)registeredPhotosSchemaIdentifier;
+ (id)smartBlackAndWhiteSchema;
+ (id)effectSchema;
+ (id)sharpenSchema;
+ (id)semanticStyleSchema;
+ (id)cropSchema;
+ (id)whiteBalanceSchema;
+ (id)videoCrossfadeLoopSchema;
+ (id)semanticEnhance;
+ (id)grainSchema;
+ (id)smartToneSchema;
+ (id)highResFusionSchema;
+ (id)vignetteSchema;
+ (id)registerPhotosSchema;
+ (id)inpaintMasksSchema;
+ (id)debugSchema;
+ (id)videoStabilizeSchema;
+ (id)livePhotoKeyFrameSchema;
+ (id)apertureRedEyeSchema;
+ (id)muteSchema;
+ (id)trimSchema;
+ (id)portraitVideoSchema;
+ (id)autoLoopSchema;
+ (id)noiseReductionSchema;
+ (id)portraitEffectSchema;
+ (id)photosSchema;
+ (id)redEyeSchema;
+ (id)photosCompositionSchema;
+ (id)definitionSchema;

@end
