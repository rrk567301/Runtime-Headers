@class _HMContext, NSUUID;

@interface __HMActiveAssertion : HMFAssertion

@property (readonly) _HMContext *context;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (readonly, copy) NSUUID *UUID;

- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)acquire:(id *)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 context:(id)a1 messageTargetUUID:(id)a2;

@end
