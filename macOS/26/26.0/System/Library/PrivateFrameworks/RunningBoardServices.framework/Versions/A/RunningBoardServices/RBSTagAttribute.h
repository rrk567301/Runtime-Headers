@class NSString;

@interface RBSTagAttribute : RBSAttribute

@property (readonly, copy, nonatomic) NSString *tag;

+ (id)attributeWithTag:(id)a0;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)description;
- (id)initWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
