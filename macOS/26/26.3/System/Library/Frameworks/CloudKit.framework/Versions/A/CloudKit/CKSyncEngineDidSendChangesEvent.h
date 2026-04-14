@class CKSyncEngineSendChangesContext;

@interface CKSyncEngineDidSendChangesEvent : CKSyncEngineEvent

@property (readonly, nonatomic) CKSyncEngineSendChangesContext *context;

- (id)initWithContext:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (long long)type;
- (void).cxx_destruct;

@end
