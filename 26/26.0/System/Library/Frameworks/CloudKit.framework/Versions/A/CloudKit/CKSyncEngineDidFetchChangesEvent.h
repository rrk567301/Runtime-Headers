@class CKSyncEngineFetchChangesContext;

@interface CKSyncEngineDidFetchChangesEvent : CKSyncEngineEvent

@property (readonly, nonatomic) CKSyncEngineFetchChangesContext *context;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithContext:(id)a0;
- (long long)type;
- (void).cxx_destruct;

@end
