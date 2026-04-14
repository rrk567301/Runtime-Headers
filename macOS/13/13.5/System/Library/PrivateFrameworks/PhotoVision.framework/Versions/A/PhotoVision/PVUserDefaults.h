@interface PVUserDefaults : NSObject

+ (float)_floatValueForKey:(id)a0 defaultValue:(float)a1;
+ (float)facePrimarySuggestionsThreshold;
+ (unsigned long long)minFaceCountToTriggerClustering;
+ (BOOL)_boolValueForKey:(id)a0 defaultValue:(BOOL)a1;
+ (double)_doubleValueForKey:(id)a0 defaultValue:(double)a1;
+ (int)_intValueForKey:(id)a0 defaultValue:(int)a1;
+ (unsigned long long)advancedStatusMergeCandidateLimit;
+ (unsigned long long)advancedStatusVerifiedPersonLimit;
+ (unsigned int)faceAlgorithmUmbrellaVersion;
+ (float)faceClusteringAgeThreshold;
+ (BOOL)faceClusteringDisabled;
+ (float)faceClusteringJunkThreshold;
+ (float)faceClusteringThreshold;
+ (BOOL)faceIDModelAlwaysRebuild;
+ (float)faceIDModelClassificationThreshold;
+ (unsigned long long)faceIDModelRebuildPeriod;
+ (float)faceMergeFaceprintDistanceThreshold;
+ (BOOL)isBlacklistDisabled;
+ (unsigned long long)maxFaceCountForClustering;
+ (unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
+ (unsigned long long)minimumSuggestionSize;
+ (BOOL)personBuilderMergeCandidatesDisabled;
+ (BOOL)personBuildingDisabled;
+ (BOOL)quarantineTwinsOnAssetEnabled;
+ (unsigned int)sceneAlgorithmUmbrellaVersion;
+ (BOOL)suggestionsLogEnabled;

@end
