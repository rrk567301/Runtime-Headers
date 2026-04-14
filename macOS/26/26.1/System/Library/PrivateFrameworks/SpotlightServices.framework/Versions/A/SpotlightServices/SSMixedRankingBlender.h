@class SFSearchResult_SpotlightExtras, NSString, NSMutableDictionary, SSMixedRankingConfig;

@interface SSMixedRankingBlender : NSObject

@property (retain, nonatomic) SSMixedRankingConfig *config;
@property (retain, nonatomic) SFSearchResult_SpotlightExtras *bestLocalResult;
@property (retain, nonatomic) SFSearchResult_SpotlightExtras *bestTextResult;
@property (retain, nonatomic) NSString *serverTopDomain;
@property (retain, nonatomic) NSString *serverCompletion;
@property (retain, nonatomic) NSMutableDictionary *bundleStats;
@property (nonatomic) unsigned long long highTextMatchingResults;
@property (nonatomic) unsigned long long engagedResults;
@property (nonatomic) unsigned long long menuItems;
@property (nonatomic) BOOL nlpMatch;
@property (retain, nonatomic) NSString *nlpGroupName;
@property (nonatomic) int intentFromQU;
@property (nonatomic) BOOL hasCalculator;
@property (nonatomic) BOOL hasCCCD;
@property (nonatomic) BOOL hasDictionary;
@property (nonatomic) BOOL hasUserTypedURL;
@property (nonatomic) BOOL hasShortCutResult;
@property (nonatomic) BOOL hasServerTopHit;
@property (nonatomic) BOOL hasServerInstantAnswer;

- (id)description;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)processResults:(id)a0;
- (BOOL)allowServerBlendingWithLocalSection;
- (BOOL)allowServerInstantAnswer;
- (BOOL)isNLPTriggerValid;
- (void)processResult:(id)a0;

@end
