@interface RBSJetsamPriorityGrant : RBSGrant

@property (readonly, nonatomic) unsigned long long band;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)grantWithForegroundPriority;
+ (id)grantWithBackgroundPriority;
+ (id)grantWithBand:(unsigned long long)a0;

- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
