@class RBSProcessIdentity;

@interface RBSProcessHandlePredicateImpl : RBSProcessPredicateImpl {
    RBSProcessIdentity *_identity;
    int _pid;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)processIdentifier;
- (id)processPredicate;
- (id)description;
- (id)initWithHandle:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)matchesProcess:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
