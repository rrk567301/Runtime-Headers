@class NSString;

@interface PKImageDescriptorSymbol : PKImageDescriptor

@property (readonly, nonatomic) NSString *name;

+ (char)supportsSecureCoding;
+ (id)createForName:(id)a0 withTintColor:(long long)a1;
+ (id)createForName:(id)a0 withTintColor:(long long)a1 hasBackground:(BOOL)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
