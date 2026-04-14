@class PARSession;
@protocol VIAnalyticsTestingDelegate;

@interface VIAFeedbackSubmitter : NSObject

@property (readonly, nonatomic) PARSession *parSession;
@property (weak, nonatomic) id<VIAnalyticsTestingDelegate> testingDelegate;

- (void).cxx_destruct;
- (void)reportFeedback:(id)a0 queryId:(long long)a1;
- (id)initWithPARSession:(id)a0;
- (void)didHitCacheForQueryId:(unsigned long long)a0;

@end
