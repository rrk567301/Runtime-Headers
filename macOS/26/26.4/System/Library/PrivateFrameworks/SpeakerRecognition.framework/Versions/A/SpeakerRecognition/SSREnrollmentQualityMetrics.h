@class NSURL;

@interface SSREnrollmentQualityMetrics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *utterancePath;
@property (readonly, nonatomic) double snr;
@property (readonly, nonatomic) double wer;
@property (readonly, nonatomic) float inSpeakerSimilarityScore;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUtterancePath:(id)a0 snr:(double)a1 wer:(double)a2 inSpeakerSimilarityScores:(float)a3;

@end
