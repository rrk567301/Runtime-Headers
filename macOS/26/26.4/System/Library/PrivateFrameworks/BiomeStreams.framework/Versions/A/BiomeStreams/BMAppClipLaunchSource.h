@class _DKKnowledgeStore, BMSource, _CDClientContext;

@interface BMAppClipLaunchSource : NSObject {
    BMSource *_storeSource;
}

@property (readonly, nonatomic) _CDClientContext *contextStore;
@property (readonly, nonatomic) _DKKnowledgeStore *knowledgeStore;

- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)identifier;
- (id)initWithStoreSource:(id)a0;

@end
