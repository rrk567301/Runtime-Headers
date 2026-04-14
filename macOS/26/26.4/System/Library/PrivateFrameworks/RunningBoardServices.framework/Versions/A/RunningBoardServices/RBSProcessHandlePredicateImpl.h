@class RBSProcessIdentity;

@interface RBSProcessHandlePredicateImpl : RBSProcessPredicateImpl {
    RBSProcessIdentity *_identity;
    int _pid;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)initWithHandle:(id)a0;
- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)processIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
