@class _PASLazyPurgeableResult, PPLocalTopicStore;

@interface PPUniversalSearchSpotlightIndexScorer : NSObject {
    PPLocalTopicStore *_topicStore;
    _PASLazyPurgeableResult *_cachedPortraitTopicScores;
}

- (id)topicAlgorithmWeights;
- (double)computeSpotlightIndexScoreFromPortraitExtractions:(id)a0;
- (id)initWithLocalTopicStore:(id)a0;
- (void).cxx_destruct;
- (double)computeSpotlightIndexTopicScoreComponentFromDocumentTopicVector:(id)a0;
- (double)computeSpotlightIndexTopicSubscoreFromPortraitExtractions:(id)a0;
- (id)init;

@end
