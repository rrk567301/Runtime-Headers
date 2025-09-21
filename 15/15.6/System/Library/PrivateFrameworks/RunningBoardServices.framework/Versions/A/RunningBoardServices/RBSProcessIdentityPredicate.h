@class RBSProcessIdentity;

@interface RBSProcessIdentityPredicate : RBSProcessPredicateImpl {
    RBSProcessIdentity *_identity;
}

+ (char)supportsRBSXPCSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)processPredicate;

@end
