@interface RBSProcessPlatformPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) int platform;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)initWithPlatform:(int)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)processPredicate;
- (id)description;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)matchesProcess:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
