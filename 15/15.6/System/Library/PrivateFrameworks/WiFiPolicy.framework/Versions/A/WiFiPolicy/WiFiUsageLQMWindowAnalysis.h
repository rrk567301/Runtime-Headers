@class NSDate, NSString, NSArray, NSMutableDictionary, NSDictionary, NSMutableArray, NSObject, WiFiUsageLQMRollingWindow;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface WiFiUsageLQMWindowAnalysis : NSObject {
    NSMutableDictionary *dimensions;
}

@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) char isDone;
@property (retain, nonatomic) NSDictionary *summary;
@property (retain, nonatomic) NSMutableArray *subsequentTriggers;
@property (nonatomic) NSString *firstSubsequentLinkDownReason;
@property (retain, nonatomic) NSArray *preceedingTriggers;
@property (retain, nonatomic) NSString *fgApp;
@property (nonatomic) char inCall;
@property (nonatomic) unsigned long long diceRoll;
@property (nonatomic) char hasKernel;
@property (nonatomic) char inA2dp;
@property (nonatomic) char inEsco;
@property (retain, nonatomic) NSString *metricNameCDF;
@property (retain, nonatomic) NSString *metricNameSankey;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *analysisTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analysisQueue;
@property (retain, nonatomic) WiFiUsageLQMRollingWindow *windowBeforeTrigger;
@property (retain, nonatomic) WiFiUsageLQMRollingWindow *windowAfterTrigger;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSMutableDictionary *lqmWindowsFeatures;

+ (void)initialize;
+ (id)config;
+ (unsigned long long)canCreateAnalysisFor:(id)a0;
+ (void)computeFeatures:(id)a0 For:(id)a1 WithLogLabel:(id)a2;
+ (char)isInCallAnalysisDue:(id)a0;
+ (char)isKernerlParsingEnabled;
+ (unsigned long long)maxConcurrentAnalysis;
+ (void)updateConfig;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)performAnalysis;
- (id)dumpDimensions:(id)a0;
- (id)addDimensionsTo:(id)a0;
- (char)canSubmitToCA;
- (void)computeBins:(id)a0 WithSampleKind:(Class)a1;
- (void)computeFeaturesFor:(id)a0 WithLogLabel:(id)a1;
- (id)dumpAnalysis:(id)a0;
- (id)fetchKernelLQMRollingWindowForInterface:(id)a0 into:(id)a1;
- (char)getBeforeKernelWindowWithLikelyhood;
- (id)initWithRollingWindow:(id)a0 andReason:(id)a1 andContext:(struct context { char x0; char x1; char x2; })a2 andTimestamp:(id)a3 onQueue:(id)a4;
- (char)isAnalysisTodo;
- (id)metricCallbackForMetric:(id)a0 AndField:(id)a1;
- (void)updateWithLQMSample:(id)a0;
- (void)updateWithSubsequentTrigger:(id)a0;

@end
