@class NSDictionary;

@interface HMDRemoteLoginInitiatorProxyAuthentication : HMDRemoteLoginInitiatorAuthentication

@property (readonly, nonatomic) NSDictionary *authResults;

+ (id)logCategory;

- (id)description;
- (void)dealloc;
- (void)authenticate;
- (void).cxx_destruct;
- (void)_authenticate;
- (id)initWithSessionID:(id)a0 remoteDevice:(id)a1 workQueue:(id)a2 remoteMessageSender:(id)a3 delegate:(id)a4 authResults:(id)a5;

@end
