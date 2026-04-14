@class NSString, NSMutableDictionary;

@interface PGGraphConcreteNode : PGGraphNode {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    NSString *_label;
}

- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (BOOL)hasProperties;
- (id)UUID;
- (id)propertyDictionary;
- (id)label;
- (id)name;
- (unsigned short)domain;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (unsigned long long)propertiesCount;
- (id)propertyKeys;
- (id)_stringValueForPropertyWithKey:(id)a0;

@end
