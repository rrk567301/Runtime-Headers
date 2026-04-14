@class _DKKnowledgeStore, BMSource, _CDClientContext;

@interface BMAppClipLaunchSource : NSObject {
    BMSource *_storeSource;
}

@property (readonly, nonatomic) _CDClientContext *contextStore;
@property (readonly, nonatomic) _DKKnowledgeStore *knowledgeStore;

- (id)identifier;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithStoreSource:(id)a0;

@end
