@class HMDSessionControl, HMDReselectedVideoParameters, NSData;

@interface HMDReselectedStreamConfigurationWrite : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDSessionControl *sessionControl;
@property (readonly, copy, nonatomic) HMDReselectedVideoParameters *videoParameters;
@property (readonly, copy) NSData *tlvData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (char)_parseFromTLVData;
- (id)initWithSessionControl:(id)a0;
- (id)initWithSessionControl:(id)a0 videoParameters:(id)a1;

@end
