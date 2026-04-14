@interface RBSCPUAccessGrant : RBSGrant

@property (readonly, nonatomic) unsigned char role;

+ (id)grant;
+ (id)grantWithRole:(unsigned char)a0;
+ (id)grantUserInitiated;
+ (id)grantWithUserInteractivity;
+ (id)grantWithUserInteractivityAndFocus;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
