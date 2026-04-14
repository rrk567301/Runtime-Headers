@class HMDRapportMessaging, HMDAppleAccountManager, NSString;
@protocol HMDRemoteMessageListener, HMMLogEventSubmitting;

@interface HMDRapportMessageTransport : HMDRemoteMessageTransport <HMDRapportMessagingReachabilityDelegate>

@property (readonly, nonatomic) HMDRapportMessaging *rapportMessaging;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) HMDAppleAccountManager *appleAccountManager;
@property (readonly, nonatomic) NSString *requestID;
@property (retain, nonatomic) id<HMDRemoteMessageListener> remoteMessageListener;

+ (id)logCategory;
+ (unsigned long long)restriction;
+ (id)requestIDsToRegister;

- (BOOL)isSecure;
- (BOOL)isValidMessage:(id)a0;
- (BOOL)canSendMessage:(id)a0;
- (id)_IDSIdentifiersForMessage:(id)a0;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setSharedUserIDSIdentifierForDevice:(id)a0 idsIdentifier:(id)a1;
- (id)_serializeRemoteMessage:(id)a0 withResponseErrorData:(id)a1 serializationError:(id *)a2;
- (id)start;
- (void)rapportMessaging:(id)a0 idsIdentifier:(id)a1 didAppearReachable:(BOOL)a2;
- (void)_configureRapport:(id)a0;
- (int)transportType;
- (id)_rpOptions:(id)a0 stringForKey:(id)a1;
- (void)_didReceiveRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (id)initWithAccountRegistry:(id)a0 requestID:(id)a1 rapportMessaging:(id)a2 logEventSubmitter:(id)a3 appleAccountManager:(id)a4;
- (id)_IDSIdentifierForDevice:(id)a0;
- (id)initWithAccountRegistry:(id)a0;
- (id)initWithAccountRegistry:(id)a0 requestID:(id)a1;
- (void).cxx_destruct;
- (id)_IDSIdentifierForDestination:(id)a0;

@end
