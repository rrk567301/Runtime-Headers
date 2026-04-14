@interface EMModifyHighImpactAction : EMMessageChangeAction

@property (readonly, nonatomic) unsigned long long highImpactChange;

+ (BOOL)supportsSecureCoding;

- (long long)signpostType;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageListItems:(id)a0 origin:(long long)a1 actor:(long long)a2 highImpactChange:(unsigned long long)a3;

@end
