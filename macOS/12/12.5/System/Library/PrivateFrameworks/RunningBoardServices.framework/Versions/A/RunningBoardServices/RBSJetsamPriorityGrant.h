@interface RBSJetsamPriorityGrant : RBSGrant

@property (readonly, nonatomic) unsigned long long band;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)grantWithBand:(unsigned long long)a0;
+ (id)grantWithForegroundPriority;
+ (id)grantWithBackgroundPriority;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
