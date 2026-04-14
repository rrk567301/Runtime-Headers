@interface GTReplayProfileTimeline : GTReplayProfileRequest

@property (nonatomic) BOOL shaderProfiling;
@property (nonatomic) BOOL saveProfilerRaw;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
