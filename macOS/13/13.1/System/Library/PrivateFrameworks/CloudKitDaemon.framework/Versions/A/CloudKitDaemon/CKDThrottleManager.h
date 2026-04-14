@class CKDThrottleTableGroup, CKThrottleTable, CKDLogicalDeviceContext;

@interface CKDThrottleManager : CKThrottleManager {
    CKDThrottleTableGroup *_throttleTableGroup;
    CKThrottleTable *_throttleTable;
}

@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

- (void).cxx_destruct;
- (void)throttleWasAdded:(id)a0;
- (void)throttleWillBeRemoved:(id)a0;
- (void)throttleListBecameEmpty;
- (BOOL)addThrottle:(id)a0;
- (void)noteDataChangeForThrottle:(id)a0;
- (id)initWithDeviceContext:(id)a0;
- (id)throttleTable:(BOOL)a0;
- (void)loadThrottlesFromDatabase;
- (void)invalidateAdopterThrottles;

@end
