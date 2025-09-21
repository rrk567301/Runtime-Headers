@class NSDictionary;

@interface CSKeywordAnalyzerNDEAPIResult : NSObject

@property (nonatomic) unsigned long long samplesFed;
@property (nonatomic) unsigned long long bestStart;
@property (nonatomic) unsigned long long bestEnd;
@property (nonatomic) float bestScore;
@property (nonatomic) char isSecondChance;
@property (nonatomic) char isEarlyDetect;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)init;
- (id)initWithBlob:(id)a0 isEarlyDetected:(char)a1;

@end
