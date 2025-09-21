@class NSArray, NSData;

@interface HMDVideoCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *h264Profiles;
@property (readonly, copy, nonatomic) NSArray *levels;
@property (readonly, copy, nonatomic) NSArray *packetizationModes;
@property (readonly, copy) NSData *tlvData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (char)_parseFromTLVData;
- (id)initWithProfiles:(id)a0 levels:(id)a1 packetizationModes:(id)a2;

@end
