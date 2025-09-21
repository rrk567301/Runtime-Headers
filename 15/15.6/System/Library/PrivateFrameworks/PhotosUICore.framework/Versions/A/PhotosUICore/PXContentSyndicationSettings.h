@interface PXContentSyndicationSettings : PXSettings

@property (nonatomic) char contentSyndicationEnabled;
@property (nonatomic) char ignoreSocialLayerEnablement;
@property (nonatomic) char showSidebarItemEvenIfNoSyndicatedContentAvailable;
@property (nonatomic) char shouldMockChallengeQuestions;
@property (nonatomic) char showSyndicatedContentInLibrary;
@property (nonatomic) char enableFilteringCuratedGridsForContentSyndication;
@property (nonatomic) char showContentSyndicationInSystemPhotoLibraryOnly;
@property (nonatomic) long long dataSourceType;
@property (nonatomic) char useUserLibraryForSyndicatedAssets;
@property (nonatomic) unsigned long long maxNumberOfBatches;
@property (nonatomic) unsigned long long maxNumberOfAssetsPerBatch;
@property (nonatomic) char delayLoadingActualDataSourceUntilAfterLaunch;
@property (nonatomic) char loadVerySmallInitialBatchOfRecentCollections;
@property (nonatomic) double blackOverlayForFirstThumbnail;
@property (nonatomic) double blackOverlayForSecondThumbnail;
@property (nonatomic) double blackOverlayForThirdThumbnail;
@property (nonatomic) long long itemCellBlurStyle;
@property (nonatomic) char shouldHorizontallyCenterAttributionViewInGrid;
@property (nonatomic) char alwaysLeadingAlignAttributionViewOnRegularWidthPads;
@property (nonatomic) char showSyndicatedContentWidgetForSavedAssets;
@property (nonatomic) char showSyndicatedContentWidgetForGuestAssets;
@property (nonatomic) char showSyndicated1upPillUI;
@property (nonatomic) long long syndicated1upPillAlignment;
@property (nonatomic) long long savedAssetViewVisibility;
@property (nonatomic) unsigned long long numberOfMinutesToShowPillUIAfterSaving;
@property (nonatomic) char preventActualSaveToLibraryBehavior;
@property (nonatomic) char preventActualRemoveSuggestionBehavior;
@property (nonatomic) char treatEveryAssetAsGuest;
@property (nonatomic) char enableStackAspectRatio;
@property (nonatomic) char enableStackSmartCrop;
@property (nonatomic) char useSystemLibraryForReview;
@property (nonatomic) char useRandomStatusForReview;
@property (nonatomic) long long reviewScope;
@property (nonatomic) unsigned short reviewProcessingValuesScope;
@property (nonatomic) char mockNumberOfAssetsSaved;
@property (nonatomic) long long footerMockType;
@property (nonatomic) char waitForAndLogAssetArrivalWhenSaving;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)_createDataSourceSection;

- (void)setDefaultValues;
- (id)parentSettings;

@end
