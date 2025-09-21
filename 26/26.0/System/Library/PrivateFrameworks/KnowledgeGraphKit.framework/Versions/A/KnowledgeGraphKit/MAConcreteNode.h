@class NSString, NSMutableDictionary;

@interface MAConcreteNode : MANode {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    float _weight;
    NSString *_label;
}

- (float)weight;
- (unsigned short)domain;
- (id)propertyForKey:(id)a0;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)propertyDictionary;
- (id)label;
- (BOOL)hasProperties;
- (void).cxx_destruct;
- (unsigned long long)propertiesCount;
- (id)propertyKeys;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;

@end
