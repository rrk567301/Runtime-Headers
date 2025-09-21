@class NSString;

@interface RBSBaseMemoryGrant : RBSGrant

@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, nonatomic) unsigned char strength;

+ (id)grantWithActiveLimit;
+ (id)grantWithCategory:(id)a0 strength:(unsigned char)a1;
+ (char)supportsRBSXPCSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
