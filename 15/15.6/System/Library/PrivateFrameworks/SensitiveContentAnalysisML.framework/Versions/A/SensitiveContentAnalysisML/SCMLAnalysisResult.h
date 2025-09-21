@class NSNumber, NSDictionary;

@interface SCMLAnalysisResult : NSObject

@property (readonly, nonatomic) char sensitive;
@property (readonly, nonatomic) NSNumber *sensitivityScore;
@property (readonly, nonatomic) NSDictionary *scoresForLabels;

+ (id)obfuscateLabelName:(id)a0;
+ (id)obfuscateLabels:(id)a0;

- (void).cxx_destruct;
- (id)initWithSensitive:(char)a0 sensitivityScore:(id)a1 scoresForLabels:(id)a2;
- (id)initWithSensitive:(char)a0 sensitivityScore:(id)a1 scoresForObfuscatedLabels:(id)a2;

@end
