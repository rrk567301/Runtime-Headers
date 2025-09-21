@class CSKeywordAnalyzerNDAPIResult;

@interface CSSinglePhraseResult : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long phId;
@property (readonly, nonatomic) unsigned long long decision;
@property (readonly, nonatomic) float combinedScore;
@property (readonly, nonatomic) float ndapiScore;
@property (readonly, nonatomic) CSKeywordAnalyzerNDAPIResult *ndapiResult;
@property (readonly, nonatomic) float recognizerScore;
@property (readonly, nonatomic) char isSecondChance;
@property (readonly, nonatomic) char isSecondChanceCandidate;
@property (readonly, nonatomic) char isRunningQuasar;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPhId:(unsigned long long)a0 keywordDetectorDecision:(unsigned long long)a1 combinedScore:(float)a2 ndapiScore:(float)a3 ndapiResult:(id)a4 recognizerScore:(float)a5 isSecondChance:(char)a6 isSecondChanceCandidate:(char)a7 isRunningQuasar:(char)a8;

@end
