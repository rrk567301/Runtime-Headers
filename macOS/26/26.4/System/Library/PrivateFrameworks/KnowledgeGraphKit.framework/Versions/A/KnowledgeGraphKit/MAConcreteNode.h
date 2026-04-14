@class NSString, NSMutableDictionary;

@interface MAConcreteNode : MANode {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    float _weight;
    NSString *_label;
}

- (float)weight;
- (id)propertyDictionary;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)propertyForKey:(id)a0;
- (unsigned short)domain;
- (id)label;
- (void).cxx_destruct;
- (BOOL)hasProperties;
- (unsigned long long)propertiesCount;
- (id)propertyKeys;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;

@end
