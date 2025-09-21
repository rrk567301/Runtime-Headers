@interface PXImportSettings : PXSettings

@property (nonatomic) char importSourceSimulationViaDiagnosticsEnabled;
@property (nonatomic) long long simulatedBatteryLevel;
@property (nonatomic) char simulateEmptyImportSource;
@property (nonatomic) double delayBeforeShowingPreparationAlert;
@property (nonatomic) char simulateLongDiskSpacePreparation;
@property (nonatomic) long long simulatedDiskSpace;
@property (nonatomic) char showImportItemFilenames;
@property (nonatomic) char disableAssetDeletion;
@property (nonatomic) char loadActualThumbnails;
@property (nonatomic) char lazyLoadAllAssets;
@property (nonatomic) char groupItemsByEXIFDate;
@property (nonatomic) char showNewestItemsInGridUntilScrolled;
@property (nonatomic) long long alreadyImportedTruncationMode;
@property (nonatomic) char hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
@property (nonatomic) char longPressForOneUpInCompactMode;
@property (nonatomic) char longPressForOneUpInPadSpec;
@property (nonatomic) char useThumbnailSizesAsImageSizeHints;
@property (nonatomic) char loadRetinaThumbnails;
@property (nonatomic) char alwaysShowCPLOptimizedMessage;
@property (nonatomic) long long assetEnumerationBehavior;
@property (nonatomic) double assetEnumerationBatchInterval;
@property (nonatomic) unsigned long long assetEnumerationBatchSize;
@property (nonatomic) char showProgressTitles;
@property (nonatomic) char usePhotosOneUp;
@property (nonatomic) char interactive1upPresentationEnabled;
@property (nonatomic) char externalOneUpSimulateDeletionFailure;
@property (nonatomic) char externalOneUpForceEnable;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
