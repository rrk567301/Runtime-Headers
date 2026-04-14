@class NSString;

@interface PXSearchSettings : PXSettings

@property (nonatomic) unsigned long long maxNumberOfSuggestionsToShow;
@property (nonatomic) unsigned long long maxNumberOfTopAssetColumns;
@property (nonatomic) unsigned long long maxNumberOfResultColumns;
@property (nonatomic) unsigned long long maxNumberOfTopAssetRows;
@property (nonatomic) unsigned long long standardNumberOfTopAssetRows;
@property (nonatomic) BOOL forceIndexingFooter;
@property (nonatomic) unsigned long long indexingBannerAssetThreshold;
@property (nonatomic) BOOL forceIndexingPausedTitle;
@property (copy, nonatomic) NSString *overrideMatchedQueryText;
@property (nonatomic) BOOL enableScopedSearchMSS;
@property (nonatomic) BOOL enableScopedSearchPhotosPicker;
@property (nonatomic) BOOL wantsAssetResults;
@property (nonatomic) BOOL wantsCollectionResults;
@property (nonatomic) BOOL enableChimaeraPipeline;
@property (nonatomic) BOOL enableTopAssetInMemorySort;
@property (nonatomic) BOOL disableTopAssetCuration;
@property (nonatomic) BOOL enableAutoCorrect;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)_formatIndexingStatusAlertMessageForRemainingCount:(unsigned long long)a0 isPaused:(BOOL)a1 elapsedTimeSincePause:(double)a2;
+ (BOOL)_isChimaeraFFEnabled;
+ (BOOL)isChimaeraEnabled;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;

@end
