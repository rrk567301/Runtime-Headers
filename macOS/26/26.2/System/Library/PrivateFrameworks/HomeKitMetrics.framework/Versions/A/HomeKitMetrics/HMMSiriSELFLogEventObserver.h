@class NSString;
@protocol HMMSiriSELFAnalyticsStream;

@interface HMMSiriSELFLogEventObserver : HMFObject <HMFLogging, HMMLogEventObserver>

@property (readonly, nonatomic) id<HMMSiriSELFAnalyticsStream> siriAnalyticsStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)observeEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithSiriAnalyticsStream:(id)a0 logEventDispatcher:(id)a1;

@end
