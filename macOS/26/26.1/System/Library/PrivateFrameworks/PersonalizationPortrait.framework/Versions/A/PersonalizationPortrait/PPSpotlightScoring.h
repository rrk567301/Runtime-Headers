@class PPTopicStore;

@interface PPSpotlightScoring : NSObject {
    PPTopicStore *_topicStore;
    long long _sandboxExtensionHandle;
}

+ (id)defaultInstance;

- (id)spotlightQueryScore:(id)a0 error:(id *)a1;
- (id)initWithTopicStore:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)refreshSpotlightScoringCacheWithError:(id *)a0;

@end
