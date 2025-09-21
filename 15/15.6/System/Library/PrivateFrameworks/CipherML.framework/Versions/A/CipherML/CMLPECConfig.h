@class NSData;

@interface CMLPECConfig : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *serializedPECConfig;
@property (readonly, copy, nonatomic) NSData *serializedKeyStatus;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPECConfig:(id)a0 keyStatus:(id)a1;
- (char)isEqualToPECConfig:(id)a0;

@end
