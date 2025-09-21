@class HMDSetupEndPointWrite, HMDSupportedAudioStreamConfiguration, HMDSupportedVideoStreamConfiguration, HMDSetupEndPointRead, HMDSupportedRTPConfiguration, HMDSelectedStreamConfigurationWrite, HMDReselectedStreamConfigurationWrite;

@interface HMDCameraProtocolParameters : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration;
@property (retain, nonatomic) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration;
@property (retain, nonatomic) HMDSupportedRTPConfiguration *supportedRTPConfiguration;
@property (retain, nonatomic) HMDSetupEndPointRead *setupEndPointRead;
@property (retain, nonatomic) HMDSetupEndPointWrite *setupEndPointWrite;
@property (retain, nonatomic) HMDSelectedStreamConfigurationWrite *selectedStreamConfigurationWrite;
@property (retain, nonatomic) HMDReselectedStreamConfigurationWrite *reselectedStreamConfigurationWrite;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
