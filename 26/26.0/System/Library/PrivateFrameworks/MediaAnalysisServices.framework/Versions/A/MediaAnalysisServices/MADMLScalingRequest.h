@interface MADMLScalingRequest : MADRequest

@property (readonly, nonatomic) unsigned long long scaledImageWidth;
@property (readonly, nonatomic) unsigned long long scaledImageHeight;
@property (readonly, nonatomic) long long scalingModelIndex;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithScaledImageWidth:(unsigned long long)a0 scaledImageHeight:(unsigned long long)a1;
- (id)initWithScaledImageWidth:(unsigned long long)a0 scaledImageHeight:(unsigned long long)a1 scalingModel:(long long)a2;

@end
