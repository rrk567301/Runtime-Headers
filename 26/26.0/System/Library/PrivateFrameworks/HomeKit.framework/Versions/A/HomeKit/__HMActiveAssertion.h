@class _HMContext, NSUUID;

@interface __HMActiveAssertion : HMFAssertion

@property (readonly) _HMContext *context;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (readonly, copy) NSUUID *UUID;

- (BOOL)acquire:(id *)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 context:(id)a1 messageTargetUUID:(id)a2;

@end
