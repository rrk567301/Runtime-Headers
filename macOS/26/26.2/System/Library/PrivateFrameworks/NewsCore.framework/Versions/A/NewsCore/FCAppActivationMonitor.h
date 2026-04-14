@class NSString, NSDate;

@interface FCAppActivationMonitor : NSObject <FCAppActivityObserving, FCAppActivationMonitorType>

@property (retain) NSDate *lastActivationDate;
@property (retain) NSDate *lastBackgroundDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)activityObservingApplicationDidEnterBackground;
- (id)init;
- (void)activityObservingApplicationDidBecomeActive;
- (id)initWithAppActivityMonitor:(id)a0;

@end
