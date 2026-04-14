@class NSString;

@interface RBSBaseMemoryGrant : RBSGrant

@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, nonatomic) unsigned char strength;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)grantWithActiveLimit;
+ (id)grantWithCategory:(id)a0 strength:(unsigned char)a1;

- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
