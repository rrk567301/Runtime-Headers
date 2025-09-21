@class NSString, NSMutableDictionary;

@interface PGGraphConcreteNode : PGGraphNode {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    NSString *_label;
}

- (id)UUID;
- (unsigned short)domain;
- (id)propertyForKey:(id)a0;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)propertyDictionary;
- (id)label;
- (BOOL)hasProperties;
- (id)name;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)propertiesCount;
- (id)propertyKeys;
- (id)_stringValueForPropertyWithKey:(id)a0;

@end
