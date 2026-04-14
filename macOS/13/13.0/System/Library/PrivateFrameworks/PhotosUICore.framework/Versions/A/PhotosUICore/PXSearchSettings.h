@class NSString;

@interface PXSearchSettings : PXSettings

@property (nonatomic) BOOL alwaysTrySiriSearch;
@property (nonatomic) unsigned long long maxNumberOfSuggestionsToShow;
@property (nonatomic) unsigned long long maxNumberOfTopAssetColumns;
@property (nonatomic) unsigned long long maxNumberOfResultColumns;
@property (nonatomic) unsigned long long maxNumberOfTopAssetRows;
@property (nonatomic) unsigned long long standardNumberOfTopAssetRows;
@property (nonatomic) BOOL forceIndexingFooter;
@property (nonatomic) BOOL enableChimaeraPipeline;
@property (nonatomic) BOOL enableTopAssetInMemorySort;
@property (nonatomic) BOOL disableTopAssetCuration;
@property (copy, nonatomic) NSString *overrideMatchedQueryText;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (BOOL)isChimaeraEnabled;
+ (BOOL)_isChimaeraFFEnabled;
+ (id)_formatIndexingStatusAlertMessageForRemainingCount:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;

@end
