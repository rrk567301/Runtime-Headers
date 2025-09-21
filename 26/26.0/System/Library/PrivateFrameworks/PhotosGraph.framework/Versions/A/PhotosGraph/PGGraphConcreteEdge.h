@class NSString, NSMutableDictionary;

@interface PGGraphConcreteEdge : PGGraphEdge {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    NSString *_label;
}

- (unsigned short)domain;
- (id)propertyForKey:(id)a0;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)propertyDictionary;
- (id)label;
- (BOOL)hasProperties;
- (void).cxx_destruct;
- (unsigned long long)propertiesCount;
- (id)propertyKeys;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end
