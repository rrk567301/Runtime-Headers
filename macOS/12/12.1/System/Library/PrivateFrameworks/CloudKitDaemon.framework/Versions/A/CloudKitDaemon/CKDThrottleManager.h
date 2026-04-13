@class CKDLogicalDeviceContext;

@interface CKDThrottleManager : CKThrottleManager

@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

- (void).cxx_destruct;
- (void)throttleWillBeRemoved:(id)a0;
- (void)noteDataChangeForThrottle:(id)a0;
- (BOOL)addThrottle:(id)a0;
- (id)initWithDeviceContext:(id)a0;
- (id)metadataCache;
- (void)loadThrottlesFromCache;
- (void)invalidateAdopterThrottles;

@end
