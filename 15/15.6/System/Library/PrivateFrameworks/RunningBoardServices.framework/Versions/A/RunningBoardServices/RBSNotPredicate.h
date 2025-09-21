@class RBSProcessPredicateImpl;

@interface RBSNotPredicate : RBSProcessPredicateImpl {
    RBSProcessPredicateImpl *_predicate;
}

+ (char)supportsRBSXPCSecureCoding;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)processIdentifier;
- (char)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)processIdentifiers;

@end
