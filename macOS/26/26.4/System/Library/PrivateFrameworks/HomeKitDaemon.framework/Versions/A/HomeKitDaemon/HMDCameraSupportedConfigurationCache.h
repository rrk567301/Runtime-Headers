@class HMDSupportedAudioStreamConfiguration, HAPSupportedVideoStreamTiers, HMDSupportedVideoStreamConfiguration, HAPSupportedAudioStreamTiers, HMDSupportedRTPConfiguration;

@interface HMDCameraSupportedConfigurationCache : HMFObject

@property (readonly, getter=isValid) BOOL valid;
@property (retain) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration;
@property (retain) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration;
@property (retain) HAPSupportedVideoStreamTiers *supportedVideoStreamTiers;
@property (retain) HAPSupportedAudioStreamTiers *supportedAudioStreamTiers;
@property (retain) HMDSupportedRTPConfiguration *supportedRTPConfiguration;

- (void).cxx_destruct;
- (BOOL)_hasValidAudioVideoInfo;

@end
