@class NSData;

@interface CMLPIRConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *serializedPIRConfig;
@property (readonly, copy, nonatomic) NSData *serializedKeyStatus;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPIRConfig:(id)a0 keyStatus:(id)a1;
- (BOOL)isEqualToPIRConfig:(id)a0;

@end
