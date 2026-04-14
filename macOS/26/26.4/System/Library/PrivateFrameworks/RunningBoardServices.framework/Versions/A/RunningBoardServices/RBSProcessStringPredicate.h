@class NSString;

@interface RBSProcessStringPredicate : RBSProcessPredicateImpl

@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
