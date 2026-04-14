@class NSPredicate, NSArray;

@interface IMDRecordBatchFetcher : NSObject <NSFastEnumeration> {
    id *_fastEnumerationBuffer;
    unsigned long long _fastEnumerationBufferSize;
    NSArray *_fastEnumerationLastBatch;
}

@property (nonatomic) long long lastRowID;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) NSPredicate *predicate;

- (void)dealloc;
- (id)init;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)nextBatchWithSize:(unsigned long long)a0;
- (id)nextBatch;

@end
