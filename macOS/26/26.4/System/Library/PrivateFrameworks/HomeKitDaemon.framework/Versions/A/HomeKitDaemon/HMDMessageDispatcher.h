@class HMDSecureRemoteMessageFilter, HMDMessageFilterChain, HMDHomeManager, NSMutableDictionary, HMDSecureRemoteMessageTransport, HMDXPCMessageTransport, NSCache;

@interface HMDMessageDispatcher : HMFMessageDispatcher

@property (class, readonly) HMDMessageDispatcher *defaultDispatcher;

@property (retain, nonatomic) NSMutableDictionary *remoteGateways;
@property (readonly, nonatomic) HMDSecureRemoteMessageFilter *secureRemoteMessageFilter;
@property (readonly, nonatomic) NSCache *homeForTarget;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) HMDXPCMessageTransport *XPCTransport;
@property (readonly, nonatomic) HMDSecureRemoteMessageTransport *secureRemoteTransport;
@property (readonly, nonatomic) HMDMessageFilterChain *messageFilterChain;

+ (id)destinationWithTarget:(id)a0 userID:(id)a1 destination:(id)a2 multicast:(BOOL)a3 accountRegistry:(id)a4;
+ (id)logCategory;
+ (id)destinationWithTarget:(id)a0 userID:(id)a1 destination:(id)a2 multicast:(BOOL)a3;

- (void)dispatchMessage:(id)a0;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithXPCTransport:(id)a0 secureRemoteTransport:(id)a1 messageFilterChain:(id)a2;
- (void)configureHomeManager:(id)a0;
- (id)sendMessageExpectingResponse:(id)a0;
- (void)setCompanionDevice:(id)a0 forHome:(id)a1;
- (id)residentCommunicationHandlerForHome:(id)a0;
- (void)setRemoteAccessDevice:(id)a0 forHome:(id)a1;
- (void)_setRemoteAccessDevice:(id)a0 forHome:(id)a1 sendNotification:(BOOL)a2;
- (void)sendSecureMessage:(id)a0 target:(id)a1 userID:(id)a2 destination:(id)a3 responseQueue:(id)a4 responseHandler:(id /* block */)a5;
- (id)remoteAccessDeviceForHome:(id)a0;
- (void).cxx_destruct;
- (void)handleSecureSessionError:(id)a0;
- (void)reset;
- (id)homeForMessageTarget:(id)a0;
- (void)clearHomesForMessageTargetCache;
- (id)messageRegistrationsForReceiver:(id)a0 name:(id)a1 policies:(id)a2 selector:(SEL)a3;
- (void)electDeviceForHH1User:(id)a0 destination:(id)a1 deviceCapabilities:(id)a2 responseTimeout:(double)a3 responseQueue:(id)a4 responseHandler:(id /* block */)a5;
- (void)dealloc;

@end
