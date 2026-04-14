@protocol RBSProcessIdentifier;

@interface RBSProcessIdentifierPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) id<RBSProcessIdentifier> identifier;

+ (BOOL)supportsRBSXPCSecureCoding;

- (BOOL)matchesProcess:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)processPredicate;
- (id)description;

@end
