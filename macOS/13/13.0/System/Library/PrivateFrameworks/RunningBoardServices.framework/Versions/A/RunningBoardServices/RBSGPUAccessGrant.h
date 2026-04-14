@interface RBSGPUAccessGrant : RBSGrant

@property (readonly, nonatomic) unsigned char role;

+ (id)grant;
+ (id)grantWithRole:(unsigned char)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)_initWithRole:(unsigned char)a0;

@end
