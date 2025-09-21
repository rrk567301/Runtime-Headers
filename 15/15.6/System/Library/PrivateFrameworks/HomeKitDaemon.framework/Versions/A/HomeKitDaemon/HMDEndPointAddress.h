@class NSString, NSNumber, NSData;

@interface HMDEndPointAddress : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *ipAddress;
@property (readonly, nonatomic) char isIPv6Address;
@property (readonly, copy, nonatomic) NSNumber *videoRTPPort;
@property (readonly, copy, nonatomic) NSNumber *audioRTPPort;
@property (readonly, copy) NSData *tlvData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (char)_parseFromTLVData;
- (id)initWithIPAddress:(id)a0 isIPv6Address:(char)a1 videoRTPPort:(id)a2 audioRTPPort:(id)a3;
- (char)isCompatibleWithRemoteEndPointAddress:(id)a0;

@end
