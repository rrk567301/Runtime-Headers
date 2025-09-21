@interface AXMCoreMotionNode : AXMSourceNode

@property (nonatomic) double lastSampleTime;
@property (nonatomic) unsigned long long samplesPerSecond;

+ (char)supportsSecureCoding;
+ (id)title;
+ (char)isSupported;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)nodeInitialize;

@end
