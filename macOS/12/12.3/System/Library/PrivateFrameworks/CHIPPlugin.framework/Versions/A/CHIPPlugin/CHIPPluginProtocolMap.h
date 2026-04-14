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

- (id)init;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)accessoryNameForCategory:(id)a0;
- (id)servicesForCategory:(id)a0 vendorID:(id)a1 productID:(id)a2;
- (id)descriptionForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1 value:(id)a2;
- (id)servicesForDeviceTypes:(id)a0;
- (id)requiredCharacterisiticsForService:(id)a0;
- (id)optionalCharacterisiticsForService:(id)a0;
- (id)getUpdatedLinkedCharacteristics:(id)a0;
- (id)retrieveHAPToCHIPClusterMapping;
- (id)_protocolMapCharacteristicsKeyForOperationType:(unsigned long long)a0;
- (id)_chipClusterFunctionNameForOperationType:(unsigned long long)a0 operationDictionary:(id)a1 value:(id)a2;
- (id /* block */)_buildValueMapper:(id)a0 characteristicsDict:(id)a1 operation:(unsigned long long)a2;
- (id)_chipParamsDictionaryForOperationType:(unsigned long long)a0 operationDictionary:(id)a1 value:(id)a2;
- (id)_characteristicsDictionaryForCharacteristicUUID:(id)a0;
- (id)_characteristicDescriptionForCharacteristicWithUUID:(id)a0 characteristicsDict:(id)a1 chipClusterName:(id)a2 operationType:(unsigned long long)a3 value:(id)a4;
- (id)_categoryDetails:(id)a0;
- (void)createHAPService:(id)a0 services:(id)a1 serviceDescription:(id)a2;
- (id)descriptionForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1;

@end
