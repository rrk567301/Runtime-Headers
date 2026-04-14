@class LACAnalyticsData, NSString, NSMutableArray;

@interface LACAnalyticsSession : NSObject <LACAnalyticsCollecting> {
    NSMutableArray *_evaluationAnalytics;
}

@property (readonly, nonatomic) LACAnalyticsData *analyticsData;
@property (readonly, nonatomic) NSString *dialogID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)finish;
- (void).cxx_destruct;
- (void)authenticationAction:(long long)a0 failing:(BOOL)a1;
- (void)authenticationAttemptFailedForEvent:(long long)a0;
- (void)authenticationStartedForEvent:(long long)a0;
- (void)authenticationSuccessfulForEvent:(long long)a0;
- (id)initWithDialogID:(id)a0 bundleID:(id)a1;
- (void)mergeEvaluationAnalytics:(id)a0;
- (void)trackEvaluationAnalytics:(id)a0;
- (void)untrackEvaluationAnalytics:(id)a0;

@end
