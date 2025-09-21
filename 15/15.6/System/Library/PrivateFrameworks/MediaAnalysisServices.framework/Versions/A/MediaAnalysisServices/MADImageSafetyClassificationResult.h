@class NSDictionary;

@interface MADImageSafetyClassificationResult : MADResult

@property (readonly, nonatomic) char isSensitive;
@property (readonly, nonatomic) NSDictionary *attributes;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsSensitive:(char)a0 andAttributes:(id)a1;

@end
