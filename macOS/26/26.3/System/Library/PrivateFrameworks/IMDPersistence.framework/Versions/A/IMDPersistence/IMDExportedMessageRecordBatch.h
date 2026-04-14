@class NSArray, IMDFilteredMessageCounts;

@interface IMDExportedMessageRecordBatch : IMDExportedRecordBatch {
    void /* function */ records;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSArray *records;
@property (nonatomic, readonly) IMDFilteredMessageCounts *filterCounts;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBatchIterationKeys:(id)a0 examinedRecordsCount:(long long)a1 databaseQueryDuration:(double)a2 isDone:(BOOL)a3 filterCounts:(id)a4 records:(id)a5;
- (id)initWithBatchIterationKeys:(id)a0 examinedRecordsCount:(long long)a1 databaseQueryDuration:(double)a2 recordCount:(long long)a3 isDone:(BOOL)a4;

@end
