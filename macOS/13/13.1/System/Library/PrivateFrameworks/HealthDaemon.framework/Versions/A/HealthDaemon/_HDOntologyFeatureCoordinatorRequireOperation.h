@class NSArray;

@interface _HDOntologyFeatureCoordinatorRequireOperation : HDJournalableOperation {
    NSArray *_items;
}

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
