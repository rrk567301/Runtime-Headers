@class NSString;

@interface SKGNameKeyNode : SKGNode

@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;

+ (id)label;
+ (Class)edgeClass;
+ (id)nameKeyWithElementIdentifier:(unsigned long long)a0 inGraph:(id)a1;

- (id)propertyDictionary;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)initWithNameKey:(id)a0 firstName:(id)a1 lastName:(id)a2;

@end
