@class NSMutableDictionary;

@interface BSAbstractDefaultDomainClassMetadata : NSObject {
    Class _clazz;
    NSMutableDictionary *_propertyNameToPropertyMap;
    NSMutableDictionary *_selectorToPropertyMap;
}

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
