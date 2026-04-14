@interface RBSCPUAccessGrant : RBSGrant

@property (readonly, nonatomic) unsigned char role;

+ (id)grantWithRole:(unsigned char)a0;
+ (id)grantWithUserInteractivityAndFocus;
+ (id)grantWithUserInteractivity;
+ (id)grant;
+ (id)grantUserInitiated;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
