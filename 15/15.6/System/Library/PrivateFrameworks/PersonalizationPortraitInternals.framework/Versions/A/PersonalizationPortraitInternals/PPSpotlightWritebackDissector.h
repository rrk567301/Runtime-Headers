@class PPLocalNamedEntityStore, PPUniversalSearchSpotlightIndexScorer;

@interface PPSpotlightWritebackDissector : NSObject {
    PPUniversalSearchSpotlightIndexScorer *_scorer;
    PPLocalNamedEntityStore *_namedEntityStore;
    char _significanceCheckEnabled;
}

+ (id)sharedCache;
+ (char)bundleIdIsAllowed:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_getNamedEntityPortraitScores:(id)a0 priorityQueue:(id)a1;
- (char)consumeContentFromBundleId:(id)a0 extractions:(id)a1 spotlightIdentifier:(id)a2 fileProtectionType:(id)a3 shouldContinueBlock:(id /* block */)a4;
- (id)initWithNamedEntityStore:(id)a0 significanceCheckEnabled:(char)a1;

@end
