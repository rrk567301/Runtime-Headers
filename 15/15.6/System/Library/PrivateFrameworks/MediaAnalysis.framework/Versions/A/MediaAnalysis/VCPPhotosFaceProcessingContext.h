@interface VCPPhotosFaceProcessingContext : NSObject

@property float faceClusteringThreshold;
@property float faceClusteringJunkThreshold;
@property float faceClusteringAgeThreshold;
@property float faceMergeFaceprintDistanceThreshold;
@property float facePrimarySuggestionsThreshold;
@property unsigned long long minimumSuggestionSize;
@property char quarantineTwinsOnAssetEnabled;
@property unsigned long long minFaceCountToTriggerClustering;
@property unsigned long long maxFaceCountForClustering;
@property char suggestionsLogEnabled;
@property char faceClusteringDisabled;
@property unsigned long long minimumFaceGroupSizeForCreatingMergeCandidates;
@property char personBuildingDisabled;
@property char personBuilderMergeCandidatesDisabled;
@property unsigned long long advancedStatusMergeCandidateLimit;
@property unsigned long long advancedStatusVerifiedPersonLimit;
@property char clusterIncludeTorsoOnlyFaces;
@property int processingVersion;
@property int skipGallerySyncing;

+ (char)_includeTorsoOnlyFaces;
+ (id)contextWithPhotoLibrary:(id)a0;

- (id)initWithPhotoLibrary:(id)a0;

@end
