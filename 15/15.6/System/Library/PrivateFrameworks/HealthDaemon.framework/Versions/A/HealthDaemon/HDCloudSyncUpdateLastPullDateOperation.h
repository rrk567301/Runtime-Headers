@class NSString, NSDate;

@interface HDCloudSyncUpdateLastPullDateOperation : HDJournalableOperation

@property (retain, nonatomic) NSDate *pullCompleteDate;
@property (retain, nonatomic) NSString *lastSuccessfulPullKey;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPullCompleteDate:(id)a0 lastSuccessfulPullKey:(id)a1;
- (char)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
