@interface PLComputeCachePolicyConfiguration : NSObject

@property (readonly, nonatomic) char isBackupEnabled;
@property (readonly, nonatomic) char isRestoreEnabled;
@property (readonly, nonatomic) unsigned long long minAssetCount;
@property (readonly, nonatomic) unsigned long long minCloudStorageTier;
@property (readonly, nonatomic) double minSnapshotTimeInterval;
@property (readonly, nonatomic) unsigned long long minExpungedAssetCount;
@property (readonly, nonatomic) unsigned long long ambientSuggestionEntryLimit;

- (id)initWithConfigurationDictionary:(id)a0;
- (void)configurationValueForKey:(id)a0 configurationDictionary:(id)a1 valueBlock:(id /* block */)a2;

@end
