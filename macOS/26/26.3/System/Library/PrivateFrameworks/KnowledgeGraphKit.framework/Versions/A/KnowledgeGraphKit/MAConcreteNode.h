@class NSString, NSMutableDictionary;

@interface MAConcreteNode : MANode {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    float _weight;
    NSString *_label;
}

- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (BOOL)hasProperties;
- (id)propertyDictionary;
- (float)weight;
- (id)label;
- (unsigned short)domain;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;
- (unsigned long long)propertiesCount;
- (id)propertyKeys;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;

@end
