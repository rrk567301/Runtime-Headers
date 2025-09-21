@interface RBSProcessPlatformPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) int platform;

+ (char)supportsRBSXPCSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithPlatform:(int)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)processPredicate;

@end
