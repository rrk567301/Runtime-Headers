@interface PPSMetricMonitorConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long mode;
@property (nonatomic) double updateInterval;
@property (nonatomic) BOOL updateDelegate;
@property (nonatomic) BOOL includeBackBoardUsage;
@property (nonatomic) BOOL emitSignposts;
@property (nonatomic) BOOL emitTracingSignposts;
@property (nonatomic) BOOL isHeadless;

+ (id)defaultConfiguration;
+ (id)instrumentsConfiguration;
+ (id)tracingConfiguration:(double)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMode:(long long)a0 updateInterval:(double)a1 updateDelegate:(BOOL)a2;
- (id)initWithMode:(long long)a0 updateInterval:(double)a1 updateDelegate:(BOOL)a2 emitSignposts:(BOOL)a3;
- (id)initWithMode:(long long)a0 updateInterval:(double)a1 updateDelegate:(BOOL)a2 emitSignposts:(BOOL)a3 includeBackBoardUsage:(BOOL)a4 emitTracingSignposts:(BOOL)a5 isHeadless:(BOOL)a6;
- (id)initWithMode:(long long)a0 updateInterval:(double)a1 updateDelegate:(BOOL)a2 includeBackBoardUsage:(BOOL)a3 emitTracingSignposts:(BOOL)a4 isHeadless:(BOOL)a5;

@end
