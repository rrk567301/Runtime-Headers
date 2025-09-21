@class NSString;

@interface RBSProcessStringPredicate : RBSProcessPredicateImpl

@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)processPredicate;
- (id)description;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)matchesProcess:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
