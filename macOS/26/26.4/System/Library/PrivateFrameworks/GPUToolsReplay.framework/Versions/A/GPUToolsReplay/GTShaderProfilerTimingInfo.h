@interface GTShaderProfilerTimingInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long time;
@property (readonly, nonatomic) unsigned long long vertexTime;
@property (readonly, nonatomic) unsigned long long fragmentTime;
@property (readonly, nonatomic) unsigned long long computeTime;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTime:(unsigned long long)a0 vertexTime:(unsigned long long)a1 fragmentTime:(unsigned long long)a2 computeTime:(unsigned long long)a3;

@end
