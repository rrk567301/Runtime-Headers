@class NSArray, NSDictionary, NSError;

@interface PNBackgroundMemoriesEmbeddingSearcher : NSObject {
    void /* unknown type, empty encoding */ fetcher;
    void /* unknown type, empty encoding */ embeddingSearchLimit;
    void /* unknown type, empty encoding */ thresholdingModel;
    void /* unknown type, empty encoding */ eventRecorder;
}

- (id)init;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)performSearchWithQueries:(NSArray *)a0 completionHandler:(void (^)(NSDictionary *, NSError *))a1;

@end
