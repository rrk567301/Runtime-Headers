@class PreflightCache;

@interface PreflightCacheInvalidationSource : NSObject

@property (nonatomic) BOOL status;
@property (readonly, weak, nonatomic) PreflightCache *cache;

+ (id)voidInvalidationSource;

- (id)invalidationReason;
- (void)updateStatus;
- (void).cxx_destruct;
- (void)handleNotificationInServerQueue;
- (void)handleNotificationWithCompletion:(id /* block */)a0;
- (id)initWithPreflightCache:(id)a0;

@end
