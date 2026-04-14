@class NSDictionary, NSString;

@interface IMDExportedRecordBatch : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ batchIterationKeys;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSDictionary *batchIterationKeys;
@property (nonatomic, readonly) long long examinedRecordsCount;
@property (nonatomic) BOOL isDone;
@property (nonatomic) double databaseQueryDuration;
@property (nonatomic, readonly) double recordsPerSecond;
@property (nonatomic) long long recordCount;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBatchIterationKeys:(id)a0 examinedRecordsCount:(long long)a1 databaseQueryDuration:(double)a2 recordCount:(long long)a3 isDone:(BOOL)a4;

@end
