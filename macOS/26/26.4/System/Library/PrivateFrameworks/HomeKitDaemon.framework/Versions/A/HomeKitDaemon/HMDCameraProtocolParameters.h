@class HAPSupportedVideoStreamTiers, NSNumber, HMDSupportedVideoStreamConfiguration, HMDSupportedRTPConfiguration, HMDReselectedStreamConfigurationWrite, HMDSetupEndPointWrite, HMDSupportedAudioStreamConfiguration, HAPSupportedAudioStreamTiers, HMDSetupEndPointRead, HAPRTPStreamingControlRequest, HMDSelectedStreamConfigurationWrite;

@interface HMDCameraProtocolParameters : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration;
@property (retain, nonatomic) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration;
@property (retain, nonatomic) HAPSupportedVideoStreamTiers *supportedVideoStreamTiers;
@property (retain, nonatomic) HAPSupportedAudioStreamTiers *supportedAudioStreamTiers;
@property (retain, nonatomic) HMDSupportedRTPConfiguration *supportedRTPConfiguration;
@property (retain, nonatomic) HMDSetupEndPointRead *setupEndPointRead;
@property (retain, nonatomic) HMDSetupEndPointWrite *setupEndPointWrite;
@property (retain, nonatomic) HMDSelectedStreamConfigurationWrite *selectedStreamConfigurationWrite;
@property (retain, nonatomic) HMDReselectedStreamConfigurationWrite *reselectedStreamConfigurationWrite;
@property (retain, nonatomic) HAPRTPStreamingControlRequest *streamingControlRequest;
@property (copy, nonatomic) NSNumber *videoSSRC;
@property (copy, nonatomic) NSNumber *audioSSRC;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
