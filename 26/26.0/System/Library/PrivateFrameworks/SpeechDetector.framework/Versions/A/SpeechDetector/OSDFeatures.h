@interface OSDFeatures : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double silenceFramesCountMs;
@property (readonly, nonatomic) double silenceProbability;
@property (readonly, nonatomic) double silenceDurationMs;
@property (readonly, nonatomic) double processedAudioMs;
@property (readonly, nonatomic) unsigned long long inferenceTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithSilenceFramesCountMs:(double)a0 silenceProbability:(double)a1 silenceDurationMs:(double)a2 processedAudioMs:(double)a3;
- (id)initWithSilenceFramesCountMs:(double)a0 silenceProbability:(double)a1 silenceDurationMs:(double)a2 processedAudioMs:(double)a3 inferenceTime:(unsigned long long)a4;

@end
