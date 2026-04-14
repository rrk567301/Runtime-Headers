@class MADService;

@interface PNTextEmbeddingService : NSObject {
    MADService *_madService;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _madServiceLock;
}

+ (id)modelVersion;
+ (id)textEmbeddingSPIVersion;

- (id)init;
- (void).cxx_destruct;
- (void)prewarmWithCompletionHandler:(id /* block */)a0;
- (void)requestTextEmbeddings:(id)a0 completionHandler:(id /* block */)a1;

@end
