@class NSDictionary;

@interface PFMediaCapabilities : NSObject

@property (retain) NSDictionary *capabilitiesInformation;
@property (retain) NSDictionary *outOfBandHints;

+ (id)testCapabilitiesNotSupportingHEVC;
+ (id)legacyCapabilities;
+ (void)setRecordVideoConfiguration:(id)a0;
+ (BOOL)videoCodecIsProResEligibleForBackwardsCompatibilityTranscoding:(unsigned int)a0;
+ (long long)newFormatsConfiguration;
+ (BOOL)currentDeviceIsEligibleForHDRPlayback;
+ (id)testCapabilitiesNotSupportingHEIF;
+ (id)proResVideoCodecTypesEligibleForBackwardsCompatibilityTranscoding;
+ (id)recordVideoConfigurationWithValidValues:(id)a0;
+ (unsigned int)currentDeviceHEVCCapabilities;
+ (id)capabilitiesForCurrentDevice;
+ (BOOL)videoCodecIsEligibleForBackwardsCompatibilityTranscoding:(unsigned int)a0;
+ (id)recordSlomoConfigurationWithValidValues:(id)a0;
+ (id)stringForSupport:(long long)a0;
+ (BOOL)setNewFormatsConfiguration:(long long)a0 fromSource:(long long)a1;
+ (id)videoCodecTypesEligibleForBackwardsCompatibilityTranscoding;
+ (void)setRecordSlomoConfiguration:(id)a0;
+ (id)capabilitiesForCurrentDeviceWithOptions:(id)a0;
+ (id)capabilitiesInformationForCurrentDeviceWithOptions:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (long long)decodingSupportForFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (long long)supportForCodec:(unsigned int)a0;
- (long long)supportForContainerTypeIdentifier:(id)a0;
- (BOOL)supportsHDR;
- (long long)supportValueByApplyingUserDefaultsPeerOverrideToValue:(long long)a0 selector:(SEL)a1;
- (long long)decodingSupportForAVAsset:(id)a0;
- (id)initWithOpaqueRepresentation:(id)a0;
- (id)initWithPlatformInformation:(id)a0;
- (id)opaqueRepresentation;
- (id)platformInformation;
- (void)setSupportForAdjustmentBaseResources:(BOOL)a0;
- (void)setSupportsTranscodeChoice:(BOOL)a0;
- (BOOL)sortSourceEnumerationAscending;
- (long long)supportForAdjustmentBaseResources;
- (long long)supportForAssetBundleVersion:(id)a0;
- (long long)supportForLivePhotoVersion:(id)a0;
- (long long)supportValueByApplyingUserDefaultsPeerAssetBundleSupportOverrideToValue:(long long)a0 selector:(SEL)a1;
- (BOOL)supportsTranscodeChoice;
- (long long)userDefaultsPeerAssetBundleSupportOverrideValue;
- (long long)userDefaultsPeerOverrideValue;

@end
