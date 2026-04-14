@class _PASLazyPurgeableResult, PPLocalTopicStore;

@interface PPUniversalSearchSpotlightIndexScorer : NSObject {
    PPLocalTopicStore *_topicStore;
    _PASLazyPurgeableResult *_cachedPortraitTopicScores;
}

- (double)computeSpotlightIndexTopicSubscoreFromPortraitExtractions:(id)a0;
- (id)initWithLocalTopicStore:(id)a0;
- (id)init;
- (id)topicAlgorithmWeights;
- (double)computeSpotlightIndexTopicScoreComponentFromDocumentTopicVector:(id)a0;
- (void).cxx_destruct;
- (double)computeSpotlightIndexScoreFromPortraitExtractions:(id)a0;

@end
