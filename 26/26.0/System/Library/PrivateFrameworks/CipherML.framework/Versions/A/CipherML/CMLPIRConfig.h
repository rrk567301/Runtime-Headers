@class NSData;

@interface CMLPIRConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *serializedPIRConfig;
@property (readonly, copy, nonatomic) NSData *serializedKeyStatus;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPIRConfig:(id)a0 keyStatus:(id)a1;
- (BOOL)isEqualToPIRConfig:(id)a0;

@end
