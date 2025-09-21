@interface AXMCoreMotionNode : AXMSourceNode

@property (nonatomic) double lastSampleTime;
@property (nonatomic) unsigned long long samplesPerSecond;

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)nodeInitialize;

@end
