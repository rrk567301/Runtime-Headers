@class NSData;

@interface CMLPIRConfig : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *serializedPIRConfig;
@property (readonly, copy, nonatomic) NSData *serializedKeyStatus;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPIRConfig:(id)a0 keyStatus:(id)a1;
- (char)isEqualToPIRConfig:(id)a0;

@end
