@class CKSyncEngineFetchChangesContext;

@interface CKSyncEngineWillFetchChangesEvent : CKSyncEngineEvent

@property (readonly, nonatomic) CKSyncEngineFetchChangesContext *context;

- (id)initWithContext:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (void).cxx_destruct;
- (long long)type;

@end
