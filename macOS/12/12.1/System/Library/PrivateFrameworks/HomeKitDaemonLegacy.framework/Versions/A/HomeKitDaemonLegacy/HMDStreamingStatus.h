@interface HMDStreamingStatus : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long streamingStatus;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)tlvData;

@end
