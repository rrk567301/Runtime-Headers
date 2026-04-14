@class NSString, NSDictionary, NSArray, ISDChange;

@interface ISyncConcreteChange : ISyncChange {
    int _type;
    NSString *_recordId;
    NSDictionary *_record;
    NSArray *_changes;
    int _clientNumber;
    ISDChange *_minglerChange;
}

- (void)dealloc;
- (id)copyWithZone:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)type;
- (id)changes;
- (id)record;
- (id)_entityName;
- (id)_clientId;
- (id)recordIdentifier;
- (void)setRecordIdentifier:(id)a0;
- (id)initWithChangeType:(int)a0 recordIdentifier:(id)a1 changes:(id)a2;
- (void)_setRecord:(id)a0;
- (id)_minglerChange;
- (int)clientNumber;
- (void)_setClientId:(id)a0;
- (id)_propertyChangeForName:(id)a0;
- (id)_propertyChangeNames;
- (void)setMinglerChange:(id)a0;

@end
