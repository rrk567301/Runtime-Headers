@class NSSet;

@interface RBSProcessCollectionPredicateImpl : RBSProcessPredicateImpl {
    NSSet *_identifiers;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)initWithIdentifiers:(id)a0;
- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
