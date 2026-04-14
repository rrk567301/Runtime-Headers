@class NSNotificationCenter, NSString;
@protocol HMFTimerManager;

@interface HMDHomePrimaryResidentMessagingHandlerDefaultDataSource : NSObject <HMDHomePrimaryResidentMessagingHandlerDataSource>

@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<HMFTimerManager> timerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
