@class HMXPCMessageTransportConfiguration, NSString, NSUUID, NSXPCConnection, NSDictionary, NSMutableArray;

@interface HMXPCClient : HMFMessageTransport <HMFMessageTransportDelegate, HMFLogging> {
    NSMutableArray *_reconnectionHandlers;
    unsigned long long _homeDataAuthorizationStatus;
}

@property (readonly, copy, nonatomic) NSString *logIdentifier;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) BOOL connectionValid;
@property (nonatomic) BOOL requiresCheckin;
@property (nonatomic) BOOL isAuthorizedForHomeDataAccess;
@property (nonatomic) int notifyRegisterToken;
@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) HMXPCMessageTransportConfiguration *configuration;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)remoteObjectInterface;
+ (id)logCategory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (void)registerReconnectionHandler:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 userInfo:(id)a1;

@end
