@class CKSyncEngineSendChangesContext;

@interface CKSyncEngineWillSendChangesEvent : CKSyncEngineEvent

@property (readonly, nonatomic) CKSyncEngineSendChangesContext *context;

- (id)initWithContext:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (void).cxx_destruct;
- (long long)type;

@end
