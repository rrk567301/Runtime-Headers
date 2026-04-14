@interface SiriTTSProsodyProperties : NSObject <NSSecureCoding>

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic) float neuralSentencePitch;
@property (nonatomic) float neuralSentencePitchRange;
@property (nonatomic) float neuralSentenceDuration;
@property (nonatomic) float neuralSentenceEnergy;
@property (nonatomic) float neuralSentenceTilt;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
