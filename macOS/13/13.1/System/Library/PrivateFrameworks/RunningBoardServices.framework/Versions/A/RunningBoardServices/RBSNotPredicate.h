@class RBSProcessPredicateImpl;

@interface RBSNotPredicate : RBSProcessPredicateImpl {
    RBSProcessPredicateImpl *_predicate;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)processIdentifier;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)matchesProcess:(id)a0;
- (id)processIdentifiers;

@end
