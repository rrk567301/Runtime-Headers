@class NSString;

@interface NotificationCenterInvalidationSource : PreflightCacheInvalidationSource

@property (readonly, nonatomic) NSString *notificationName;

- (void).cxx_destruct;
- (id)invalidationReason;
- (void)dealloc;
- (void)_notification:(id)a0;
- (id)initWithPreflightCache:(id)a0 notificationName:(id)a1;

@end
