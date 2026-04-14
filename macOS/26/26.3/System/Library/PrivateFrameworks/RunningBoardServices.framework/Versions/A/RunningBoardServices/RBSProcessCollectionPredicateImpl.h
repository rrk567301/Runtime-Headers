@class NSSet;

@interface RBSProcessCollectionPredicateImpl : RBSProcessPredicateImpl {
    NSSet *_identifiers;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (BOOL)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)processPredicate;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifiers:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
