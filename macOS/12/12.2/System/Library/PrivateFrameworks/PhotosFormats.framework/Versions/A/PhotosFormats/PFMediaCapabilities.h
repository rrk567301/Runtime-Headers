@class NSDictionary;

@interface PFMediaCapabilities : NSObject

@property (retain) NSDictionary *capabilitiesInformation;
@property (retain) NSDictionary *outOfBandHints;

+ (id)capabilitiesForCurrentDevice;
+ (id)legacyCapabilities;
+ (BOOL)setNewFormatsConfiguration:(long long)a0 fromSource:(long long)a1;
+ (BOOL)currentDeviceIsEligibleForHDRPlayback;
+ (BOOL)videoCodecIsEligibleForBackwardsCompatibilityTranscoding:(unsigned int)a0;
+ (BOOL)videoCodecIsProResEligibleForBackwardsCompatibilityTranscoding:(unsigned int)a0;
+ (id)stringForSupport:(long long)a0;
+ (unsigned int)currentDeviceHEVCCapabilities;
+ (id)videoCodecTypesEligibleForBackwardsCompatibilityTranscoding;
+ (id)capabilitiesForCurrentDeviceWithOptions:(id)a0;
+ (id)capabilitiesInformationForCurrentDeviceWithOptions:(id)a0;
+ (id)proResVideoCodecTypesEligibleForBackwardsCompatibilityTranscoding;
+ (id)testCapabilitiesNotSupportingHEVC;
+ (id)testCapabilitiesNotSupportingHEIF;
+ (void)setRecordSlomoConfiguration:(id)a0;
+ (void)setRecordVideoConfiguration:(id)a0;
+ (long long)newFormatsConfiguration;
+ (id)recordVideoConfigurationWithValidValues:(id)a0;
+ (id)recordSlomoConfigurationWithValidValues:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (long long)supportForAdjustmentBaseResources;
- (BOOL)supportsTranscodeChoice;
- (long long)decodingSupportForFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (long long)supportForContainerTypeIdentifier:(id)a0;
- (BOOL)supportsHDR;
- (id)initWithOpaqueRepresentation:(id)a0;
- (long long)supportForLivePhotoVersion:(id)a0;
- (long long)supportForAssetBundleVersion:(id)a0;
- (long long)decodingSupportForAVAsset:(id)a0;
- (id)opaqueRepresentation;
- (long long)supportValueByApplyingUserDefaultsPeerOverrideToValue:(long long)a0 selector:(SEL)a1;
- (long long)userDefaultsPeerOverrideValue;
- (long long)supportValueByApplyingUserDefaultsPeerAssetBundleSupportOverrideToValue:(long long)a0 selector:(SEL)a1;
- (long long)userDefaultsPeerAssetBundleSupportOverrideValue;

@end
