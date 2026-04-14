@class HMDRapportMessaging;

@interface HMDRapportMessageTransport : HMDRemoteMessageTransport

@property (readonly, nonatomic) HMDRapportMessaging *rapportMessaging;

+ (id)logCategory;
+ (unsigned long long)restriction;

- (void).cxx_destruct;
- (void)start;
- (BOOL)isSecure;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canSendMessage:(id)a0;
- (id)initWithAccountRegistry:(id)a0;
- (id)initWithAccountRegistry:(id)a0 rapportMessaging:(id)a1;
- (void)_configureRapport;
- (id)_IDSIdentifierForDestination:(id)a0;
- (id)_deviceForIDSID:(id)a0;
- (void)_sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)_serializeMessage:(id)a0 error:(id *)a1;
- (void)_didReceiveRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;

@end
