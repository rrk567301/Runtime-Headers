@class RBSProcessIdentity;

@interface RBSProcessHandlePredicateImpl : RBSProcessPredicateImpl {
    RBSProcessIdentity *_identity;
    int _pid;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (BOOL)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)processPredicate;
- (id)processIdentifier;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithHandle:(id)a0;

@end
