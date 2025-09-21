@class NSArray, NSString;

@interface CSASRFeatures : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long wordCount;
@property (nonatomic) long long trailingSilenceDuration;
@property (nonatomic) double eosLikelihood;
@property (copy, nonatomic) NSArray *pauseCounts;
@property (nonatomic) double silencePosterior;
@property (nonatomic) long long processedAudioDurationInMilliseconds;
@property (nonatomic) double acousticEndpointerScore;
@property (copy, nonatomic) NSString *taskName;

+ (id)initialASRFeatures;
+ (id)initialResultCandidateFeatures;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)dictionary;
- (void).cxx_destruct;
- (id)initWithWordCount:(long long)a0 trailingSilenceDuration:(long long)a1 eosLikelihood:(double)a2 pauseCounts:(id)a3 silencePosterior:(double)a4 taskName:(id)a5 processedAudioDurationInMilliseconds:(long long)a6 acousticEndpointerScore:(double)a7;

@end
