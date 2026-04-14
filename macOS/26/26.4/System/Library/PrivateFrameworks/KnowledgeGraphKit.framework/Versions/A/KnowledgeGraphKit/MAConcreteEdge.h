@class NSString, NSMutableDictionary;

@interface MAConcreteEdge : MAEdge {
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
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;

@end
