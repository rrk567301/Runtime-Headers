@class NSString;

@interface RBSProcessPredicateImpl : NSObject <RBSProcessMatching, RBSXPCSecureCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsRBSXPCSecureCoding;

- (id)processIdentifier;
- (char)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)processIdentifiers;
- (id)processPredicate;

@end
