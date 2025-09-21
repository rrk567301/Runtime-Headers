@class NSDate, NSString, NSArray, NSSet, VNSceneprint, CLSCurationModel, NSDateComponents, CLLocation;

@interface CLSTestInvestigationItem : NSObject <CLSInvestigationItem>

@property (retain, nonatomic) CLLocation *clsLocation;
@property (retain, nonatomic) NSArray *clsPersonLocalIdentifiers;
@property (copy, nonatomic) NSSet *clsSceneClassifications;
@property (readonly, nonatomic) long long clsViewCount;
@property (readonly, nonatomic) long long clsPlayCount;
@property (readonly, nonatomic) long long clsShareCount;
@property (readonly, nonatomic) char clsIsUtility;
@property (readonly, nonatomic) NSDateComponents *cls_localDateComponents;
@property (retain, nonatomic) NSDate *cls_universalDate;
@property (readonly, nonatomic) NSDate *cls_localDate;
@property (nonatomic) double clsContentScore;
@property (nonatomic) char clsAvoidIfPossibleForKeyItem;
@property (readonly, nonatomic) NSArray *clsUnprefetchedPersonLocalIdentifiers;
@property (readonly, nonatomic) NSArray *clsConsolidatedPersonLocalIdentifiers;
@property (readonly, nonatomic) unsigned long long clsPeopleCount;
@property (readonly, nonatomic) NSArray *clsPetLocalIdentifiers;
@property (readonly, nonatomic) NSArray *clsPersonAndPetLocalIdentifiers;
@property (readonly, nonatomic) NSString *clsIdentifier;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) double clsExposureScore;
@property (readonly, nonatomic) double clsSharpnessScore;
@property (readonly, nonatomic) double clsAestheticScore;
@property (readonly, nonatomic) double clsHighlightVisibilityScore;
@property (readonly, nonatomic) double clsAutoplaySuggestionScore;
@property (readonly, nonatomic) double clsFaceScore;
@property (readonly, nonatomic) char clsIsScreenshotOrScreenRecording;
@property (readonly, nonatomic) char isFavorite;
@property (readonly, nonatomic) char isVideo;
@property (readonly, nonatomic) char clsIsAestheticallyPrettyGood;
@property (readonly, nonatomic) char clsIsBlurry;
@property (readonly, nonatomic) char clsIsLoopOrBounce;
@property (readonly, nonatomic) char clsIsLongExposure;
@property (readonly, nonatomic) char clsIsInterestingVideo;
@property (readonly, nonatomic) char clsIsInterestingLivePhoto;
@property (readonly, nonatomic) char clsIsInterestingPanorama;
@property (readonly, nonatomic) char clsIsInterestingSDOF;
@property (readonly, nonatomic) char clsIsInterestingHDR;
@property (readonly, nonatomic) char clsHasInterestingAudioClassification;
@property (readonly, nonatomic) char clsHasCustomPlaybackVariation;
@property (readonly, nonatomic) char clsIsNonMemorable;
@property (readonly, nonatomic) double clsDuration;
@property (readonly) CLSCurationModel *curationModel;
@property (readonly, nonatomic) VNSceneprint *clsSceneprint;
@property (readonly) char clsIsInhabited;
@property (readonly) char clsHasPoorResolution;
@property (readonly) char clsHasInterestingScenes;
@property (readonly, nonatomic) double clsSquareCropScore;
@property (readonly, nonatomic) char clsIsInSharedLibrary;
@property (readonly, nonatomic) double clsIconicScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } pl_coordinate;
@property (readonly, nonatomic) double pl_gpsHorizontalAccuracy;
@property (readonly, nonatomic) NSDate *pl_date;
@property (readonly, nonatomic) NSString *pl_uuid;
@property (readonly) unsigned long long clsSimilarityModelVersion;

+ (id)itemWithPeopleNames:(id)a0 universalDate:(id)a1 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2;
+ (id)itemWithUniversalDate:(id)a0 sceneClassifications:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (double)scoreInContext:(id)a0;
- (char)clsAvoidIfPossibleAsKeyItemForMemories:(char)a0 allowGuestAsset:(char)a1;
- (char)clsAvoidIfPossibleAsKeyItemForMemories:(char)a0 allowGuestAsset:(char)a1 reason:(id *)a2;

@end
