@interface RTEstimatedLocationOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double averageSpeed;
@property (readonly, nonatomic) char enableFallbackModel;
@property (readonly, nonatomic) double timeInterval;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAverageSpeed:(double)a0 enableFallbackModel:(char)a1 timeInterval:(double)a2;

@end
