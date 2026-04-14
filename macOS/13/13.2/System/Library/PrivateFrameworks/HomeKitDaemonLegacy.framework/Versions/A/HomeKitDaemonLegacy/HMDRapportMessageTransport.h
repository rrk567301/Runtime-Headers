@class HMDRapportMessaging, HMDAppleAccountManager;
@protocol HMMLogEventSubmitting;

@interface HMDRapportMessageTransport : HMDRemoteMessageTransport <HMDRapportMessagingReachabilityDelegate>

@property (readonly, nonatomic) HMDRapportMessaging *rapportMessaging;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) HMDAppleAccountManager *appleAccountManager;

+ (id)logCategory;
+ (unsigned long long)restriction;

- (void).cxx_destruct;
- (id)start;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (int)transportType;
- (BOOL)isSecure;
- (BOOL)canSendMessage:(id)a0;
- (id)initWithAccountRegistry:(id)a0;
- (BOOL)isValidMessage:(id)a0;
- (void)rapportMessaging:(id)a0 idsIdentifier:(id)a1 didAppearReachable:(BOOL)a2;
- (id)initWithAccountRegistry:(id)a0 rapportMessaging:(id)a1 logEventSubmitter:(id)a2 appleAccountManager:(id)a3;
- (void)_configureRapport;
- (id)_IDSIdentifierForDestination:(id)a0;
- (id)_deviceForIDSIdentifier:(id)a0 deviceIdentifier:(id)a1;
- (void)_setSharedUserIDSIdentifierForDevice:(id)a0 idsIdentifier:(id)a1;
- (void)_sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)_serializeRemoteMessage:(id)a0 withResponseErrorData:(id)a1 serializationError:(id *)a2;
- (void)_addSourceDeviceIdentifierToPayload:(id)a0 withRemoteMessage:(id)a1;
- (void)_didReceiveRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (id)_rpOptions:(id)a0 stringForKey:(id)a1;

@end
