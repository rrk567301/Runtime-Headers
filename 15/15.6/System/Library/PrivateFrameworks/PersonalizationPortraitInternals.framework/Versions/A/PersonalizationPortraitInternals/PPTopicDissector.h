@class PPTextToTopicTransform, CKContextClient;

@interface PPTopicDissector : NSObject {
    CKContextClient *_contextClient;
    PPTextToTopicTransform *_transform;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_collectHighLevelTopicsWithText:(id)a0 bundleId:(id)a1 addTopic:(id /* block */)a2 weight:(double)a3;
- (void)_collectResultsFromContextKitWithText:(id)a0 isPlainText:(char)a1 bundleId:(id)a2 language:(id)a3 useContextKitTopics:(char)a4 useContextKitNamedEntities:(char)a5 addTopic:(id /* block */)a6 addNamedEntity:(id /* block */)a7 weight:(double)a8;
- (id)extractionsFromContextKitWithText:(id)a0 isPlainText:(char)a1 bundleId:(id)a2 language:(id)a3 weight:(double)a4;
- (id)initWithContextClient:(id)a0;
- (id)topicsInText:(id)a0 isPlainText:(char)a1 source:(id)a2 cloudSync:(char)a3 language:(id)a4 topicAlgorithms:(id)a5 namedEntityAlgorithms:(id)a6 weight:(double)a7;

@end
