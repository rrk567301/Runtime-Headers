@class IMDMessageRecordExporterState, IMDFilteredMessageCounts, IMDExportedMessageRecordBatchResult;

@interface IMDExportedMessageRecordBatch : IMDExportedRecordBatch

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) IMDMessageRecordExporterState *state;
@property (nonatomic, readonly) IMDFilteredMessageCounts *filterCounts;
@property (nonatomic, readonly) IMDExportedMessageRecordBatchResult *result;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithExaminedRecordsCount:(long long)a0 databaseQueryDuration:(double)a1 recordCount:(long long)a2 isDone:(BOOL)a3;
- (id)initWithState:(id)a0 examinedRecordsCount:(long long)a1 databaseQueryDuration:(double)a2 isDone:(BOOL)a3 filterCounts:(id)a4 result:(id)a5;

@end
