@class NSSet;

@interface RBSCompoundAnyPredicate : RBSProcessPredicateImpl {
    NSSet *_predicates;
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
