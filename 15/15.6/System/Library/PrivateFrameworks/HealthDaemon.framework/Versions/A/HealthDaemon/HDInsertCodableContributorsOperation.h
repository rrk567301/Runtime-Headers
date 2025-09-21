@class NSArray;

@interface HDInsertCodableContributorsOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSArray *contributors;
@property (readonly, nonatomic) long long provenance;

+ (char)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContributors:(id)a0 provenance:(long long)a1;
- (char)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
