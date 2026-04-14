@class NSString, _CDClientContext, _DKKnowledgeStore, BMSource;

@interface BMAppClipLaunchSource : NSObject <BMSourceProtocol> {
    BMSource *_storeSource;
}

@property (readonly, nonatomic) _CDClientContext *contextStore;
@property (readonly, nonatomic) _DKKnowledgeStore *knowledgeStore;
@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (void)sendEvent:(id)a0;
- (id)initWithStoreSource:(id)a0;

@end
