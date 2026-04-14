@class NSSet;

@interface RBSProcessBundleIdentifiersPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) NSSet *identifiers;

+ (BOOL)supportsRBSXPCSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)matchesProcess:(id)a0;
- (id)processPredicate;
- (id)initWithIdentifiers:(id)a0;

@end
