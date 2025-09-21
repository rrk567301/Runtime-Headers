@interface HDJournalableOperation : HDJournalEntry <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char didJournal;

+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (char)performOrJournalWithProfile:(id)a0 error:(id *)a1;
- (char)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)transactionContext;

@end
