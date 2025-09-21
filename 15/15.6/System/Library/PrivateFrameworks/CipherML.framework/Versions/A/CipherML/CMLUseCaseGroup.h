@class NSDictionary, CMLNetworkManager;

@interface CMLUseCaseGroup : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long keyExpirationMinutes;
@property (nonatomic) long long keyRotationBeforeExpirationMinutes;
@property (nonatomic) char keyRotationIgnoreMissingEvaluationKey;
@property (copy, nonatomic) NSDictionary *useCases;
@property (retain, nonatomic) CMLNetworkManager *networkConfig;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUseCases:(id)a0 networkConfig:(id)a1;
- (id)initWithKeyExpirationMinutes:(long long)a0 keyRotationBeforeExpirationMinutes:(long long)a1 keyRotationIgnoreMissingEvaluationKey:(char)a2 useCases:(id)a3 networkConfig:(id)a4;
- (id)initWithKeyExpirationMinutes:(long long)a0 keyRotationBeforeExpirationMinutes:(long long)a1 useCases:(id)a2 networkConfig:(id)a3;
- (char)isEqualToUseCaseGroup:(id)a0;

@end
