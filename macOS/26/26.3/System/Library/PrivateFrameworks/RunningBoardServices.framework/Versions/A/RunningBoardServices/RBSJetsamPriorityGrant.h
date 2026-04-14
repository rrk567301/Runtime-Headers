@interface RBSJetsamPriorityGrant : RBSGrant

@property (readonly, nonatomic) unsigned long long band;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)grantWithForegroundPriority;
+ (id)grantWithBand:(unsigned long long)a0;
+ (id)grantWithBackgroundPriority;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
