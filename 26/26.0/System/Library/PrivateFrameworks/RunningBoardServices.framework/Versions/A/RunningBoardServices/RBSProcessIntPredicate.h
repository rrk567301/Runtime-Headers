@interface RBSProcessIntPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) unsigned long long identifier;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)initWithIdentifier:(unsigned long long)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)processPredicate;
- (id)description;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)matchesProcess:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
