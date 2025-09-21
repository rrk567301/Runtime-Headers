@class CBService, NSArray, NSString, HAPAccessory, NSNumber;

@interface HAPService : HMFObject <NSCopying, HMFMerging>

@property (retain, nonatomic, setter=setCBService:) CBService *cbService;
@property (retain, nonatomic) NSArray *linkedServices;
@property (nonatomic) unsigned long long serviceProperties;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSNumber *instanceID;
@property (weak, nonatomic) HAPAccessory *accessory;
@property (retain, nonatomic) NSArray *characteristics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)hap2_mergeServices:(id)a0 discoveredServices:(id)a1 mergedServices:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToService:(id)a0;
- (char)mergeObject:(id)a0;
- (char)shouldMergeObject:(id)a0;
- (id)propertiesDescription;
- (char)_validateServiceCharacteristics;
- (char)_updateCharacteristic:(id)a0;
- (char)_validateMandatoryCharacteristics;
- (id)characteristicsOfType:(id)a0;
- (char)hap2_mergeWithService:(id)a0;
- (id)initWithType:(id)a0 instanceID:(id)a1;
- (id)initWithType:(id)a0 instanceID:(id)a1 parsedCharacteristics:(id)a2 serviceProperties:(unsigned long long)a3 linkedServices:(id)a4;
- (char)updateAndValidateCharacteristics;

@end
