@interface HDJournalableOperation : HDJournalEntry <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL didJournal;

+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)performOrJournalWithProfile:(id)a0 error:(id *)a1;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)transactionContext;

@end
