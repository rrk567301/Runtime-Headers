@class NSNumber, NSDictionary, NSMutableDictionary;

@interface CHIPPluginProtocolMap : HMFObject

@property (readonly, nonatomic) NSNumber *version;
@property (readonly, nonatomic) NSNumber *schemaVersion;
@property (readonly, nonatomic) NSDictionary *rawPlist;
@property (readonly, nonatomic) NSMutableDictionary *hapToCHIPClusterMapping;
@property (readonly, nonatomic) NSDictionary *hapToCHIPClusterMappingArray;

+ (id)logCategory;
+ (id)protocolMap;
+ (id)linearMapForCharacteristic:(id)a0 value:(id)a1 fromRange:(id)a2 toRange:(id)a3;
+ (id)mapActiveState:(id)a0;
+ (id)mapFanMode:(id)a0;
+ (id)mapCurrentHeatingCoolingState:(id)a0;
+ (id)mapTargetHeatingCoolingState:(id)a0;
+ (id)mapCurrentSystemMode:(id)a0;
+ (id)mapOTAUpdateNotReadyReasonsState:(id)a0;
+ (id)mapOTAStagingNotReadyReasonsState:(id)a0;
+ (id)mapOTAUpdateState:(id)a0;
+ (id)mapTargetSystemMode:(id)a0;
+ (id)mapPositionState:(id)a0;
+ (BOOL)checkIfCharacteristicsIsOfTypeTemp:(id)a0;
+ (id)customMapReadForCharacteristic:(id)a0 value:(id)a1;
+ (id)customMapWriteForCharacteristic:(id)a0 value:(id)a1;
+ (id)customMapEventForCharacteristic:(id)a0 event:(id)a1 value:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)retrieveHAPToCHIPClusterMapping;
- (void)setHAPToCHIPClusterMapping:(id)a0 clusterID:(id)a1;
- (id)descriptionForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1;
- (id)_chipParamsDictionaryForOperationType:(unsigned long long)a0 operationDictionary:(id)a1 value:(id)a2;
- (id)_mtrClusterReadFunctionNameFromBaseClusterFunctionName:(id)a0;
- (id)_mtrClusterWriteFunctionNameFromBaseClusterFunctionName:(id)a0;
- (id)_chipClusterFunctionNameForOperationType:(unsigned long long)a0 operationDictionary:(id)a1 value:(id)a2 forMTRCluster:(BOOL)a3;
- (id)_protocolMapCharacteristicsKeyForOperationType:(unsigned long long)a0;
- (id)reportDescriptionForCharacteristic:(id)a0;
- (id)_characteristicDescriptionForCharacteristicWithUUID:(id)a0 characteristicsDict:(id)a1 chipClusterName:(id)a2 operationType:(unsigned long long)a3 value:(id)a4 forMTRCluster:(BOOL)a5;
- (id)_characteristicsDictionaryForCharacteristicUUID:(id)a0;
- (id)_characteristicsDictionaryForCharacteristic:(id)a0;
- (id)_descriptionForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1 value:(id)a2 forMTRCluster:(BOOL)a3;
- (id)descriptionForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1 value:(id)a2;
- (id)descriptionOfMTRClusterForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1 value:(id)a2;
- (BOOL)_isValidCharacteristicValue:(id)a0 value:(id)a1;
- (id)getUpdatedLinkedCharacteristics:(id)a0;
- (id /* block */)_buildValueMapper:(id)a0 characteristicsDict:(id)a1 operation:(unsigned long long)a2 forMTRCluster:(BOOL)a3;
- (id /* block */)_buildExpectedValueMapper:(id)a0 characteristicsDict:(id)a1 operation:(unsigned long long)a2 valueMapper:(id /* block */)a3;
- (id /* block */)_buildEventMapper:(id)a0 characteristicsDict:(id)a1;
- (id)requiredCharacteristicsForService:(id)a0;
- (id)optionalCharacteristicsForService:(id)a0;
- (id)categoriesForDeviceTypes:(id)a0;
- (id)servicesForDeviceTypes:(id)a0;
- (id)getIDForCharacteristic:(id)a0;
- (id)getRequiredFeaturesBitmapForCharacteristic:(id)a0;
- (id)getClusterClassForCharacteristic:(id)a0;
- (void)updateMetadataForCharacteristic:(id)a0 metadata:(id)a1 endpointID:(id)a2 topology:(id)a3;

@end
