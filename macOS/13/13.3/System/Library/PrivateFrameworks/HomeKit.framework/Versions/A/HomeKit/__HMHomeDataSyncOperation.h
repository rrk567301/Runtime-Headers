@class HMHomeManager;

@interface __HMHomeDataSyncOperation : HMFOperation

@property (readonly, weak) HMHomeManager *manager;
@property (getter=isRefresh) BOOL refresh;

- (void).cxx_destruct;
- (void)main;
- (id)initWithHomeManager:(id)a0;
- (id)initWithHomeManager:(id)a0 timeout:(double)a1;

@end
