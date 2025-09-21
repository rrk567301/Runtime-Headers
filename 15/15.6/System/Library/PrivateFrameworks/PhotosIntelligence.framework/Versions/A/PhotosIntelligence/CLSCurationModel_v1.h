@class NSDictionary, CLSJunkClassificationModel, CLSFaceModel, CLSMediaPreAnalysisModel, CLSMediaAnalysisModel, CLSSceneModel, CLSAestheticsModel;

@interface CLSCurationModel_v1 : NSObject

@property (readonly) CLSSceneModel *sceneModel;
@property (readonly) CLSMediaPreAnalysisModel *mediaPreAnalysisModel;
@property (readonly) CLSMediaAnalysisModel *mediaAnalysisModel;
@property (readonly) CLSAestheticsModel *aestheticsModel;
@property (readonly) CLSJunkClassificationModel *junkClassificationModel;
@property (readonly) CLSFaceModel *faceModel;
@property (readonly) double faceSizeUpperLimit;
@property (readonly) double faceSizeLowerLimit;
@property (readonly) NSDictionary *confidenceThresholdBySceneIdentifierForBabyChildTeenAdultAndPetScenes;
@property (readonly) NSDictionary *confidenceThresholdBySceneIdentifierForBabyScenes;
@property (readonly) NSDictionary *confidenceThresholdBySceneIdentifierForUtilityScenes;
@property (readonly) NSDictionary *confidenceThresholdBySceneIdentifierForInterestingScenes;
@property (readonly) NSDictionary *confidenceThresholdBySceneIdentifierForWhiteboardScenes;
@property (readonly) double minimumDurationForVideoToNotBeJunk;
@property (readonly) double minimumDurationForTimelapseVideoToNotBeJunk;
@property (readonly) double minimumDurationForHighFramerateVideoToNotBeJunk;

+ (id)baseSpecificationWithSpecification:(id)a0;
+ (short)uninterestingAudioClassifications;

- (void).cxx_destruct;
- (id)initForTesting;
- (double)scoreWithAsset:(id)a0 inContext:(id)a1;
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(id /* block */)a0;
- (char)avoidIfPossibleForKeyAssetWithAsset:(id)a0 statistics:(struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; struct { unsigned int x0; } x13; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x14; } *)a1;
- (float)interactionScoreWithAsset:(id)a0;
- (char)isAestheticallyPrettyGoodWithAsset:(id)a0;
- (char)isInterestingLivePhotoWithAsset:(id)a0;
- (char)isUtilityForMemoriesWithAsset:(id)a0 userFeedbackCalculator:(id)a1;
- (char)isUtilityForSyndicationWithAsset:(id)a0;
- (char)isUtilityWithAsset:(id)a0;
- (char)isInterestingPanoramaWithAsset:(id)a0;
- (char)asset:(id)a0 isAestheticallyAwesomeWithContext:(id)a1;
- (char)assetIsJunkWithSceneClassifications:(id)a0 confidenceThresholdBySceneIdentifierForScenesPreventingJunking:(id)a1 confidenceThresholdBySceneIdentifierForJunkingScenes:(id)a2 confidenceThresholdBySceneIdentifierForScenesPreventingSceneBasedJunking:(id)a3 forMemories:(char)a4;
- (char)avoidIfPossibleForMemoryKeyAssetWithAsset:(id)a0;
- (void)enumerateSignalModelsUsingBlock:(id /* block */)a0;
- (id)faceInformationSummaryWithFaces:(id)a0 detectionTraitsByFaceLocalIdentifier:(id)a1 verifiedPersonUUIDs:(id)a2 hiddenPersonUUIDs:(id)a3 personUUIDByMergeCandidateUUID:(id)a4 userFeedbackCalculator:(id)a5 assetUUID:(id)a6;
- (char)hasInterestingAudioClassificationWithAsset:(id)a0;
- (char)hasInterestingScenesWithAsset:(id)a0;
- (char)hasPoorResolutionWithAsset:(id)a0;
- (char)imageAssetIsJunkForMemoriesFromSceneAndJunkClassifications:(id)a0 forKeyAsset:(char)a1 forMemories:(char)a2;
- (char)imageAssetIsJunkFromSceneAndJunkClassifications:(id)a0;
- (id)initWithCurationModelSpecification:(id)a0;
- (short)interestingAudioClassificationsWithAsset:(id)a0;
- (char)isAestheticallyAwesomeWithAsset:(id)a0;
- (char)isBadQualityForImageKeyAssetWithAsset:(id)a0 statistics:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a1;
- (char)isBlurryWithAsset:(id)a0;
- (char)isGoldWithAsset:(id)a0;
- (char)isInhabitedWithAsset:(id)a0;
- (char)isInterestingHDRWithAsset:(id)a0;
- (char)isInterestingSDOFWithAsset:(id)a0;
- (char)isInterestingVideoWithAsset:(id)a0;
- (char)isJunkWithJunkClassification:(id)a0;
- (char)isJunkWithSignal:(id)a0 isReliable:(char *)a1;
- (char)isNonMemorableWithAsset:(id)a0;
- (char)isRegularGemWithAsset:(id)a0;
- (char)isShinyGemWithAsset:(id)a0;
- (char)isTragicFailureWithImageAsset:(id)a0;
- (char)isUtilityForImageAsset:(id)a0;
- (char)isUtilityForMemoriesForImageAsset:(id)a0;
- (char)isUtilityForMemoriesWithVideoAsset:(id)a0;
- (char)isUtilityForVideoAsset:(id)a0;
- (id)sceneIdentifiersOfInterestingScenes;

@end
