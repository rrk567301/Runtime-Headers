@class NSSet;

@interface RBSCompoundAnyPredicate : RBSProcessPredicateImpl {
    NSSet *_predicates;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (BOOL)matchesProcess:(id)a0;
- (id)processIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)processIdentifiers;
- (id)initWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)description;

@end
