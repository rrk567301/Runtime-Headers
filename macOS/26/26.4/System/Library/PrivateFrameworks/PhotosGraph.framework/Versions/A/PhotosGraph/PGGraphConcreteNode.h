@class NSString, NSMutableDictionary;

@interface PGGraphConcreteNode : PGGraphNode {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    NSString *_label;
}

- (id)propertyDictionary;
- (id)name;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)propertyForKey:(id)a0;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (void).cxx_destruct;
- (BOOL)hasProperties;
- (id)UUID;
- (unsigned long long)propertiesCount;
- (id)propertyKeys;
- (id)_stringValueForPropertyWithKey:(id)a0;

@end
