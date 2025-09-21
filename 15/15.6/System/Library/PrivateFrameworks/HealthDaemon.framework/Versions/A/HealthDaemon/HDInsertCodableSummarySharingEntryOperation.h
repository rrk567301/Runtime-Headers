@class NSArray;

@interface HDInsertCodableSummarySharingEntryOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSArray *codableEntries;
@property (readonly, nonatomic) long long provenance;
@property (readonly, nonatomic) char shouldResolveCNContact;
@property (readonly, nonatomic) char ignoreIfExists;

+ (char)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCodableEntries:(id)a0 ignoreIfExists:(char)a1 provenance:(long long)a2 shouldResolveCNContact:(char)a3;
- (char)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
