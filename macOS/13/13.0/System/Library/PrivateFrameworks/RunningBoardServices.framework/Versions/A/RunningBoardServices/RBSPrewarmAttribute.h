@class RBSProcessIdentity;

@interface RBSPrewarmAttribute : RBSAttribute

@property (readonly, nonatomic) RBSProcessIdentity *identity;
@property (readonly, nonatomic) double interval;

+ (id)attributeWithIdentity:(id)a0 interval:(double)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)_initWithidentity:(id)a0 interval:(double)a1;

@end
