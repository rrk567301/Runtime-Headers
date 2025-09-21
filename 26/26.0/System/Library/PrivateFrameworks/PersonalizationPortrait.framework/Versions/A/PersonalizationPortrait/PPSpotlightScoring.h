@class PPTopicStore;

@interface PPSpotlightScoring : NSObject {
    PPTopicStore *_topicStore;
    long long _sandboxExtensionHandle;
}

+ (id)defaultInstance;

- (void)dealloc;
- (BOOL)refreshSpotlightScoringCacheWithError:(id *)a0;
- (id)initWithTopicStore:(id)a0;
- (id)spotlightQueryScore:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
