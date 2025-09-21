@interface MADSharpnessResult : MADResult

@property (readonly, nonatomic) double sharpnessScore;

+ (BOOL)supportsSecureCoding;
+ (id)resultWithSharpnessScore:(double)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithSharpnessScore:(double)a0;

@end
