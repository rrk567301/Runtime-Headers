@class NSArray, HMDCameraRecordingVideoCodec, HMDCameraRecordingVideoCodecParameters, NSData;

@interface HMDCameraRecordingVideoCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDCameraRecordingVideoCodec *codec;
@property (readonly, copy, nonatomic) HMDCameraRecordingVideoCodecParameters *parameters;
@property (readonly, copy, nonatomic) NSArray *videoAttributes;
@property (readonly, copy) NSData *tlvData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (char)_parseFromTLVData;
- (id)initWithCodec:(id)a0 codecParameters:(id)a1 videoAttributes:(id)a2;

@end
