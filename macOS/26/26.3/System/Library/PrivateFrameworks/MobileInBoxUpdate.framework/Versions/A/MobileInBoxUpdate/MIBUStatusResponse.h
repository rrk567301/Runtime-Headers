@class NSString, MIBUDeviceStatus;

@interface MIBUStatusResponse : MIBUNFCResponse

@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) MIBUDeviceStatus *status;

- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)_deserialize:(id)a0;
- (id)_deserializeBatteryDetailsFromDict:(id)a0;
- (id)_deserializeFromTagDict:(id)a0 withKeyToTagMapping:(id)a1;
- (id)_deserializeOperationDetailsFromDict:(id)a0;
- (id)_deserializeThermalDetailsFromDict:(id)a0;
- (id)_reverseDict:(id)a0;
- (BOOL)_serializeBatteryDetailsWithSerializer:(id)a0;
- (BOOL)_serializeDict:(id)a0 fromKeyToTagMapping:(id)a1 withSerializer:(id)a2;
- (BOOL)_serializeOperationDetailsWithSerializer:(id)a0;
- (BOOL)_serializeThermalDetailsWithSerializer:(id)a0;

@end
