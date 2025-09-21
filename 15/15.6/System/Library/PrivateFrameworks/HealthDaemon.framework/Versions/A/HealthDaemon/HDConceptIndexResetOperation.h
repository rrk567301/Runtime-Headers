@interface HDConceptIndexResetOperation : HDJournalableOperation

+ (char)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
