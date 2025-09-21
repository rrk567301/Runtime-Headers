@class NSString, NSBundle;

@interface WFObjectType : WFType

@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSString *className;
@property (readonly, nonatomic) Class objectClass;
@property (readonly, copy, nonatomic) NSString *string;

+ (char)supportsSecureCoding;
+ (id)typeWithClass:(Class)a0;
+ (id)typeWithClassName:(id)a0 frameworkName:(id)a1 location:(unsigned long long)a2;
+ (id)typesWithClasses:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)conformsToType:(id)a0;
- (char)isEqualToClass:(Class)a0;
- (char)conformsToClass:(Class)a0;
- (id)initWithClassName:(id)a0 inBundle:(id)a1;
- (id)initWithObjectClass:(Class)a0;
- (char)isEqualToType:(id)a0;

@end
