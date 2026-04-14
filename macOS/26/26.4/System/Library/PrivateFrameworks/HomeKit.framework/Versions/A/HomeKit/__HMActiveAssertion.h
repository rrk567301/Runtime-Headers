@class _HMContext, NSUUID;

@interface __HMActiveAssertion : HMFAssertion

@property (readonly) _HMContext *context;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (readonly, copy) NSUUID *UUID;

- (BOOL)acquire:(id *)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithName:(id)a0 context:(id)a1 messageTargetUUID:(id)a2;

@end
