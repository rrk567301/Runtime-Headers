@class NSObject;
@protocol KVDatasetReader;

@interface KVDataset : NSObject {
    NSObject<KVDatasetReader> *_datasetReader;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithReader:(id)a0;
- (id)datasetInfo;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (BOOL)enumerateCascadeItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
