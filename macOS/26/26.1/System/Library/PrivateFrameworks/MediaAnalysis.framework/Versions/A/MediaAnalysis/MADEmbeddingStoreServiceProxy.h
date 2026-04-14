@class MADEmbeddingStoreService;

@interface MADEmbeddingStoreServiceProxy : NSObject <MADEmbeddingStoreClientProtocol> {
    MADEmbeddingStoreService *_service;
}

- (id)initWithService:(id)a0;
- (void).cxx_destruct;

@end
