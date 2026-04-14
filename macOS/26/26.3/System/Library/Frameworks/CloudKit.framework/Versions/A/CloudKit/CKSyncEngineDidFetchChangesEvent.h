@class CKSyncEngineFetchChangesContext;

@interface CKSyncEngineDidFetchChangesEvent : CKSyncEngineEvent

@property (readonly, nonatomic) CKSyncEngineFetchChangesContext *context;

- (id)initWithContext:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (long long)type;
- (void).cxx_destruct;

@end
