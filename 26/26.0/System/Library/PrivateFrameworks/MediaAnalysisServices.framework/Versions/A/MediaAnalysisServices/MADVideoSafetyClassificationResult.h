@class NSDictionary, NSNumber;

@interface MADVideoSafetyClassificationResult : MADVideoResult

@property (readonly, nonatomic) NSDictionary *scoresForLabels;
@property (readonly, nonatomic) BOOL isSensitive;
@property (readonly, nonatomic) NSNumber *isSensitiveNudity;
@property (readonly, nonatomic) NSNumber *isSensitiveGoreViolence;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIsSensitiveNudity:(id)a0 isSensitiveGoreViolence:(id)a1 scoresForLabels:(id)a2;

@end
