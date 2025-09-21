@class NSNumber, NSDictionary;

@interface SCMLAnalysisResult : NSObject

@property (readonly, nonatomic) BOOL sensitive;
@property (readonly, nonatomic) BOOL sensitiveExplicit;
@property (readonly, nonatomic) BOOL sensitiveGore;
@property (readonly, nonatomic) BOOL sensitiveViolence;
@property (readonly, nonatomic) NSNumber *sensitivityScore;
@property (readonly, nonatomic) NSNumber *sensitivityScoreExplicit;
@property (readonly, nonatomic) NSNumber *sensitivityScoreGore;
@property (readonly, nonatomic) NSNumber *sensitivityScoreViolence;
@property (readonly, nonatomic) NSDictionary *scoresForLabels;

+ (id)obfuscateLabelName:(id)a0;
+ (id)obfuscateLabels:(id)a0;

- (void).cxx_destruct;
- (id)initWithSensitive:(BOOL)a0 sensitivityScore:(id)a1 scoresForLabels:(id)a2;
- (id)initWithSensitive:(BOOL)a0 sensitivityScore:(id)a1 scoresForObfuscatedLabels:(id)a2;

@end
