@class RBSProcessIdentifier, NSString, RBSProcessIdentity;

@interface RBSProcessInstance : NSObject <RBSProcessMatching, RBSProcessIdentifier, NSCopying, RBSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RBSProcessIdentifier *identifier;
@property (readonly, nonatomic) RBSProcessIdentity *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithIdentifier:(id)a0 identity:(id)a1;
+ (BOOL)supportsRBSXPCSecureCoding;

- (int)rbs_pid;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)init;
- (id)processPredicate;
- (id)copyWithPersonaString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)matchesProcess:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
