@interface PXContentSyndicationSettings : PXSettings

@property (nonatomic) BOOL contentSyndicationEnabled;
@property (nonatomic) BOOL ignoreSocialLayerEnablement;
@property (nonatomic) BOOL showSidebarItemEvenIfNoSyndicatedContentAvailable;
@property (nonatomic) BOOL shouldMockChallengeQuestions;
@property (nonatomic) BOOL showSyndicatedContentInLibrary;
@property (nonatomic) BOOL enableFilteringCuratedGridsForContentSyndication;
@property (nonatomic) BOOL showContentSyndicationInSystemPhotoLibraryOnly;
@property (nonatomic) long long dataSourceType;
@property (nonatomic) BOOL useUserLibraryForSyndicatedAssets;
@property (nonatomic) unsigned long long maxNumberOfBatches;
@property (nonatomic) unsigned long long maxNumberOfAssetsPerBatch;
@property (nonatomic) BOOL delayLoadingActualDataSourceUntilAfterLaunch;
@property (nonatomic) BOOL loadVerySmallInitialBatchOfRecentCollections;
@property (nonatomic) double blackOverlayForFirstThumbnail;
@property (nonatomic) double blackOverlayForSecondThumbnail;
@property (nonatomic) double blackOverlayForThirdThumbnail;
@property (nonatomic) long long itemCellBlurStyle;
@property (nonatomic) BOOL shouldHorizontallyCenterAttributionViewInGrid;
@property (nonatomic) BOOL alwaysLeadingAlignAttributionViewOnRegularWidthPads;
@property (nonatomic) BOOL showSyndicatedContentWidgetForSavedAssets;
@property (nonatomic) BOOL showSyndicatedContentWidgetForGuestAssets;
@property (nonatomic) BOOL showSyndicated1upPillUI;
@property (nonatomic) long long syndicated1upPillAlignment;
@property (nonatomic) long long savedAssetViewVisibility;
@property (nonatomic) unsigned long long numberOfMinutesToShowPillUIAfterSaving;
@property (nonatomic) BOOL preventActualSaveToLibraryBehavior;
@property (nonatomic) BOOL preventActualRemoveSuggestionBehavior;
@property (nonatomic) BOOL treatEveryAssetAsGuest;
@property (nonatomic) BOOL enableStackAspectRatio;
@property (nonatomic) BOOL enableStackSmartCrop;
@property (nonatomic) BOOL useSystemLibraryForReview;
@property (nonatomic) BOOL useRandomStatusForReview;
@property (nonatomic) long long reviewScope;
@property (nonatomic) unsigned short reviewProcessingValuesScope;
@property (nonatomic) unsigned long long photosGridViewContents;
@property (nonatomic) BOOL mockNumberOfAssetsSaved;
@property (nonatomic) long long footerMockType;
@property (nonatomic) BOOL waitForAndLogAssetArrivalWhenSaving;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)_createDataSourceSection;

- (void)setDefaultValues;
- (id)parentSettings;

@end
