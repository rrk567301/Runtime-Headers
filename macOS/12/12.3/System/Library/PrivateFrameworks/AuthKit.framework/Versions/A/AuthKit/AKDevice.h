@class NSString, NSURL, NSData, NSNumber, NSLocale;

@interface AKDevice : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    BOOL _shouldUpdateUniqueDeviceIdentifier;
    BOOL _shouldUpdateServerFriendlyDescription;
    BOOL _shouldUpdateColor;
    BOOL _shouldUpdateEnclosureColor;
    BOOL _shouldUpdateCoverGlassColor;
    BOOL _shouldUpdateHousingColor;
    BOOL _shouldUpdateBackingColor;
    BOOL _shouldUpdateLocale;
    BOOL _shouldUpdateROMAddress;
    BOOL _shouldUpdateMLBSerialNumber;
    BOOL _shouldUpdateModelNumber;
    BOOL _shouldUpdateProvisioningDeviceIdentifier;
}

@property (class, readonly, copy) NSURL *systemContainerURL;
@property (class, readonly, copy) NSURL *systemContainerCacheURL;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *serialNumber;
@property (readonly) NSString *userChosenName;
@property (readonly) NSString *userFullName;
@property (readonly) NSString *internationalMobileEquipmentIdentity;
@property (readonly) NSString *internationalMobileEquipmentIdentity2;
@property (readonly) BOOL isProtectedWithPasscode;
@property (readonly) BOOL isBiometricAuthCapable;
@property (readonly) BOOL isFaceIDCapable;
@property (readonly) BOOL isUnlocked;
@property (readonly) BOOL isInCircle;
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *mobileEquipmentIdentifier;
@property (readonly) NSString *integratedCircuitCardIdentifier;
@property (readonly) BOOL isInternalBuild;
@property (readonly) BOOL isMultiUserMode;
@property (readonly) NSData *serializedData;
@property (copy, nonatomic) NSString *serverFriendlyDescription;
@property (copy, nonatomic) NSString *uniqueDeviceIdentifier;
@property (copy, nonatomic) NSString *provisioningDeviceIdentifier;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *enclosureColor;
@property (copy, nonatomic) NSNumber *coverGlassColor;
@property (copy, nonatomic) NSNumber *housingColor;
@property (copy, nonatomic) NSNumber *backingColor;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *MLBSerialNumber;
@property (copy, nonatomic) NSString *ROMAddress;
@property (copy, nonatomic) NSString *modelNumber;
@property (setter=setLinkType:) unsigned long long linkType;
@property (readonly) NSString *localUserUUID;

+ (id)currentDevice;
+ (long long)currentDeviceAuthenticationMode;
+ (long long)currentDeviceAuthenticationModeForAuthContext:(id)a0;
+ (id)_hardwareModel;
+ (id)_osName;
+ (id)_osVersion;
+ (id)_buildNumber;
+ (id)_systemVersionDictionary;
+ (long long)_currentDeviceAuthenticationMode;
+ (id)activeIDSPeerDevice;
+ (id)deviceWithSerializedData:(id)a0;
+ (id)_generateAuthInfoKey:(const char *)a0;
+ (id)_dataForNVRAMKey:(id)a0;
+ (id)_hexAddressDescriptionForData:(id)a0;
+ (id)_nvramStyleDescriptionForData:(id)a0;
+ (id)_serverFriendlyDeviceColorForArea:(struct __CFString { } *)a0;
+ (id)deviceSpecificLocalizedStringWithKey:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_setShouldUpdateToValue:(BOOL)a0;
- (id)_appleSiliconROMAddress;
- (id)_uniqueChipID;
- (id)_volumeGroupUUID;
- (BOOL)currentUserIsLocal;

@end
