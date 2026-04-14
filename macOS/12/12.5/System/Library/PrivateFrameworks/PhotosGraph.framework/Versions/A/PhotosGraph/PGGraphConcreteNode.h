@class NSString, NSMutableDictionary;

@interface PGGraphConcreteNode : PGGraphNode {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    float _weight;
    NSString *_label;
}

- (id)name;
- (unsigned short)domain;
- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (id)UUID;
- (id)label;
- (float)weight;
- (unsigned long long)propertiesCount;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)propertyKeys;
- (BOOL)hasProperties;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)propertyDictionary;
- (id)_stringValueForPropertyWithKey:(id)a0;

@end
