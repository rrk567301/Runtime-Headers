@class NSString;

@interface RBSTagAttribute : RBSAttribute

@property (readonly, copy, nonatomic) NSString *tag;

+ (id)attributeWithTag:(id)a0;

- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
