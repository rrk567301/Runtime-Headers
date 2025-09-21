@interface RBSProcessIntPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) unsigned long long identifier;

+ (char)supportsRBSXPCSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0;
- (char)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)processPredicate;

@end
