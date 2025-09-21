@class NSString;

@interface PXPhotosGridSettings : PXSettings

@property (nonatomic) char enableBlurInContiguousCollections;
@property (nonatomic) double maximumBlurRadius;
@property (nonatomic) double maximumBlurDimmingFraction;
@property (nonatomic) double blurFadeDistance;
@property (nonatomic) double maximumCommonFocus;
@property (nonatomic) char enableScrollSnapInContiguousCollections;
@property (nonatomic) double scrollSnapMaximumDecelerationFactor;
@property (nonatomic) double scrollSnapMaximumAccelerationFactor;
@property (nonatomic) char enableShowMoreButtonsInEditorialLens;
@property (nonatomic) char enableBlurAndScrollSnapInContiguousGrids;
@property (nonatomic) char emulatesEmptyLibrary;
@property (nonatomic) char forceFooterVisible;
@property (nonatomic) double simulatedLoadDelay;
@property (nonatomic) double defaultAnimationDuration;
@property (nonatomic) double matchMoveAnimationDuration;
@property (nonatomic) char enableInCMM;
@property (nonatomic) char enableSuperzoom;
@property (nonatomic) char enablePreviewKeyAssetFetching;
@property (nonatomic) char enableInvisibleNavBars;
@property (nonatomic) char enableSortAction;
@property (nonatomic) char enableMultiSelectMenu;
@property (nonatomic) char enableNewActionMenu;
@property (nonatomic) char enableContentFiltering;
@property (nonatomic) char enableAspectFitToggle;
@property (nonatomic) char enableAspectFitButton;
@property (nonatomic) char enableZoomInOutButton;
@property (nonatomic) char enableDetailsMenuAction;
@property (nonatomic) char exposeMoviePresentationAction;
@property (nonatomic) char enableFilterDropDownButton;
@property (nonatomic) char enableFilterViewControllerAnchoringToSender;
@property (nonatomic) char enableTitleLegibilityDimmingFilter;
@property (nonatomic) char backdropStyleForPlacesAndImports;
@property (nonatomic) char colorNavbarArea;
@property (nonatomic) double headerTitleTopSpacing;
@property (nonatomic) double headerTitleBottomSpacing;
@property (nonatomic) char useGradientSectionHeaders;
@property (nonatomic) double sectionHeaderGradientOverhang;
@property (nonatomic) double sectionHeaderGradientAlpha;
@property (nonatomic) double headerGradientHeight;
@property (nonatomic) double headerGradientAlpha;
@property (nonatomic) double behindContentBackgroundGradientAlpha;
@property (nonatomic) char showLivePhotoFilter;
@property (nonatomic) char showPortraitFilter;
@property (nonatomic) char showInUserAlbumFilter;
@property (nonatomic) long long searchActionLocationOnPhone;
@property (copy, nonatomic) NSString *actionMenuGlyphName;
@property (nonatomic) char showCollectionKindInPreviewHeaderToggleAction;
@property (nonatomic) char shouldCurateEditorialLens;
@property (nonatomic) char gridBadgesOnlyShowGlyph;
@property (nonatomic) char gridBadgesPortraitEnabled;
@property (nonatomic) char gridBadgesForAllMediaTypes;
@property (nonatomic) char enableStacksReviewUI;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;

@end
