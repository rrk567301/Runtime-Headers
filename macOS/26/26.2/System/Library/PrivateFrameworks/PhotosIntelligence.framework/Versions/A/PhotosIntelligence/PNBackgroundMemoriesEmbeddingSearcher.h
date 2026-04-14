@class NSArray, NSDictionary, NSError;

@interface PNBackgroundMemoriesEmbeddingSearcher : NSObject {
    void /* unknown type, empty encoding */ fetcher;
    void /* unknown type, empty encoding */ embeddingSearchLimit;
    void /* unknown type, empty encoding */ eventRecorder;
}

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)performSearchWithQueries:(NSArray *)a0 retrievalThreshold:(long long)a1 completionHandler:(void (^)(NSDictionary *, NSError *))a2;

@end
