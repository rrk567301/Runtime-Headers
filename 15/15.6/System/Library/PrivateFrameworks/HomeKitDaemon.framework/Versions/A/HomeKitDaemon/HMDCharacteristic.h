@class NSData, NSString, NSUUID, NSDate, NSSet, HMDHAPAccessory, NSDictionary, HMDService, HMDCharacteristicMetadata, NSMutableSet, NSNumber;

@interface HMDCharacteristic : HMFObject <HMDBulletinIdentifiers, HMFLogging, NSSecureCoding, HMFDumpState> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_notificationRegistrations;
}

@property (class, readonly) NSDictionary *currentTargetStateCharacteristicTypeMap;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *bulletinContext;
@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property (retain, nonatomic) NSSet *hapCharacteristicTuples;
@property (readonly, nonatomic) NSString *serializedIdentifier;
@property (retain, nonatomic) NSString *characteristicType;
@property (retain, nonatomic) id lastKnownValue;
@property (readonly, nonatomic) id previousValue;
@property (retain, nonatomic) NSDate *lastKnownValueUpdateTime;
@property (retain, nonatomic) NSNumber *characteristicInstanceID;
@property (nonatomic) long long characteristicProperties;
@property (readonly, copy, nonatomic) NSSet *notificationRegistrations;
@property (retain, nonatomic) NSDate *notificationEnabledTime;
@property (nonatomic) char notificationRegisteredWithRemoteGateway;
@property (retain, nonatomic) NSData *notificationContext;
@property (readonly, weak, nonatomic) HMDHAPAccessory *accessory;
@property (readonly, weak, nonatomic) HMDService *service;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSNumber *instanceID;
@property (readonly, nonatomic) long long properties;
@property (readonly, copy, nonatomic) id value;
@property (copy, nonatomic, setter=setStateNumber:) NSNumber *stateNumber;
@property (readonly, nonatomic) HMDCharacteristicMetadata *metadata;
@property (readonly, copy, nonatomic) NSUUID *spiClientIdentifier;
@property (readonly, copy, nonatomic) NSData *authorizationData;
@property char broadcastNotificationEnabled;
@property (readonly) char shouldIgnoreCacheValueForRead;
@property (readonly) char supportsNotificationContext;
@property (readonly, copy, nonatomic) NSNumber *changeThresholdForEnabledNotifications;
@property (readonly, copy, nonatomic) NSNumber *changeThresholdForNonHomeClientEnabledNotifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id /* block */)sortComparatorForCharacteristicDictionary;
+ (char)value:(id)a0 differentThan:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void)setPreviousValue:(id)a0;
- (char)updateWithDictionary:(id)a0;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)dumpState;
- (char)isNotificationEnabled;
- (void)unconfigure;
- (id)_initWithCoder:(id)a0;
- (id)validateValue:(id)a0 outValue:(id *)a1;
- (id)validateValueForWrite:(id)a0 outValue:(id *)a1;
- (id)_characteristicDictionaryWithAuthData:(char)a0;
- (long long)_characteristicPropertiesRelevantForCurrentUser:(long long)a0;
- (void)_encodeWithCoder:(id)a0;
- (id)characteristicForHAPAccessory:(id)a0;
- (id)characteristicTypeDescription;
- (id)clientIdentifiersWithNotificationsEnabled;
- (void)configureWithCharacteristic:(id)a0;
- (id)contextDataForWriteRequestWithIdentifier:(id)a0;
- (char)deregisterNotificationForClientIdentifier:(id)a0;
- (char)deregisterNotificationIfNotLastForClientIdentifier:(id)a0;
- (id)getCharacteristicDictionary;
- (id)getCharacteristicDictionaryForMigrationFixup;
- (void)getLastKnownValueUpdateTime:(id *)a0 stateNumber:(id *)a1 notificationContext:(id *)a2;
- (id)hapCharacteristicTupleWithIdentifier:(id)a0 linkType:(long long)a1;
- (id)initWithCharacteristic:(id)a0 service:(id)a1 accessory:(id)a2;
- (char)isClientNotificationEnabled;
- (char)isNonBulletinNotificationEnabled;
- (char)isNonClientNotificationEnabled;
- (char)isNonHomeNotificationsEnabled;
- (char)isNotificationEnabledForClientIdentifier:(id)a0;
- (char)isNotificationEnabledForClientIdentifierPrefix:(id)a0;
- (id)localClientIdentifiersWithNotificationsEnabled;
- (void)setNotificationEnabled:(char)a0 forClientIdentifier:(id)a1;
- (void)setNotificationEnabled:(char)a0 forClientIdentifier:(id)a1 changeThreshold:(id)a2;
- (char)setNotificationEnabled:(char)a0 forClientIdentifier:(id)a1 changeThreshold:(id)a2 removeLast:(char)a3;
- (char)shouldUpdateValueFromHAPCharacteristic:(id)a0;
- (char)supportsNotification;
- (char)supportsRead;
- (char)supportsWrite;
- (void)unconfigureForServerIdentifier:(id)a0 linkType:(long long)a1;
- (void)updateLastKnownValue;
- (void)updateValue:(id)a0 updatedTime:(id)a1 stateNumber:(id)a2 notificationContext:(id)a3;
- (id)validateValueForNotify:(id)a0 outValue:(id *)a1;

@end
