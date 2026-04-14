@class NSString, NSDate;

@interface HDCloudSyncUpdateLastPullDateOperation : HDJournalableOperation

@property (retain, nonatomic) NSDate *pullCompleteDate;
@property (retain, nonatomic) NSString *lastSuccessfulPullKey;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPullCompleteDate:(id)a0 lastSuccessfulPullKey:(id)a1;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
