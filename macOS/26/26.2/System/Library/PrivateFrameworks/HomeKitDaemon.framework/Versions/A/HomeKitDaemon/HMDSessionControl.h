@class NSUUID, NSData;

@interface HMDSessionControl : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long controlCommand;
@property (readonly, copy, nonatomic) NSUUID *sessionUUID;
@property (readonly, copy) NSData *tlvData;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithCommand:(unsigned long long)a0 sessionUUID:(id)a1;

@end
