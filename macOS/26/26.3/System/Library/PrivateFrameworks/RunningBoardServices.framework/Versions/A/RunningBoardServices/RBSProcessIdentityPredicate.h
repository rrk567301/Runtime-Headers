@class RBSProcessIdentity;

@interface RBSProcessIdentityPredicate : RBSProcessPredicateImpl {
    RBSProcessIdentity *_identity;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (BOOL)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)processPredicate;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
