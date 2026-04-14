@class NSString, HMDRemoteLoginAuthentication;

@interface HMDRemoteLoginReceiverSession : HMFObject

@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) HMDRemoteLoginAuthentication *remoteAuthentication;
@property (readonly, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithSessionID:(id)a0 remoteAuthentication:(id)a1 completion:(id /* block */)a2;

@end
