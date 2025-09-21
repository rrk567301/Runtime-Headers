@class ISDPropertyValue;

@interface ISDPropertyChange : NSObject {
    ISDPropertyValue *_propertyValue;
    int _action;
}

+ (id)propertyChangeWithAction:(int)a0 propertyType:(int)a1 name:(id)a2 value:(id)a3 lastModifiedGeneration:(unsigned int)a4 clientId:(id)a5;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)value;
- (int)action;
- (int)propertyType;
- (id)clientId;
- (char)isDefaultValue;
- (void)setIsDefaultValue:(char)a0;
- (char)_valuesAreEqual:(id)a0;
- (void)encodeWithQuickDirtyCoder:(id)a0;
- (id)fastClientId;
- (id)fastName;
- (id)fastValue;
- (id)initWithAction:(int)a0 propertyType:(int)a1 name:(id)a2 value:(id)a3 lastModifiedGeneration:(unsigned int)a4 clientId:(id)a5;
- (id)initWithAction:(int)a0 propertyValue:(id)a1;
- (id)initWithQuickDirtyCoder:(id)a0;
- (int)isd_quickDirtyCoderType;
- (unsigned int)lastModifiedGeneration;
- (int)propertyCollectionType;
- (id)propertyValueInstance;
- (void)replaceRecordId:(id)a0 withRecordId:(id)a1;
- (void)replaceRelationshipTupleId:(id)a0 withRelationshipTupleId:(id)a1;

@end
