@class SPUISApplicationResultBuilder;

@interface SPUISTopHitAppWithEntitiesSectionBuilder : SPUISSectionBuilder

@property (retain, nonatomic) SPUISApplicationResultBuilder *appResultBuilder;

+ (BOOL)supportsSection:(id)a0;

- (void).cxx_destruct;
- (long long)maxCardSections;
- (id)buildBridgedResult;
- (id)buildCardSections;
- (id)buildCollectionStyle;

@end
