@class HMDWatchManager, HMDCompanionManager;

@interface HMDIDSProxyMessageTransport : HMDIDSMessageTransport

@property (readonly, nonatomic) HMDWatchManager *watchManager;
@property (readonly, nonatomic) HMDCompanionManager *companionManager;

+ (id)logCategory;
+ (BOOL)transportSupportsDevice:(id)a0;
+ (unsigned long long)restriction;
+ (long long)priorityForMessage:(id)a0;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)deviceForHandle:(id)a0;
- (BOOL)isSecure;
- (id)sendMessage:(id)a0 fromHandle:(id)a1 destination:(id)a2 priority:(long long)a3 timeout:(double)a4 options:(unsigned long long)a5 queueOneID:(id)a6 error:(id *)a7;
- (id)deviceForSenderContext:(id)a0;
- (BOOL)canSendMessage:(id)a0;
- (long long)qualityOfService;
- (id)remoteMessageFromMessage:(id)a0;
- (int)transportType;
- (id)watchDeviceForDevice:(id)a0;
- (BOOL)isDeviceConnected:(id)a0;
- (id)initWithAccountRegistry:(id)a0;
- (void).cxx_destruct;

@end
