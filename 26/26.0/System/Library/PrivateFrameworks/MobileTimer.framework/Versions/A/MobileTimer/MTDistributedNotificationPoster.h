@class NSString;
@protocol MTEventReporting;

@interface MTDistributedNotificationPoster : NSObject <MTNotificationCenter>

@property (weak, nonatomic) id<MTEventReporting> reportingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldNotifyForTrigger:(id)a0;

- (void)registerAnalyticsDelegate:(id)a0;
- (void)postNotificationForScheduledTimer:(id)a0 completionBlock:(id /* block */)a1;
- (void)postNotificationForScheduledAlarm:(id)a0 completionBlock:(id /* block */)a1;
- (void)dismissNotificationsForTimer:(id)a0;
- (void)dismissNotificationsForAlarm:(id)a0;
- (void).cxx_destruct;

@end
