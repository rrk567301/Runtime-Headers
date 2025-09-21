@class NSString, NSDictionary, NSSet, NSArray, NSNumber, NSMutableArray;

@interface HAPMetadata : HMFObject

@property (class, copy) id /* block */ currentMetadataHook;

@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSNumber *schemaVersion;
@property (retain, nonatomic) NSString *hapBaseUUIDSuffix;
@property (retain, nonatomic) NSMutableArray *parsedUUIDs;
@property (retain, nonatomic) NSDictionary *hapUnitMap;
@property (retain, nonatomic) NSDictionary *hapPropertyMap;
@property (retain, nonatomic) NSDictionary *hapCharacteristicMap;
@property (retain, nonatomic) NSDictionary *hapServiceMap;
@property (retain, nonatomic) NSSet *hapSupportsAuthDataSet;
@property (retain, nonatomic) NSDictionary *hapCharacteristicNameTypeMap;
@property (retain, nonatomic) NSDictionary *hapServiceNameTypeMap;
@property (readonly, nonatomic) NSDictionary *rawPlist;
@property (readonly, nonatomic) NSArray *hapValueUnits;
@property (readonly, nonatomic) NSArray *hapProperties;
@property (readonly, nonatomic) NSArray *hapCharacteristics;
@property (readonly, nonatomic) NSArray *hapServices;
@property (readonly, nonatomic) NSArray *hapSupportsAuthDataTuples;

+ (id)getSharedInstance;
+ (id)shortenHAPType:(id)a0 baseUUIDSuffix:(id)a1;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (char)allowAssociatedService:(id)a0;
- (id)btleToServiceType:(id)a0;
- (id)characteristicTypeFromUTI:(id)a0;
- (id)characteristicTypesChangingTargetState;
- (id)characteristicUTIFromType:(id)a0;
- (id)characteristicValueUnitOfType:(id)a0;
- (id)descriptionFromCharacteristicType:(id)a0;
- (id)descriptionFromServiceType:(id)a0;
- (id)generateDictionary;
- (id)generateHAPMetadataTuplesDictionary:(id)a0;
- (id)getDefaultCharacteristicMetadata:(id)a0;
- (id)getDefaultCharacteristicProperties:(id)a0;
- (id)getDefaultServiceProperties:(id)a0;
- (id)hapCharacteristicFromName:(id)a0;
- (id)hapCharacteristicFromType:(id)a0;
- (id)hapServiceFromName:(id)a0;
- (id)hapServiceFromType:(id)a0;
- (id)hapUnitFromName:(id)a0;
- (id)initWithServices:(id)a0 characteristics:(id)a1 units:(id)a2 properties:(id)a3 addAuthDataTuples:(id)a4 hapBaseUUIDSuffix:(id)a5;
- (char)isMandatoryCharacteristic:(id)a0 forService:(id)a1;
- (char)isStandardHAPCharacteristic:(id)a0;
- (char)isStandardHAPCharacteristicName:(id)a0;
- (char)isStandardHAPService:(id)a0;
- (char)isStandardHAPServiceName:(id)a0;
- (char)isStandardHAPUnitName:(id)a0;
- (id)parseCharacteristicServiceTuples:(id)a0;
- (id)parseCharacteristicValue:(id)a0;
- (id)parseCharacteristics:(id)a0;
- (char)parseMetadata:(id)a0;
- (id)parseProperties:(id)a0;
- (id)parseServiceCharacteristics:(id)a0;
- (id)parseServices:(id)a0;
- (id)parseUnits:(id)a0;
- (char)parseVersion:(id)a0;
- (id)serviceTypeFromUTI:(id)a0;
- (id)serviceTypeToBTLE:(id)a0;
- (id)serviceUTIFromType:(id)a0;
- (char)supportsAdditionalAuthorizationData:(id)a0 forService:(id)a1;
- (char)updateRawPlist;
- (char)validateMandatoryCharacteristics:(id)a0 forService:(id)a1;

@end
