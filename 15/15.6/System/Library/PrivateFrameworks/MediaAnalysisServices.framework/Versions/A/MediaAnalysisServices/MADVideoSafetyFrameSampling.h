@interface MADVideoSafetyFrameSampling : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long framesPerSync;
@property (readonly, nonatomic) unsigned long long frameLimit;
@property (readonly, nonatomic) char uniformSampling;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFramesPerSync:(unsigned long long)a0 frameLimit:(unsigned long long)a1 uniformSampling:(char)a2;
- (id)initWithFrameLimit:(unsigned long long)a0 uniformSampling:(char)a1;

@end
