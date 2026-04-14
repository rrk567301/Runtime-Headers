@class NSString;

@interface DarwinNotificationInvalidationSource : PreflightCacheInvalidationSource {
    int _token;
}

@property (readonly, nonatomic) NSString *notificationName;

- (id)invalidationReason;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPreflightCache:(id)a0 notificationName:(const char *)a1;

@end
