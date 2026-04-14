@class NSSet;

@interface RBSCompoundAllPredicate : RBSProcessPredicateImpl {
    NSSet *_predicates;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)processIdentifier;
- (id)processIdentifiers;
- (id)description;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)matchesProcess:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
