@interface _OSDayDrainResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isHighDrain;
@property (nonatomic) double confidence;
@property (nonatomic) double batteryDifference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithIsHighDrain:(BOOL)a0 confidence:(double)a1;

@end
