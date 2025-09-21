@interface PXSharedLibrarySettings : PXSettings

@property (nonatomic) char showPreviewCancelButton;
@property (nonatomic) char showMoveToLibraryActionsInShareSheet;
@property (nonatomic) char showSwitchLibraryActionsInActionButton;
@property (nonatomic) char showPersonalLibraryContentOnly;
@property (nonatomic) char showPreviewAssetsOnlyFilter;
@property (nonatomic) char alwaysConfirmMoveToSharedLibrary;
@property (nonatomic) char alwaysConfirmMoveToPersonalLibrary;
@property (nonatomic) char alwaysConfirmRemoveSharedLibrarySuggestion;
@property (nonatomic) char confirmMoveToPersonalLibraryFromSharedLibraryPreview;
@property (nonatomic) char enableIncompleteUIElements;
@property (nonatomic) char enableAutoShareWithParticipants;
@property (nonatomic) char enableOneUpBadge;
@property (nonatomic) char mockPersonSuggestionForSetupAssistant;
@property (nonatomic) long long invitationsDataSourceType;
@property (nonatomic) long long previewDataSourceType;
@property (nonatomic) long long sharedLibraryDataSourceType;
@property (nonatomic) long long exitingDataSourceType;
@property (nonatomic) long long sourceLibraryInfoType;
@property (nonatomic) long long simulateErrorType;
@property (nonatomic) long long sharingSuggestionsBannerFirstCheckThreshold;
@property (nonatomic) long long sharingSuggestionsBannerUnreadCountThreshold;
@property (nonatomic) double sharingSuggestionsLegibilityStrength;
@property (nonatomic) double sharingSuggestionsMinimumTimeSinceLastBannerDismiss;
@property (nonatomic) double sharingSuggestionsMinimumTimeSinceLastAsset;
@property (nonatomic) char showSampleGadgets;
@property (nonatomic) char showDebugAlbums;
@property (nonatomic) char forceLegacyDevicesFallback;
@property (nonatomic) char includeNonLegacyDevicesInFallback;
@property (nonatomic) char simulateSlowLegacyDevicesFetchInFallback;
@property (nonatomic) char simulateLegacyDevicesRemoteFailure;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
