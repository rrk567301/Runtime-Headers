@class NSString;
@protocol HMMLogEventSubmitting;

@interface HAPMetricsDispatcher : HMFObject <HMMLogEventSubmitting>

@property (retain, nonatomic) id<HMMLogEventSubmitting> logDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)submitLogEvent:(id)a0 error:(id)a1;
- (void)submitLogEvent:(id)a0;
- (void).cxx_destruct;

@end
