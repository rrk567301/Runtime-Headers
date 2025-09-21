@class CKSyncEngineStateSerialization;

@interface CKSyncEngineStateUpdateEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) CKSyncEngineStateSerialization *stateSerialization;

- (void)CKDescribePropertiesUsing:(id)a0;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithStateSerialization:(id)a0;

@end
