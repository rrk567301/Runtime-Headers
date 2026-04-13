@class HMFMessageDestination, NSArray;

@interface HMDRemoteAccountMessageFilter : HMDMessageFilter

@property (readonly) HMFMessageDestination *target;
@property (readonly, copy) NSArray *whitelistedMessages;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithTarget:(id)a0;
- (id)logIdentifier;
- (BOOL)acceptMessage:(id)a0 target:(id)a1 errorReason:(id *)a2;
- (id)initWithTarget:(id)a0 whitelistedMessages:(id)a1;
- (BOOL)__shouldCheckMessage:(id)a0;

@end
