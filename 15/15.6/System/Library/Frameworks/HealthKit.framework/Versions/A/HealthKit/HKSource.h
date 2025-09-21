@class NSString, NSNumber, NSDate;

@interface HKSource : NSObject <NSSecureCoding, NSCopying> {
    NSString *_name;
    NSString *_bundleIdentifier;
    NSDate *_modificationDate;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic, getter=_owningAppBundleIdentifier, setter=_setOwningAppBundleIdentifier:) NSString *owningAppBundleIdentifier;
@property (retain, nonatomic, getter=_sourceID, setter=_setSourceID:) NSNumber *sourceID;
@property (nonatomic, getter=_isLocalDevice, setter=_setLocalDevice:) char localDevice;
@property (copy, nonatomic, getter=_productType, setter=_setProductType:) NSString *productType;
@property (nonatomic, getter=_options, setter=_setOptions:) unsigned long long options;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly) NSString *name;
@property (readonly) NSString *bundleIdentifier;

+ (id)defaultSource;
+ (char)_isPlaceholderBundleIdentifier:(id)a0;
+ (id)_blePeripheralSource;
+ (id)_connectedGymSource;
+ (id)_currentSourceProductType:(char)a0;
+ (id)_generateIdentifierForAppleDevice;
+ (id)_generateIdentifierForAppleDeviceWithUUID:(id)a0;
+ (id)_localDeviceSource;
+ (id)_privateSourceForClinicalAccountIdentifier:(id)a0 name:(id)a1;
+ (id)_publicSourceForClinicalExternalIdentifier:(id)a0 name:(id)a1;
+ (char)_representsCurrentDeviceWithBundleIdentifier:(id)a0;
+ (id)_researchStudiesDirectoryURL;
+ (id)_sourceBundleIdentifierWithEntitlements:(id)a0 processBundleIdentifier:(id)a1 isExtension:(char)a2;
+ (id)_sourceNameWithRepresentsCurrentDevice:(char)a0 defaultSource:(char)a1;
+ (unsigned long long)_sourceOptionsForAppEntitlements:(id)a0;
+ (id)_sourceWithBundleIdentifier:(id)a0 defaultBundleIdentifier:(id)a1 appEntitlements:(id)a2 name:(id)a3;
+ (id)_sourceWithBundleIdentifier:(id)a0 name:(id)a1 productType:(id)a2 options:(unsigned long long)a3;
+ (id)_uncachedDefaultSource;
+ (id)_uncachedDefaultSourceWithEntitlements:(id)a0;
+ (char)isAppleDeviceBundleIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (char)_isHidden;
- (void)_setBundleIdentifier:(id)a0;
- (void)_setName:(id)a0;
- (char)_requiresAuthorization;
- (void)_setModificationDate:(id)a0;
- (id)asJSONObject;
- (char)_isSiri;
- (id)_deducedClinicalAccountIdentifier;
- (id)_fetchBundleWithError:(id *)a0;
- (char)_hasFirstPartyBundleID;
- (char)_isAllowedBackgroundDelivery;
- (char)_isAppleDevice;
- (char)_isAppleWatch;
- (char)_isApplication;
- (char)_isBTLEServer;
- (char)_isClinicalSource;
- (char)_isConnectedGymSource;
- (char)_isPreferredSource;
- (char)_isResearchStudy;

@end
