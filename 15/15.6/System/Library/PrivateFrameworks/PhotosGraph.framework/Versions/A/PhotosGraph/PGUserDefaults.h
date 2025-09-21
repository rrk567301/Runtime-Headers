@class NSDictionary;

@interface PGUserDefaults : NSObject

@property (class, readonly) char isShowingHolidayCalendarEvents;
@property (class, readonly) char isAlwaysShowingHolidayCalendarEvents;
@property (class, readonly) char isMemoriesNotificationDisabled;
@property (class, readonly) char isAutonamingDisabled;
@property (class, readonly) char isAutonamingSignalPropertiesIngestAllowed;
@property (class, readonly) char isAutonamingFilteredOutInferencesIngestAllowed;
@property (class, readonly) char isRelationshipInferenceDisabled;
@property (class, readonly) char isRelationshipSignalPropertiesIngestAllowed;
@property (class, readonly) char isRelationshipFilteredOutInferencesIngestAllowed;
@property (class, readonly) unsigned long long minimumNumberOfCuratedAssetsForInterestingMoments;
@property (class, readonly) char isMemoriesLivingOnFeedbackEnabled;
@property (class, readonly) unsigned long long maximumNumberOfFacesPerAssetForSingleFocusedPersonFacedAssets;
@property (class, readonly) double minimumRatioOfFocusedPersonFacesPerAssetForMultipleFocusedPersonsFacedAssets;
@property (class, readonly) char boundTextFeaturesPerEvent;
@property (class, readonly) unsigned long long maximumNumberOfTextFeaturesPerEvent;
@property (class, readonly) char isPublicEventsEnabled;
@property (class, readonly) char isMemoryElectionDisabled;
@property (class, readonly) char suppressGraphLiveUpdate;
@property (class, readonly) char onThisDayHighlightKeyAssetRotationIsEnabled;
@property (class, readonly) char graphConsistencyCheckIsEnabled;
@property (class, readonly) char graphConsistencyNotificationIsEnabled;
@property (class, readonly) double graphConsistencyPercentageThresholdForTTR;
@property (class, readonly) char isBehavioralCurationEnabled;
@property (class, readonly) char isPhotosChallengeEnabled;
@property (class, retain) NSDictionary *extendedCurationOptions;
@property (class, readonly) unsigned long long maximumNumberOfVisibleRegularItems;
@property (class, readonly) unsigned long long maximumNumberOfVisibleItems;
@property (class, readonly) unsigned long long minimumNumberOfVisibleItems;
@property (class, readonly) char useExtendedCurationAssetCountForLocationTitles;
@property (class, readonly) char musicCurationShouldUseOldStylePreviewURL;
@property (class, readonly) char musicCurationAllowExplicitMusicContent;
@property (class, readonly) char shouldDisableContentClassificationTask;
@property (class, readonly) char useMeaningEdgeForEventLabelingAlgorithm;
@property (class, readonly) double relationshipTagMinConfidenceThreshold;
@property (class, readonly) char useIconicScoreForTrips;
@property (class, readonly) char wallpaperSkipSettlingEffectScoreGating;
@property (class, readonly) double usersChildrenInferenceRecencyThresholdFromLatestMomentDateYears;
@property (class, readonly) double usersChildrenInferenceMinimumLifespanYears;
@property (class, readonly) double usersPetsInferenceRecencyThresholdFromLatestMomentDateYears;
@property (class, readonly) double usersPetsInferenceMinimumLifespanYears;
@property (class, readonly) char enableMomentCLIPFeatureGraphIngest;
@property (class, readonly) char useAOIsInExtendedTokens;
@property (class, readonly) double minimumCumulativeDistributionOfPersonFrequency;
@property (class, readonly) double minimumCumulativeDistributionOfPersonWithNamedPersonFrequency;
@property (class, readonly) double minimumCumulativeDistributionOfPersonWithTripFrequency;
@property (class, readonly) double minimumCumulativeDistributionOfCityFrequency;
@property (class, readonly) double minimumCumulativeDistributionOfAreaFrequency;

+ (void)initialize;
+ (void)_registerDefaults;

@end
