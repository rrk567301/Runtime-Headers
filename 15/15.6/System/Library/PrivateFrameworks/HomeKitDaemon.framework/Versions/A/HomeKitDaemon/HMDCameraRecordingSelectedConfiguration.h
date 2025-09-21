@class HMDCameraRecordingAudioCodecConfiguration, HMDCameraRecordingVideoCodecConfiguration, HMDCameraRecordingGeneralConfiguration, NSData;

@interface HMDCameraRecordingSelectedConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDCameraRecordingGeneralConfiguration *generalConfiguration;
@property (readonly, copy, nonatomic) HMDCameraRecordingVideoCodecConfiguration *videoConfiguration;
@property (readonly, copy, nonatomic) HMDCameraRecordingAudioCodecConfiguration *audioConfiguration;
@property (readonly, copy) NSData *tlvData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (char)_parseFromTLVData;
- (id)initWithGeneralConfiguration:(id)a0 videoCodecConfiguration:(id)a1 audioCodecConfiguration:(id)a2;

@end
