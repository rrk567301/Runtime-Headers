@class NSString, NSDictionary, NSData, NSArray, NSNumber;

@interface HAPMetadata : HMFObject

@property (class, copy) id /* block */ currentMetadataHook;

@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSNumber *schemaVersion;
@property (retain, nonatomic) NSString *hapBaseUUIDSuffix;
@property (retain, nonatomic) NSData *metadata;
@property (nonatomic) unsigned int hapUnitMapOffset;
@property (nonatomic) unsigned int hapPropertyMapOffset;
@property (nonatomic) unsigned int hapCharacteristicMapOffset;
@property (nonatomic) unsigned int hapCharacteristicShortUUIDToNameMapOffset;
@property (nonatomic) unsigned int hapServiceMapOffset;
@property (nonatomic) unsigned int hapServiceShortUUIDToNameMapOffset;
@property (nonatomic) unsigned int hapServiceBTLEShortUUIDToNameMapOffset;
@property (nonatomic) unsigned int hapSupportsAuthDataSetOffset;
@property (readonly, nonatomic) NSDictionary *rawPlist;
@property (readonly, nonatomic) NSArray *hapValueUnits;
@property (readonly, nonatomic) NSArray *hapProperties;
@property (readonly, nonatomic) NSArray *hapCharacteristics;
@property (readonly, nonatomic) NSArray *hapServices;
@property (readonly, nonatomic) NSArray *hapSupportsAuthDataTuples;

+ (id)getSharedInstance;
+ (id)shortenHAPType:(id)a0 baseUUIDSuffix:(id)a1;

- (id)generateDictionary;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)indexDictionary:(id)a0 keyPath:(id)a1;
- (id)parsePropertyMetadata:(id)a0 withType:(id)a1;
- (BOOL)isStandardHAPCharacteristic:(id)a0;
- (id)serviceTypeFromUTI:(id)a0;
- (id)parseCharacteristicServiceTupleMetadata:(id)a0 withCharacteristicName:(id)a1;
- (BOOL)isMandatoryCharacteristic:(id)a0 forService:(id)a1;
- (id)serviceUTIFromType:(id)a0;
- (id)hapCharacteristicFromName:(id)a0;
- (id)init;
- (id)parseServiceMetadata:(id)a0 withName:(id)a1;
- (BOOL)parseVersion:(id)a0;
- (BOOL)parseMetadata:(id)a0;
- (id)generateHAPMetadataTuplesDictionary:(id)a0;
- (id)characteristicValueUnitOfType:(id)a0;
- (id)hapUnitFromName:(id)a0;
- (id)parseServiceCharacteristics:(id)a0;
- (BOOL)isStandardHAPCharacteristicName:(id)a0;
- (id)characteristicTypesChangingTargetState;
- (id)serviceTypeToBTLE:(id)a0;
- (id)parseCharacteristicMetadata:(id)a0 withName:(id)a1;
- (id)getDefaultCharacteristicProperties:(id)a0;
- (id)getDefaultCharacteristicMetadata:(id)a0;
- (BOOL)validateMandatoryCharacteristics:(id)a0 forService:(id)a1;
- (BOOL)isStandardHAPServiceName:(id)a0;
- (id)descriptionFromServiceType:(id)a0;
- (id)parseCharacteristics:(id)a0;
- (void).cxx_destruct;
- (id)getDefaultServiceProperties:(id)a0;
- (id)characteristicTypeFromUTI:(id)a0;
- (id)hapServiceFromName:(id)a0;
- (id)characteristicUTIFromType:(id)a0;
- (BOOL)supportsAdditionalAuthorizationData:(id)a0 forService:(id)a1;
- (id)btleToServiceType:(id)a0;
- (id)parseUnitMetadata:(id)a0 withName:(id)a1;
- (id)descriptionFromCharacteristicType:(id)a0;
- (id)hapServiceFromType:(id)a0;
- (BOOL)allowAssociatedService:(id)a0;
- (BOOL)isStandardHAPUnitName:(id)a0;
- (BOOL)isStandardHAPService:(id)a0;
- (id)parseCharacteristicServiceTuples:(id)a0;
- (id)hapCharacteristicFromType:(id)a0;
- (id)parseCharacteristicValue:(id)a0;

@end
