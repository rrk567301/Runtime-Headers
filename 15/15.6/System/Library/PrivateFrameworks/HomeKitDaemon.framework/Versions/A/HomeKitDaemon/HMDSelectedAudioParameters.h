@class HMDAudioCodecParameters, HMDAudioCodecGroup, NSData, NSNumber, HMDSelectedRTPParameters;

@interface HMDSelectedAudioParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDAudioCodecGroup *codecGroup;
@property (readonly, copy, nonatomic) HMDAudioCodecParameters *codecParameters;
@property (readonly, copy, nonatomic) HMDSelectedRTPParameters *rtpParameters;
@property (readonly, copy, nonatomic) NSNumber *comfortNoiseEnabled;
@property (readonly, copy) NSData *tlvData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (char)_parseFromTLVData;
- (id)initWithCodecGroup:(id)a0 codecParameter:(id)a1 rtpParameter:(id)a2 comfortNoiseEnabled:(id)a3;

@end
