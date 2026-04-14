@class NSSet;

@interface RBSProcessCollectionPredicateImpl : RBSProcessPredicateImpl {
    NSSet *_identifiers;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithIdentifiers:(id)a0;
- (id)processPredicate;
- (id)description;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)matchesProcess:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
