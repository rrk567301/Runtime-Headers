@class NSString;

@interface PIGlobalSettings : NSObject

@property (nonatomic) char falseColorHDR;
@property (nonatomic) char forceGlassesMatteOff;
@property (nonatomic) char forceSpillMatteOff;
@property (nonatomic) char allowSpillMatteOnOlderPortraitV2Captures;
@property (nonatomic) char portraitDisableFuzzball;
@property (nonatomic) char portraitForceLightMapLinear;
@property (nonatomic) char segmentationDebugRoundTripProxyImage;
@property (nonatomic) char disableSegmentation;
@property (nonatomic) char forceEnableSegmentation;
@property (nonatomic) char disableHeadroom;
@property (nonatomic) long long segmentationInfillAlgorithm;
@property (nonatomic) double segmentationInfillDilationPercent;
@property (nonatomic) char segmentationDebugTintLayers;
@property (nonatomic) char segmentationDisableCaching;
@property (nonatomic) char segmentationDebugPreviewDisableClock;
@property (nonatomic) char segmentationDebugPreviewHighQuality;
@property (nonatomic) double segmentationManualGatingLenience;
@property (copy, nonatomic) NSString *styleRecipeConfigDirectoryPath;
@property (nonatomic) long long parallaxStyleKeyLevelOverride;
@property (nonatomic) char parallaxStyleAvoidColorWashBrownOverride;
@property (nonatomic) char useStyleRecipeConfigDirectory;
@property (nonatomic) char parallaxStyleEnableGreenScreen;
@property (copy, nonatomic) NSString *parallaxLayoutConfigurationOverride;
@property (nonatomic) char parallaxWallpaperDisableUpgrade;
@property (nonatomic) char cinematicAllowYUVSourceInput;
@property (nonatomic) char cinematicAllowRGB10Packed;
@property (nonatomic) char rawApplyBoostFirst;
@property (nonatomic) char disableMADForSettlingEffect;
@property (nonatomic) char posterDisableCropVariant;
@property (nonatomic) char forceEnableSettlingEffect;
@property (nonatomic) float settlingEffectMinimumMotionScore;
@property (nonatomic) char debugUseStyleEngine;
@property (nonatomic) char semanticStyleDisableStyleEngine;
@property (nonatomic) double inpaintGainMapMixFactor;
@property (nonatomic) char inpaintOrientInputImages;
@property (copy, nonatomic) NSString *inpaintDumpPath;
@property (nonatomic) char inpaintOverlaysMasks;
@property (nonatomic) char inpaintOverlaysMaskBounds;
@property (nonatomic) char inpaintDumpsOriginalMasks;
@property (nonatomic) char inpaintDumpsProcessedMasks;
@property (nonatomic) double inpaintPixellationIntersectionAreaToMaskAreaThreshold;
@property (nonatomic) double inpaintPixellationIntersectionAreaToFaceAreaThreshold;
@property (nonatomic) char objectRemovalRegionOverride;
@property (nonatomic) double inpaintMaxAreaPercentage;
@property (nonatomic) char inpaintFillsMaskHoles;
@property (nonatomic) char sensitivityCheckDumpsImages;

+ (id)globalSettings;
+ (id)IPXEditSettings;
+ (id)PUEditSettings;
+ (id)editSettings;

@end
