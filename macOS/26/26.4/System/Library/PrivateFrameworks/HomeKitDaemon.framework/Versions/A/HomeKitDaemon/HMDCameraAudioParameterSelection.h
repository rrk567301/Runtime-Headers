@class HMDBitRateSetting, NSArray, HMDSupportedRTPConfiguration, HMDCameraAudioParameterCombination, HMDAudioCodecGroup, HMDSupportedAudioStreamConfiguration, HMDStreamingCapabilities, HMDAudioSampleRate, HMDSelectedAudioParameters, HAPSupportedAudioStreamTiers, NSNumber, HAPAudioStreamTier;

@interface HMDCameraAudioParameterSelection : HMDCameraParameterSelection

@property (readonly, nonatomic) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration;
@property (readonly, nonatomic) HMDSupportedRTPConfiguration *rtpConfiguration;
@property (retain, nonatomic) HMDSelectedAudioParameters *selectedAudioParameters;
@property (readonly, nonatomic) HMDStreamingCapabilities *streamingCapabilities;
@property (readonly, nonatomic) NSArray *audioCodecsPreference;
@property (readonly, nonatomic) NSArray *bitrateSettingsPreference;
@property (readonly, nonatomic) NSArray *sampleRatesPreference;
@property (readonly, nonatomic) NSArray *validAudioParameterCombinations;
@property (retain, nonatomic) HMDAudioCodecGroup *selectedCodecGroupType;
@property (retain, nonatomic) HMDBitRateSetting *selectedBitRateSetting;
@property (retain, nonatomic) HMDAudioSampleRate *selectedSampleRate;
@property (retain, nonatomic) NSNumber *selectedAudioChannelCount;
@property (retain, nonatomic) HMDCameraAudioParameterCombination *selectedAudioParameterCombination;
@property (retain, nonatomic) NSNumber *comfortNoiseSupported;
@property (readonly, nonatomic) HAPSupportedAudioStreamTiers *supportedAudioStreamTiers;
@property (retain, nonatomic) HAPAudioStreamTier *selectedAudioStreamTier;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)_generateAllCombinations:(id)a0;
- (BOOL)_selectAudioStreamTier;
- (BOOL)_selectParametersFromCodec:(id)a0 bitRateSettings:(id)a1 sampleRates:(id)a2 audioChannelCount:(id)a3;
- (id)createSRTPParamters;
- (id)createSelectedAudioParameters;
- (id)initWithSessionInfo:(id)a0 supportedAudioConfiguration:(id)a1 supportedAudioTiers:(id)a2 supportedRTPConfiguration:(id)a3 streamingCapabilities:(id)a4;
- (BOOL)selectAudioParameters;
- (id)selectedAudioTierID;

@end
