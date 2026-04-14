@class NSDictionary, NSArray;

@interface IMDExportedChatRecordBatch : IMDExportedRecordBatch {
    void /* function */ batchIterationKeys;
    void /* function */ records;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSDictionary *batchIterationKeys;
@property (nonatomic, readonly) NSArray *records;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithBatchIterationKeys:(id)a0 examinedRecordsCount:(long long)a1 databaseQueryDuration:(double)a2 isDone:(BOOL)a3 records:(id)a4;
- (id)initWithExaminedRecordsCount:(long long)a0 databaseQueryDuration:(double)a1 recordCount:(long long)a2 isDone:(BOOL)a3;

@end
