@class NSString;

@interface HMDLogEventAnalyzer : HMFObject <HMFLogging, HMMLogEventObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managedEventCounterRequestGroups;
+ (id)logCategory;

- (void)observeEvent:(id)a0;

@end
