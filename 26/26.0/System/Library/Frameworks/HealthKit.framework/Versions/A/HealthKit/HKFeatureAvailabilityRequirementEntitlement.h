@class NSString;

@interface HKFeatureAvailabilityRequirementEntitlement : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) id value;
@property (readonly, copy, nonatomic) NSString *detail;

+ (id)OSEligibilityPlistFilePathReadAccessEntitlement;
+ (id)bluetoothSystemAccessEntitlement;
+ (id)featureAvailabilityReadEntitlementForFeatureIdentifier:(id)a0;
+ (id)healthKitAccessEntitlement;
+ (id)machLookupGlobalNameForAppConduitdDeviceConnectionEntitlement;
+ (id)machLookupGlobalNameForBluetoothXPCEntitlement;
+ (id)mapLSDatabaseAccessEntitlement;
+ (id)mobileGestaltAllowedKeysToAccessDeviceInfoEntitlement;
+ (id)nanoRegistryGeneralAccessEntitlement;
+ (id)tccManagerAllServiceReadAccessEntitlement;
+ (id)userDefaultsAgeGatingDomainAccessEntitlement;
+ (id)userDefaultsCarouselDomainAccessEntitlement;
+ (id)userDefaultsDemoSettingsDomainAccessEntitlement;
+ (id)userDefaultsHealthSharedDomainReadWriteAccessEntitlement;
+ (id)userDefaultsNanolifestylePrivacyDomainReadWriteAccessEntitlement;
+ (id)userDefaultsRespiratoryDomainAccessEntitlement;
+ (id)userNotificationsBundleIdentifiersEntitlementForBundleIdentifier:(id)a0;
+ (id)userSettingsPlistFilePathReadAccessEntitlement;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 type:(long long)a1 value:(id)a2 detail:(id)a3;

@end
