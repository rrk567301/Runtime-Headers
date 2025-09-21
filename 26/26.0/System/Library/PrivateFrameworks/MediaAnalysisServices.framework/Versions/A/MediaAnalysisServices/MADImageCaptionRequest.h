@interface MADImageCaptionRequest : MADRequest

@property (readonly, nonatomic) long long modelType;
@property (readonly, nonatomic) long long safetyType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithModelType:(long long)a0 safetyType:(long long)a1;

@end
