@interface PVUserDefaults : NSObject

+ (unsigned int)faceAlgorithmUmbrellaVersion;
+ (float)faceIDModelClassificationThreshold;
+ (unsigned long long)advancedStatusMergeCandidateLimit;
+ (unsigned long long)advancedStatusVerifiedPersonLimit;
+ (int)_intValueForKey:(id)a0 defaultValue:(int)a1;
+ (unsigned int)sceneAlgorithmUmbrellaVersion;
+ (float)faceClusteringThreshold;
+ (float)faceClusteringJunkThreshold;
+ (float)faceClusteringAgeThreshold;
+ (float)faceMergeFaceprintDistanceThreshold;
+ (float)facePrimarySuggestionsThreshold;
+ (unsigned long long)minimumSuggestionSize;
+ (BOOL)quarantineTwinsOnAssetEnabled;
+ (unsigned long long)minFaceCountToTriggerClustering;
+ (unsigned long long)maxFaceCountForClustering;
+ (BOOL)faceClusteringDisabled;
+ (BOOL)personBuildingDisabled;
+ (BOOL)personBuilderMergeCandidatesDisabled;
+ (unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
+ (float)_floatValueForKey:(id)a0 defaultValue:(float)a1;
+ (BOOL)_boolValueForKey:(id)a0 defaultValue:(BOOL)a1;
+ (double)_doubleValueForKey:(id)a0 defaultValue:(double)a1;
+ (BOOL)suggestionsLogEnabled;
+ (BOOL)faceIDModelAlwaysRebuild;
+ (unsigned long long)faceIDModelRebuildPeriod;
+ (BOOL)isBlacklistDisabled;

@end
