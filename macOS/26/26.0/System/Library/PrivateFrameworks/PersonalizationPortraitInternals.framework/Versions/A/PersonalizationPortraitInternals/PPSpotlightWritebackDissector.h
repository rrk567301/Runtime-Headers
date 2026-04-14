@class PPLocalNamedEntityStore, PPUniversalSearchSpotlightIndexScorer;
@protocol PPSearchableIndex;

@interface PPSpotlightWritebackDissector : NSObject {
    PPUniversalSearchSpotlightIndexScorer *_scorer;
    PPLocalNamedEntityStore *_namedEntityStore;
    id<PPSearchableIndex> _spotlightIndex;
    BOOL _significanceCheckEnabled;
}

+ (id)sharedCache;
+ (BOOL)bundleIdIsAllowed:(id)a0;

- (id)init;
- (BOOL)consumeContentFromBundleId:(id)a0 extractions:(id)a1 spotlightIdentifier:(id)a2 fileProtectionType:(id)a3 shouldContinueBlock:(id /* block */)a4;
- (void)_getNamedEntityPortraitScores:(id)a0 priorityQueue:(id)a1;
- (id)spotlightAttributesForBundleId:(id)a0 spotlightIdentifier:(id)a1 extractions:(id)a2 shouldContinueBlock:(id /* block */)a3;
- (id)initWithNamedEntityStore:(id)a0 topicStore:(id)a1 spotlightIndex:(id)a2 significanceCheckEnabled:(BOOL)a3;
- (void).cxx_destruct;

@end
