@class NSArray;

@interface _HDOntologyFeatureCoordinatorRequireOperation : HDJournalableOperation {
    NSArray *_items;
}

+ (char)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)transactionContext;

@end
