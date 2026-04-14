@class NSNumber, NSDictionary;

@interface CHIPPluginProtocolMap : HMFObject

@property (readonly, nonatomic) NSNumber *version;
@property (readonly, nonatomic) NSNumber *schemaVersion;
@property (readonly, nonatomic) NSDictionary *rawPlist;
@property (readonly, nonatomic) NSDictionary *hapToCHIPClusterMapping;

+ (id)logCategory;
+ (id)protocolMap;
+ (id)linearMapForCharacteristic:(id)a0 value:(id)a1 fromRange:(id)a2 toRange:(id)a3;
+ (id)customMapReadForCharacteristic:(id)a0 value:(id)a1;
+ (id)customMapWriteForCharacteristic:(id)a0 value:(id)a1;
+ (id)mapCurrentHeatingCoolingState:(id)a0;
+ (id)mapCurrentSystemMode:(id)a0;
+ (id)mapTargetSystemMode:(id)a0;
+ (id)mapTargetHeatingCoolingState:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)descriptionForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1 value:(id)a2;
- (id)requiredCharacterisiticsForService:(id)a0;
- (id)optionalCharacterisiticsForService:(id)a0;
- (id)servicesForDeviceTypes:(id)a0;
- (id)categoriesForDeviceTypes:(id)a0;
- (id)reportDescriptionForCharacteristic:(id)a0;
- (id)getUpdatedLinkedCharacteristics:(id)a0;
- (id)retrieveHAPToCHIPClusterMapping;
- (id)_characteristicsDictionaryForCharacteristicUUID:(id)a0;
- (id /* block */)_buildValueMapper:(id)a0 characteristicsDict:(id)a1 operation:(unsigned long long)a2;
- (id)_chipClusterFunctionNameForOperationType:(unsigned long long)a0 operationDictionary:(id)a1 value:(id)a2;
- (id)_protocolMapCharacteristicsKeyForOperationType:(unsigned long long)a0;
- (id)_chipParamsDictionaryForOperationType:(unsigned long long)a0 operationDictionary:(id)a1 value:(id)a2;
- (id)_characteristicDescriptionForCharacteristicWithUUID:(id)a0 characteristicsDict:(id)a1 chipClusterName:(id)a2 operationType:(unsigned long long)a3 value:(id)a4;
- (id)descriptionForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1;

@end
