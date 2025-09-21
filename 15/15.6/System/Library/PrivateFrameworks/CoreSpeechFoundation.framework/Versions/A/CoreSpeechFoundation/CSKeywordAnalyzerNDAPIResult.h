@class NSDictionary;

@interface CSKeywordAnalyzerNDAPIResult : NSObject <NSCopying>

@property (nonatomic) unsigned long long phId;
@property (nonatomic) unsigned long long samplesFed;
@property (nonatomic) unsigned long long bestPhrase;
@property (nonatomic) unsigned long long bestStart;
@property (nonatomic) unsigned long long bestEnd;
@property (nonatomic) float bestScore;
@property (nonatomic) char isEarlyWarning;
@property (nonatomic) char isRescoring;
@property (nonatomic) unsigned long long samplesAtFire;
@property (nonatomic) unsigned long long startSampleCount;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
