@class NSString;

@interface IMDExportedRecordBatch : NSObject <NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long examinedRecordsCount;
@property (nonatomic) BOOL isDone;
@property (nonatomic) double databaseQueryDuration;
@property (nonatomic, readonly) double recordsPerSecond;
@property (nonatomic) long long recordCount;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithExaminedRecordsCount:(long long)a0 databaseQueryDuration:(double)a1 recordCount:(long long)a2 isDone:(BOOL)a3;

@end
