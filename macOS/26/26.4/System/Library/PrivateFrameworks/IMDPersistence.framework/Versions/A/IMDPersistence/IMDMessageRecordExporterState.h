@class NSDictionary, NSIndexSet;

@interface IMDMessageRecordExporterState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *batchIterationKeys;
@property (readonly, nonatomic) NSIndexSet *prematureExportSuppressions;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBatchIterationKeys:(id)a0 prematureExportSuppressions:(id)a1;

@end
