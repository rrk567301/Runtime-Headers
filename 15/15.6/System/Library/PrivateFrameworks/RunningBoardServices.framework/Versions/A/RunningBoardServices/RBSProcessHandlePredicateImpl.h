@class RBSProcessIdentity;

@interface RBSProcessHandlePredicateImpl : RBSProcessPredicateImpl {
    RBSProcessIdentity *_identity;
    int _pid;
}

+ (char)supportsRBSXPCSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)processIdentifier;
- (id)initWithHandle:(id)a0;
- (char)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)processPredicate;

@end
