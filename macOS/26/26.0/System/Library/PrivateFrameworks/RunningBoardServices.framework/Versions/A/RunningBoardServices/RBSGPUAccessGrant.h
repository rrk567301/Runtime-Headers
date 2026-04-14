@interface RBSGPUAccessGrant : RBSGrant

@property (readonly, nonatomic) unsigned char role;

+ (id)grantWithRole:(unsigned char)a0;
+ (id)grant;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)description;
- (id)initWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithRole:(unsigned char)a0;

@end
