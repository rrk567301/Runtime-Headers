@class NSArray, NSManagedObjectContext;

@interface MADPhotosDataStoreBatchIterator : NSEnumerator {
    unsigned long long _batchSize;
    unsigned long long _batchIdx;
    unsigned long long _numBatches;
    NSArray *_currentBatch;
    NSArray *_objects;
    NSManagedObjectContext *_moc;
}

+ (id)iteratorForFetchRequest:(id)a0 mangedObjectContext:(id)a1 batchSize:(unsigned long long)a2;
+ (id)iteratorForFetchRequest:(id)a0 photoLibrary:(id)a1 batchSize:(unsigned long long)a2;

- (id)nextObject;
- (void)performBlockAndWait:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFetchRequest:(id)a0 mangedObjectContext:(id)a1 batchSize:(unsigned long long)a2;

@end
