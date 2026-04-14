@class NSString;

@interface DarwinNotificationInvalidationSource : PreflightCacheInvalidationSource {
    int _token;
}

@property (readonly, nonatomic) NSString *notificationName;

- (void).cxx_destruct;
- (void)dealloc;
- (id)invalidationReason;
- (id)initWithPreflightCache:(id)a0 notificationName:(const char *)a1;

@end
