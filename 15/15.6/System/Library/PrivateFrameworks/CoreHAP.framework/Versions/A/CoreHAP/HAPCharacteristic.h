@class CBCharacteristic, NSString, NSData, HAPService, NSDate, NSNumber, HAPCharacteristicMetadata;

@interface HAPCharacteristic : HMFObject <HAP2CharacteristicTupleValue, HMFMerging, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic, setter=setCBCharacteristic:) CBCharacteristic *cbCharacteristic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSNumber *instanceID;
@property (weak, nonatomic) HAPService *service;
@property (nonatomic) unsigned long long properties;
@property (nonatomic) char eventNotificationsEnabled;
@property (copy, nonatomic) HAPCharacteristicMetadata *metadata;
@property (readonly, nonatomic) HAPCharacteristicMetadata *accessoryMetadata;
@property (retain, nonatomic) NSDate *valueUpdatedTime;
@property (nonatomic) char shouldValidateValueAfterReading;
@property (readonly, nonatomic, getter=isWriteWithResponseImplicitlySupported) char implicitWriteWithResponse;
@property (copy, nonatomic, setter=setValue:) id value;
@property (readonly, nonatomic) NSNumber *stateNumber;
@property (readonly, nonatomic) char supportsAdditionalAuthorizationData;
@property (readonly, nonatomic) char supportsWriteWithResponse;
@property (nonatomic) char prohibitCaching;
@property (readonly, nonatomic) char supportsEventNotificationContext;
@property (retain, nonatomic) NSData *notificationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hap2_shortTypeFromUUID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (char)mergeObject:(id)a0;
- (char)shouldMergeObject:(id)a0;
- (id)propertiesDescription;
- (void)setStateNumber:(id)a0;
- (id)_generateValidMetadata:(id)a0;
- (void)_updateMetadata:(id)a0 withProvidedMetadata:(id)a1;
- (char)hap2_canUseCachedValue;
- (char)hap2_mergeWithCharacteristic:(id)a0;
- (id)initWithType:(id)a0 instanceID:(id)a1 value:(id)a2 stateNumber:(id)a3 properties:(unsigned long long)a4 eventNotificationsEnabled:(char)a5 implicitWriteWithResponse:(char)a6 metadata:(id)a7;
- (id)initWithType:(id)a0 instanceID:(id)a1 value:(id)a2 stateNumber:(id)a3 properties:(unsigned long long)a4 eventNotificationsEnabled:(char)a5 metadata:(id)a6;
- (char)isEqualToCharacteristic:(id)a0;
- (id)validateValue:(id)a0 outValue:(id *)a1;

@end
