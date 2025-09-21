@class SSApplicationResultBuilder;

@interface SSTopHitAppWithEntitiesSectionBuilder : SSSectionBuilder

@property (retain, nonatomic) SSApplicationResultBuilder *appResultBuilder;

+ (char)supportsAppTopHitWithoutIndexFor:(id)a0;
+ (char)supportsBonusSPI:(id)a0;
+ (char)supportsFileProviderFor:(id)a0;
+ (char)supportsSection:(id)a0;

- (void).cxx_destruct;
- (long long)maxCardSections;
- (id)buildBridgedResult;
- (id)buildCardSections;
- (id)buildCollectionStyle;

@end
