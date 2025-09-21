@interface LACDTOBiometryWatchdog : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isRunning;
@property (readonly, nonatomic) double time;
@property (readonly, nonatomic) double minThreshold;
@property (readonly, nonatomic) double maxThreshold;
@property (readonly, nonatomic) char isBarking;

+ (id)nullInstance;

- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsRunning:(char)a0 time:(double)a1 minThreshold:(double)a2 maxThreshold:(double)a3;

@end
