@class NSString;

@interface RBSConditionAttribute : RBSAttribute

@property (readonly, copy, nonatomic) NSString *condition;
@property (readonly, nonatomic) long long value;

+ (id)attributeWithCondition:(id)a0 value:(long long)a1;

- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
