@class NSString, NSXPCConnection, NSDate, NSObject, DACDeviceRole;
@protocol DACRoleManagerDelegate, OS_dispatch_queue;

@interface DACRoleManager : NSObject <DACRoleClientInterface>

@property (readonly, weak, nonatomic) id<DACRoleManagerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSDate *lastLeaderAt;
@property (retain, nonatomic) DACDeviceRole *role;
@property (weak, nonatomic) NSXPCConnection *currentConnection;
@property (nonatomic) BOOL shouldAttemptReconnect;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (nonatomic) int resetNotifyToken;
@property (readonly, nonatomic) NSString *cluster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_serviceConnection;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (void)_notifyDelegate;
- (void)_lostConnectionToService;
- (void)roleChanged:(id)a0;
- (id)initWithDelegate:(id)a0 lastLeaderAt:(id)a1 cluster:(id)a2 queue:(id)a3;
- (void)requestSpeakerGroupLeaderRole;
- (void)_conductordResetOnQueue;

@end
