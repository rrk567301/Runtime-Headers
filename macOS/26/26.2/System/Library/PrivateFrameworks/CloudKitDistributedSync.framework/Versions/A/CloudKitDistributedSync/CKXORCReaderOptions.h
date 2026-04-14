@class NSString;

@interface CKXORCReaderOptions : NSObject

@property (retain, nonatomic) NSString *testExceptionDuringLoadBatch;
@property (nonatomic) unsigned long long testExceptionDuringLoadBatchLoadsToSkip;
@property (nonatomic) unsigned long long batchSize;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBatchSize:(unsigned long long)a0;

@end
