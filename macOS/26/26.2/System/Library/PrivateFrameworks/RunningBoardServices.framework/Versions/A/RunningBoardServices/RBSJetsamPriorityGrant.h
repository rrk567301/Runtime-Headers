@interface RBSJetsamPriorityGrant : RBSGrant

@property (readonly, nonatomic) unsigned long long band;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)grantWithBackgroundPriority;
+ (id)grantWithBand:(unsigned long long)a0;
+ (id)grantWithForegroundPriority;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)description;

@end
