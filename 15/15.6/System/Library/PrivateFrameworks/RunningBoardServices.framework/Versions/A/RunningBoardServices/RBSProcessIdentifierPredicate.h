@protocol RBSProcessIdentifier;

@interface RBSProcessIdentifierPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) id<RBSProcessIdentifier> identifier;

+ (char)supportsRBSXPCSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (char)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)processPredicate;

@end
