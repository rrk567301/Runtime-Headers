@class NSDictionary, NSArray;

@interface NSCompositeAttributeDescription : NSAttributeDescription {
    NSArray *_elements;
    NSDictionary *_elementsByName;
}

@property (readonly, nonatomic) NSDictionary *elementsByName;
@property (copy) NSArray *elements;

+ (BOOL)supportsSecureCoding;

- (void)setAttributeType:(unsigned long long)a0;
- (void)setDefaultValue:(id)a0;
- (unsigned long long)attributeType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_createCachesAndOptimizeState;
- (id)_initWithType:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithName:(id)a0 type:(unsigned long long)a1 withClassName:(id)a2;
- (unsigned long long)_propertyType;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (BOOL)isTransient;
- (id)_initWithName:(id)a0 type:(unsigned long long)a1;
- (id)init;
- (id)_initWithName:(id)a0;
- (id)description;
- (BOOL)_isSchemaEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTransient:(BOOL)a0;
- (void)_setEntityAndMaintainIndices:(id)a0;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;
- (void)dealloc;
- (void)_addElement:(id)a0;
- (id)_buildDefaultValue;
- (id)_flattenElements:(id)a0;
- (id)_flattenedElements;

@end
