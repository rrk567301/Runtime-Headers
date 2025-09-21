@class NSString;

@interface DarwinNotificationInvalidationSource : PreflightCacheInvalidationSource {
    int _token;
}

@property (readonly, nonatomic) NSString *notificationName;

- (void)dealloc;
- (id)invalidationReason;
- (void).cxx_destruct;
- (id)initWithPreflightCache:(id)a0 notificationName:(const char *)a1;

@end
