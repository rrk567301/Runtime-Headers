@interface PXSharingSettings : PXSettings

@property (nonatomic) char showConfidentialityWarnings;
@property (nonatomic) char disableMailDrop;
@property (nonatomic) unsigned long long maxMessagesAssetLimit;
@property (nonatomic) unsigned long long maxMailPhotoLimit;
@property (nonatomic) char showInternalGIFExport;
@property (nonatomic) char allowCopyingVideos;
@property (nonatomic) unsigned long long confidentialityWarningsVersion;
@property (nonatomic) char enableNewActionContextMenu;
@property (nonatomic) char enableOneUpAnimation;
@property (nonatomic) char allowFallbacksWhilePreparing;
@property (nonatomic) long long locationBakingComparisonStrategy;
@property (nonatomic) char disableMetadataCorrections;
@property (nonatomic) char forceDateTimeMetadataBaking;
@property (nonatomic) char forceLocationMetadataBaking;
@property (nonatomic) char forceCaptionMetadataBaking;
@property (nonatomic) char forceAccessibilityDescriptionMetadataBaking;
@property (nonatomic) char sendAssetURLsToMessages;
@property (nonatomic) char simulateError;
@property (nonatomic) char simulateDownloadFailure;
@property (nonatomic) char simulateCPLNotReadyError;
@property (nonatomic) char simulateLowDiskSpaceError;
@property (nonatomic) char simulateUserCloudNotAuthenticated;
@property (nonatomic) char simulateMaxFilesizeLimitForGIFsInSharedAlbumsError;
@property (nonatomic) char simulateSyndicatedResourceUnavailable;
@property (nonatomic) char simulateMismatchedExportCounts;
@property (nonatomic) char showFileRadarButtonOnInternalInstalls;
@property (nonatomic) long long simulatedErrorType;
@property (nonatomic) char showSingleVideoDurationInShareSheetHeader;
@property (nonatomic) long long sharingHeaderLocationDisplayStyle;
@property (nonatomic) char provideGenericTypeIdentifiersForNilActivityTypes;
@property (nonatomic) char showUnmodifiedOriginalsExportSwitch;
@property (nonatomic) char showGlobalLivenessExclusionSwitch;
@property (nonatomic) char showGlobalLocationExclusionSwitch;
@property (nonatomic) char excludeLivenessByDefaultWhenSharing;
@property (nonatomic) char excludeLocationByDefaultWhenSharing;
@property (nonatomic) char showSendAsAssetBundlesForCMM;
@property (nonatomic) char showSendAsAssetBundlesForIndividualItems;
@property (nonatomic) char sendAsAssetBundlesByDefaultWhenSharing;
@property (nonatomic) char savePhotosBundlesToFilesWithoutExtractingMedia;
@property (nonatomic) char shouldUpdateFileCreationDatesForUnmodifiedOriginalExports;
@property (nonatomic) char shouldUpdateFileCreationDatesForRegularExports;
@property (nonatomic) char useModernMessagesShareService;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)debugDescription;
- (void)setDefaultValues;
- (id)parentSettings;
- (void)defaultValueDidChangeForKey:(id)a0;

@end
