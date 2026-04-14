@class NSString;

@interface RBSProcessPredicateImpl : NSObject <RBSProcessMatching, RBSXPCSecureCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)processIdentifier;
- (id)processPredicate;
- (id)processIdentifiers;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)matchesProcess:(id)a0;

@end
