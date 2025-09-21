@class NSObject;
@protocol KVDatasetReader;

@interface KVDataset : NSObject {
    NSObject<KVDatasetReader> *_datasetReader;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)datasetInfo;
- (char)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithReader:(id)a0;
- (char)enumerateCascadeItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
