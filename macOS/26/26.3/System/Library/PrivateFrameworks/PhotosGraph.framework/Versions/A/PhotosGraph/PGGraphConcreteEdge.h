@class NSString, NSMutableDictionary;

@interface PGGraphConcreteEdge : PGGraphEdge {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    NSString *_label;
}

- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (BOOL)hasProperties;
- (id)propertyDictionary;
- (id)label;
- (unsigned short)domain;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;
- (unsigned long long)propertiesCount;
- (id)propertyKeys;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end
