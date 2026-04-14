@class NSNumber;

@interface HMDReselectedRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *maximumBitrate;
@property (readonly, copy, nonatomic) NSNumber *minimumBitrate;
@property (readonly, copy, nonatomic) NSNumber *rtcpInterval;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)tlvData;
- (id)initWithMaximumBitrate:(id)a0 minimumBitrate:(id)a1 rtcpInterval:(id)a2;

@end
