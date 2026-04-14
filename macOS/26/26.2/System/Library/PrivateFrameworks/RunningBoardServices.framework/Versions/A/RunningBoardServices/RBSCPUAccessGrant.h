@interface RBSCPUAccessGrant : RBSGrant

@property (readonly, nonatomic) unsigned char role;

+ (id)grantWithUserInteractivity;
+ (id)grantWithRole:(unsigned char)a0;
+ (id)grantWithUserInteractivityAndFocus;
+ (id)grant;
+ (id)grantUserInitiated;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)description;

@end
