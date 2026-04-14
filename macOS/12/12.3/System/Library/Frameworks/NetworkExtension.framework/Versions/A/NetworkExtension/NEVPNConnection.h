@class NSDate, NSString, NEConfigurationManager, NSError, NSObject, NEVPNManager;
@protocol OS_dispatch_queue;

@interface NEVPNConnection : NSObject

@property (readonly, nonatomic) NEConfigurationManager *configManager;
@property (retain, nonatomic) NSString *configurationName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property void *session;
@property (readonly, nonatomic) int sessionType;
@property (weak) NEVPNManager *weakmanager;
@property (nonatomic) BOOL initialized;
@property (nonatomic) BOOL installed;
@property (nonatomic) BOOL installNotify;
@property (readonly) NSError *lastDisconnectError;
@property (readonly) long long status;
@property (readonly) NSDate *connectedDate;
@property (readonly) NEVPNManager *manager;

+ (id)createDisconnectErrorWithDomain:(id)a0 code:(unsigned int)a1;
+ (id)createConnectionForEnabledEnterpriseConfigurationWithName:(id)a0;
+ (id)createConnectionForEnabledEnterpriseConfiguration;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithType:(int)a0;
- (void)reload;
- (void)newSessionWithConfigID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)startVPNTunnelWithOptions:(id)a0 andReturnError:(id *)a1;
- (void)stopVPNTunnel;
- (void)destroySession;
- (void)resetLastDisconnectError:(id)a0;
- (void)createSessionWithConfigurationIdentifier:(id)a0 forceInfoFetch:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)updateSessionInfoForce:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (id)initHeadlessWithName:(id)a0;
- (BOOL)startVPNTunnelAndReturnError:(id *)a0;

@end
