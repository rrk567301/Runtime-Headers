@class NSNumber;

@interface MADImageSafetyClassificationResult : MADResult

@property (readonly, nonatomic) BOOL isSensitive;
@property (readonly, nonatomic) NSNumber *isSensitiveNudity;
@property (readonly, nonatomic) NSNumber *isSensitiveGoreViolence;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIsSensitiveNudity:(id)a0 isSensitiveGoreViolence:(id)a1;

@end
