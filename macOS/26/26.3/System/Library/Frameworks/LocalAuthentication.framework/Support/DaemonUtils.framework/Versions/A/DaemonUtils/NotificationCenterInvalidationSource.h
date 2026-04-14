@class NSString;

@interface NotificationCenterInvalidationSource : PreflightCacheInvalidationSource

@property (readonly, nonatomic) NSString *notificationName;

- (id)invalidationReason;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_notification:(id)a0;
- (id)initWithPreflightCache:(id)a0 notificationName:(id)a1;

@end
