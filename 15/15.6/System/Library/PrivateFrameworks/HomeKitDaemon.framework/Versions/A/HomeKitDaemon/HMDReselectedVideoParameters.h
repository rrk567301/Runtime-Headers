@class HMDReselectedRTPParameters, HMDVideoAttributes, NSData;

@interface HMDReselectedVideoParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDVideoAttributes *videoAttributes;
@property (readonly, copy, nonatomic) HMDReselectedRTPParameters *rtpParameters;
@property (readonly, copy) NSData *tlvData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (char)_parseFromTLVData;
- (id)initWithAttribute:(id)a0 rtpParameter:(id)a1;

@end
