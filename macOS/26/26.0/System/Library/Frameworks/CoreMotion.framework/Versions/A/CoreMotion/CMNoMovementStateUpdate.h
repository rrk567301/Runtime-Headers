@interface CMNoMovementStateUpdate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long detectionType;
@property (readonly, nonatomic) double startTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithState:(long long)a0 detectionType:(long long)a1 startTime:(double)a2;

@end
