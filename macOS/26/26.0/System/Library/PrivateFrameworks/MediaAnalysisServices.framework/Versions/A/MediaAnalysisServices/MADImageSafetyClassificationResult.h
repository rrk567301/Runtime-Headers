@class NSNumber;

@interface MADImageSafetyClassificationResult : MADResult

@property (readonly, nonatomic) BOOL isSensitive;
@property (readonly, nonatomic) NSNumber *isSensitiveNudity;
@property (readonly, nonatomic) NSNumber *isSensitiveGoreViolence;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIsSensitiveNudity:(id)a0 isSensitiveGoreViolence:(id)a1;

@end
