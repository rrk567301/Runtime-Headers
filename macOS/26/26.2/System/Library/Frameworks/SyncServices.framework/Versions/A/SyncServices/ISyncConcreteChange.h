@class NSString, NSDictionary, NSArray, ISDChange;

@interface ISyncConcreteChange : ISyncChange {
    int _type;
    NSString *_recordId;
    NSDictionary *_record;
    NSArray *_changes;
    int _clientNumber;
    ISDChange *_minglerChange;
}

- (void)setRecordIdentifier:(id)a0;
- (id)record;
- (id)changes;
- (id)initWithCoder:(id)a0;
- (id)recordIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(id)a0;
- (int)type;
- (id)_entityName;
- (void)dealloc;
- (id)_clientId;
- (id)_minglerChange;
- (id)_propertyChangeForName:(id)a0;
- (id)_propertyChangeNames;
- (void)_setClientId:(id)a0;
- (void)_setRecord:(id)a0;
- (int)clientNumber;
- (id)initWithChangeType:(int)a0 recordIdentifier:(id)a1 changes:(id)a2;
- (void)setMinglerChange:(id)a0;

@end
