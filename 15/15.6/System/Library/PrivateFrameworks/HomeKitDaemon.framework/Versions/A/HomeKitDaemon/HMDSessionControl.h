@class NSUUID, NSData;

@interface HMDSessionControl : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long controlCommand;
@property (readonly, copy, nonatomic) NSUUID *sessionID;
@property (readonly, copy) NSData *tlvData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (char)_parseFromTLVData;
- (id)initWithCommand:(unsigned long long)a0 sessionIdentifier:(id)a1;

@end
