@class NSString;

@interface RBSBaseMemoryGrant : RBSGrant

@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, nonatomic) unsigned char strength;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)grantWithCategory:(id)a0 strength:(unsigned char)a1;
+ (id)grantWithActiveLimit;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
