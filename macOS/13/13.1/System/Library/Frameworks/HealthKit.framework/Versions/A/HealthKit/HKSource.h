@class NSString, NSNumber;

@interface HKSource : NSObject <NSSecureCoding, NSCopying> {
    NSString *_name;
    NSString *_bundleIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, getter=_owningAppBundleIdentifier, setter=_setOwningAppBundleIdentifier:) NSString *owningAppBundleIdentifier;
@property (retain, nonatomic, getter=_sourceID, setter=_setSourceID:) NSNumber *sourceID;
@property (nonatomic, getter=_isLocalDevice, setter=_setLocalDevice:) BOOL localDevice;
@property (copy, nonatomic, getter=_productType, setter=_setProductType:) NSString *productType;
@property (nonatomic, getter=_options, setter=_setOptions:) unsigned long long options;
@property (readonly) NSString *name;
@property (readonly) NSString *bundleIdentifier;

+ (id)defaultSource;
+ (id)_uncachedDefaultSource;
+ (id)_uncachedDefaultSourceWithEntitlements:(id)a0;
+ (id)_localDeviceSource;
+ (id)_connectedGymSource;
+ (BOOL)_representsCurrentDeviceWithBundleIdentifier:(id)a0;
+ (id)_sourceBundleIdentifierWithEntitlements:(id)a0 processBundleIdentifier:(id)a1 isExtension:(BOOL)a2;
+ (id)_currentSourceProductType:(BOOL)a0;
+ (id)_sourceNameWithRepresentsCurrentDevice:(BOOL)a0 defaultSource:(BOOL)a1;
+ (id)_generateIdentifierForAppleDevice;
+ (id)_generateIdentifierForAppleDeviceWithUUID:(id)a0;
+ (BOOL)_isPlaceholderBundleIdentifier:(id)a0;
+ (id)_researchStudiesDirectoryURL;
+ (id)_sourceWithBundleIdentifier:(id)a0 name:(id)a1 productType:(id)a2 options:(unsigned long long)a3;
+ (id)_privateSourceForClinicalAccountIdentifier:(id)a0 name:(id)a1;
+ (id)_publicSourceForClinicalExternalIdentifier:(id)a0 name:(id)a1;
+ (id)_sourceWithBundleIdentifier:(id)a0 defaultBundleIdentifier:(id)a1 appEntitlements:(id)a2 name:(id)a3;
+ (unsigned long long)_sourceOptionsForAppEntitlements:(id)a0;
+ (BOOL)isAppleDeviceBundleIdentifier:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isHidden;
- (void).cxx_destruct;
- (BOOL)_isApplication;
- (void)_setBundleIdentifier:(id)a0;
- (void)_setName:(id)a0;
- (BOOL)_requiresAuthorization;
- (id)asJSONObject;
- (BOOL)_isAppleDevice;
- (BOOL)_isPreferredSource;
- (BOOL)_isClinicalSource;
- (BOOL)_isResearchStudy;
- (BOOL)_isAllowedBackgroundDelivery;
- (id)_deducedClinicalAccountIdentifier;
- (id)_fetchBundleWithError:(id *)a0;
- (BOOL)_isAppleWatch;
- (BOOL)_hasFirstPartyBundleID;
- (BOOL)_isConnectedGymSource;

@end
