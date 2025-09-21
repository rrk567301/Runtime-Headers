@interface PXPhotosDetailsSettings : PXSettings

@property (nonatomic) long long defaultCurationAlgorithm;
@property (nonatomic) long long detailsViewCurationAlgorithm;
@property (nonatomic) char enableFetchResultCaching;
@property (nonatomic) char showHeaderWidget;
@property (nonatomic) char showAssetsWidget;
@property (nonatomic) char showCaptionHashtagsWidget;
@property (nonatomic) char showAlbumAttributionWidget;
@property (nonatomic) char showAppAttributionWidget;
@property (nonatomic) char showVisualLookUpWidget;
@property (nonatomic) char showTimeWidget;
@property (nonatomic) char showEXIFWidget;
@property (nonatomic) char showAssetDescriptionWidget;
@property (nonatomic) char showAssetRichDescription;
@property (nonatomic) char useShadowNamesInARD;
@property (nonatomic) char showDemoTilingViewWidget;
@property (nonatomic) char showDemoViewWidget;
@property (nonatomic) char showDemoDynamicWidget;
@property (nonatomic) char showPlacesWidget;
@property (nonatomic) char showRelatedPeopleWidget;
@property (nonatomic) char showSharedLibraryWidget;
@property (nonatomic) char showActionsWidget;
@property (nonatomic) char showPeopleInlineCandidateWidget;
@property (nonatomic) char showFacesAreaRect;
@property (nonatomic) char allowWidgetsContentLoading;
@property (nonatomic) char loadAllWidgetsContentAfterDelay;
@property (nonatomic) char loadAllWidgetsContentOnScroll;
@property (nonatomic) double defaultPriorityWidgetsLoadingDelay;
@property (nonatomic) char allowMultiColumnLayout;
@property (nonatomic) char allowsTopTrailingSelectCancelButton;
@property (nonatomic) char purgeOnMemoryWarning;
@property (nonatomic) long long detailViewsToKeepLoaded;
@property (nonatomic) char useCuratedLibraryLayout;
@property (nonatomic) char allowItemReorderingInCuratedLayout;
@property (nonatomic) char editorialLayoutEdit;
@property (nonatomic) long long editorialLayoutColumns;
@property (nonatomic) long long editorialLayoutTargetRowsForChunk;
@property (nonatomic) char editorialLayoutAvoidSmallestTile;
@property (nonatomic) long long editorialLayoutActivityFeedItemCountThreshold;
@property (nonatomic) double assetsWidgetPlaceholderAspectRatio;
@property (nonatomic) char allowEditorialLayoutStressTest;
@property (nonatomic) long long debugBadgeInfoType;
@property (nonatomic) char placesWidgetShowOnlyPlaceholder;
@property (nonatomic) char showLookUpWidgetSearchIcon;
@property (nonatomic) char captionWidgetEnableHashtags;
@property (nonatomic) char captionWidgetEnableVScrollingInEdit;
@property (nonatomic) char captionWidgetEnableFadeInEffect;
@property (nonatomic) double captionWidgetFadeInDuration;
@property (nonatomic) char captionWidgetEnableDirectAttachToMaster;
@property (nonatomic) char peopleWidgetDisableSocialGroup;
@property (nonatomic) long long peopleWidgetMaximumNumberOfPeople;
@property (nonatomic) char draggableInfoPanelEnabled;
@property (nonatomic) char mapWidgetAllowCopyPasteLocation;
@property (nonatomic) char showActionableLivePhotosBadge;
@property (nonatomic) char formattedLensStringsEnabled;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)transientProperties;

- (long long)version;
- (void)setDefaultValues;
- (id)parentSettings;
- (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })debugBadgeInfo;

@end
