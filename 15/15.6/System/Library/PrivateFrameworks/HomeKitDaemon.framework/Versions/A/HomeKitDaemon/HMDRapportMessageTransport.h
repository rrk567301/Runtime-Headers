@class HMDRapportMessaging, HMDAppleAccountManager;
@protocol HMDRemoteMessageListener, HMMLogEventSubmitting;

@interface HMDRapportMessageTransport : HMDRemoteMessageTransport <HMDRapportMessagingReachabilityDelegate>

@property (readonly, nonatomic) HMDRapportMessaging *rapportMessaging;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) HMDAppleAccountManager *appleAccountManager;
@property (retain, nonatomic) id<HMDRemoteMessageListener> remoteMessageListener;

+ (id)logCategory;
+ (unsigned long long)restriction;

- (void).cxx_destruct;
- (id)start;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (int)transportType;
- (char)isSecure;
- (char)canSendMessage:(id)a0;
- (id)startHMMMEnergy;
- (void)_sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (char)isValidMessage:(id)a0;
- (id)_IDSIdentifierForDestination:(id)a0;
- (id)_IDSIdentifierForDevice:(id)a0;
- (id)_IDSIdentifiersForMessage:(id)a0;
- (void)_configureHMMMEnergyRapport;
- (void)_configureHMMMRapport;
- (void)_configureRapport;
- (void)_didReceiveRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (id)_rpOptions:(id)a0 stringForKey:(id)a1;
- (void)_sendMessage:(id)a0 completionHandler:(id /* block */)a1 requestID:(id)a2;
- (id)_serializeRemoteMessage:(id)a0 withResponseErrorData:(id)a1 serializationError:(id *)a2;
- (void)_setSharedUserIDSIdentifierForDevice:(id)a0 idsIdentifier:(id)a1;
- (void)configureBLERapport:(id /* block */)a0;
- (id)initWithAccountRegistry:(id)a0;
- (id)initWithAccountRegistry:(id)a0 rapportMessaging:(id)a1 logEventSubmitter:(id)a2 appleAccountManager:(id)a3;
- (void)rapportMessaging:(id)a0 idsIdentifier:(id)a1 didAppearReachable:(char)a2;
- (void)sendHMMMEnergyMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendHMMMMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)startHMMM;

@end
