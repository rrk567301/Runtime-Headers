@class NSSet;

@interface RBSCompoundAllPredicate : RBSProcessPredicateImpl {
    NSSet *_predicates;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)processIdentifiers;
- (BOOL)matchesProcess:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)processIdentifier;
- (void).cxx_destruct;
- (id)description;

@end
