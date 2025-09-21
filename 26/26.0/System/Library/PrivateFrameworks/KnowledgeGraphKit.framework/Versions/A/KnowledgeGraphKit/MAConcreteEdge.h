@class NSString, NSMutableDictionary;

@interface MAConcreteEdge : MAEdge {
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
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;

@end
