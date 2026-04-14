@class NSString;

@interface RBSSavedEndowmentGrant : RBSGrant

@property (readonly, copy, nonatomic) NSString *endowmentNamespace;
@property (readonly, nonatomic) NSString *key;

+ (id)grantWithNamespace:(id)a0 key:(id)a1;

- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
