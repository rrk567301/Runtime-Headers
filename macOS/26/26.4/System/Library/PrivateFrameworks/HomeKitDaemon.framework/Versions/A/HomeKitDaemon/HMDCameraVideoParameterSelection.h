@class HMDSupportedVideoStreamConfiguration, HMDSupportedRTPConfiguration, HMDH264Profile, HMDStreamingCapabilities, HAPVideoStreamTier, HMDSelectedVideoParameters, HMDH264Level, HAPSupportedVideoStreamTiers, HMDCameraVideoTier, HMDPacketizationMode, NSArray, HMDCameraVideoTierParameters, HMDVideoCodec, NSNumber;

@interface HMDCameraVideoParameterSelection : HMDCameraParameterSelection

@property (readonly, nonatomic) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration;
@property (readonly, nonatomic) HMDSupportedRTPConfiguration *rtpConfiguration;
@property (readonly, nonatomic) NSNumber *syncSource;
@property (retain, nonatomic) HMDSelectedVideoParameters *selectedVideoParameters;
@property (readonly, nonatomic) HMDStreamingCapabilities *streamingCapabilities;
@property (readonly, nonatomic) NSArray *videoCodecsPreference;
@property (readonly, nonatomic) NSArray *h264ProfilesPreference;
@property (readonly, nonatomic) NSArray *h264LevelsPreference;
@property (readonly, nonatomic) NSArray *h264PacketizationPreference;
@property (readonly, nonatomic) NSArray *videoResolutionsPreference;
@property (readonly, nonatomic) NSArray *validVideoParameterCombinations;
@property (readonly, nonatomic) HMDCameraVideoTierParameters *videoTierParameters;
@property (retain, nonatomic) HMDH264Profile *selectedProfile;
@property (retain, nonatomic) HMDH264Level *selectedLevel;
@property (retain, nonatomic) HMDPacketizationMode *selectedPacketizationMode;
@property (retain, nonatomic) NSNumber *selectedFramerate;
@property (retain, nonatomic) HMDCameraVideoTier *selectedVideoTier;
@property (retain, nonatomic) HMDVideoCodec *selectedCodecType;
@property (readonly, nonatomic) HAPSupportedVideoStreamTiers *supportedVideoStreamTiers;
@property (retain, nonatomic) HAPVideoStreamTier *selectedVideoStreamTier;

+ (id)logCategory;
+ (id)videoResolutionPreferenceForStreamingTierType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)_generateAllCombinations;
- (BOOL)_selectParametersFromCodec:(id)a0 profiles:(id)a1 levels:(id)a2 packetizationModes:(id)a3 videoAttributes:(id)a4;
- (BOOL)_selectVideoStreamTier;
- (id)createReselectedVideoParameters:(id)a0;
- (id)createSRTPParamters;
- (id)createSelectedVideoParameters;
- (id)initWithSessionInfo:(id)a0 videoTierParameters:(id)a1 supportedVideoConfiguration:(id)a2 supportedVideoTiers:(id)a3 supportedRTPConfiguration:(id)a4 streamingCapabilities:(id)a5;
- (BOOL)selectVideoParameters;
- (id)selectedVideoTierID;

@end
