@interface PXPhotosDetailsSettings : PXSettings

@property (nonatomic) long long defaultCurationAlgorithm;
@property (nonatomic) long long detailsViewCurationAlgorithm;
@property (nonatomic) BOOL enableFetchResultCaching;
@property (nonatomic) double fakeFetchDelay;
@property (nonatomic) BOOL showHeaderWidget;
@property (nonatomic) BOOL showAssetsWidget;
@property (nonatomic) BOOL showCaptionHashtagsWidget;
@property (nonatomic) BOOL showAlbumAttributionWidget;
@property (nonatomic) BOOL showAppAttributionWidget;
@property (nonatomic) BOOL showVisualLookUpWidget;
@property (nonatomic) BOOL showTimeWidget;
@property (nonatomic) BOOL showEXIFWidget;
@property (nonatomic) BOOL showAssetDescriptionWidget;
@property (nonatomic) BOOL showAssetRichDescription;
@property (nonatomic) BOOL useShadowNamesInARD;
@property (nonatomic) BOOL showDemoTilingViewWidget;
@property (nonatomic) BOOL showDemoViewWidget;
@property (nonatomic) BOOL showDemoDynamicWidget;
@property (nonatomic) BOOL showPlacesWidget;
@property (nonatomic) BOOL showSharedLibraryWidget;
@property (nonatomic) BOOL showActionsWidget;
@property (nonatomic) BOOL showFacesAreaRect;
@property (nonatomic) BOOL allowWidgetsContentLoading;
@property (nonatomic) BOOL loadAllWidgetsContentAfterDelay;
@property (nonatomic) BOOL loadAllWidgetsContentOnScroll;
@property (nonatomic) double defaultPriorityWidgetsLoadingDelay;
@property (nonatomic) BOOL allowMultiColumnLayout;
@property (nonatomic) BOOL allowsTopTrailingSelectCancelButton;
@property (nonatomic) BOOL purgeOnMemoryWarning;
@property (nonatomic) long long detailViewsToKeepLoaded;
@property (nonatomic) BOOL useCuratedLibraryLayout;
@property (nonatomic) BOOL allowItemReorderingInCuratedLayout;
@property (nonatomic) BOOL editorialLayoutEdit;
@property (nonatomic) long long editorialLayoutColumns;
@property (nonatomic) long long editorialLayoutTargetRowsForChunk;
@property (nonatomic) BOOL editorialLayoutAvoidSmallestTile;
@property (nonatomic) long long editorialLayoutActivityFeedItemCountThreshold;
@property (nonatomic) double assetsWidgetPlaceholderAspectRatio;
@property (nonatomic) BOOL allowEditorialLayoutStressTest;
@property (nonatomic) long long debugBadgeInfoType;
@property (nonatomic) BOOL placesWidgetShowOnlyPlaceholder;
@property (nonatomic) BOOL showLookUpWidgetSearchIcon;
@property (nonatomic) BOOL captionWidgetEnableHashtags;
@property (nonatomic) BOOL captionWidgetEnableVScrollingInEdit;
@property (nonatomic) BOOL captionWidgetEnableFadeInEffect;
@property (nonatomic) double captionWidgetFadeInDuration;
@property (nonatomic) BOOL captionWidgetEnableDirectAttachToMaster;
@property (nonatomic) BOOL draggableInfoPanelEnabled;
@property (nonatomic) BOOL mapWidgetAllowCopyPasteLocation;
@property (nonatomic) BOOL showActionableLivePhotosBadge;
@property (nonatomic) BOOL formattedLensStringsEnabled;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)transientProperties;

- (void)setDefaultValues;
- (long long)version;
- (id)parentSettings;
- (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })debugBadgeInfo;

@end
