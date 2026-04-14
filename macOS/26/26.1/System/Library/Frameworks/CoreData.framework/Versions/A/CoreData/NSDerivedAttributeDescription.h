@class NSExpression, NSPredicate;

@interface NSDerivedAttributeDescription : NSAttributeDescription {
    NSExpression *_derivationExpression;
    NSPredicate *_filteringPredicate;
}

@property (retain) NSExpression *derivationExpression;

+ (BOOL)supportsSecureCoding;

- (void)_createCachesAndOptimizeState;
- (void)setDefaultValue:(id)a0;
- (void)setReadOnly:(BOOL)a0;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;
- (BOOL)isReadOnly;
- (unsigned long long)_propertyType;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (BOOL)_isSchemaEqual:(id)a0;
- (void)setRenamingIdentifier:(id)a0;
- (BOOL)isTransient;
- (void)setTransient:(BOOL)a0;
- (id)filteringPredicate;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (void)setFilteringPredicate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
