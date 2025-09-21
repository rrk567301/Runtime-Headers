@protocol HMMLogEventSubmitting;

@interface HMDPrimaryResidentMessageRouterMetricsDispatcher : HMFObject

@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;

- (id)initWithLogEventSubmitter:(id)a0;
- (void).cxx_destruct;
- (void)submitFailureEventWithMessageName:(id)a0 failureType:(long long)a1;

@end
