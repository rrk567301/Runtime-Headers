@class CKSyncEngineSendChangesContext;

@interface CKSyncEngineWillSendChangesEvent : CKSyncEngineEvent

@property (readonly, nonatomic) CKSyncEngineSendChangesContext *context;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithContext:(id)a0;
- (long long)type;
- (void).cxx_destruct;

@end
