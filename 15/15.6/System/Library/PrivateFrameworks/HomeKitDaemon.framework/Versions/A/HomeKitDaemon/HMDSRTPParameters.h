@class NSData, HMDSRTPCryptoSuite;

@interface HMDSRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDSRTPCryptoSuite *srtpCryptoSuite;
@property (readonly, copy, nonatomic) NSData *srtpMasterKey;
@property (readonly, copy, nonatomic) NSData *srtpMasterSalt;
@property (readonly, copy) NSData *tlvData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (char)_parseFromTLVData;
- (id)initWithCryptoSuite:(id)a0 masterKey:(id)a1 masterSalt:(id)a2;
- (char)isCompatibleWithRemoteSRTPParameters:(id)a0;

@end
