@interface PPSMetricMonitorConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long mode;
@property (nonatomic) double updateInterval;
@property (nonatomic) char updateDelegate;
@property (nonatomic) char includeBackBoardUsage;
@property (nonatomic) char emitSignposts;

+ (id)defaultConfiguration;
+ (id)instrumentsConfiguration;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMode:(long long)a0 updateInterval:(double)a1 updateDelegate:(char)a2;

@end
