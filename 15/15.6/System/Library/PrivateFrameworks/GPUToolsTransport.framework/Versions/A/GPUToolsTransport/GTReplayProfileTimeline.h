@interface GTReplayProfileTimeline : GTReplayProfileRequest

@property (nonatomic) char shaderProfiling;
@property (nonatomic) char saveProfilerRaw;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
