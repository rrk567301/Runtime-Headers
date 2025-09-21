@class NSObject, NSString, NEConfigurationManager, NSError, NSDate, NEVPNManager;
@protocol OS_dispatch_queue;

@interface NEVPNConnection : NSObject {
    char _initialized;
    int _sessionType;
    NEConfigurationManager *_configManager;
    NSString *_configurationName;
    NSObject<OS_dispatch_queue> *_queue;
    void *_session;
    NEVPNManager *_weakmanager;
}

@property (nonatomic) char installed;
@property (nonatomic) char installNotify;
@property (readonly) NSError *lastDisconnectError;
@property (readonly) long long status;
@property (readonly) NSDate *connectedDate;
@property (readonly) NEVPNManager *manager;

+ (id)createConnectionForEnabledEnterpriseConfiguration;
+ (id)createConnectionForEnabledEnterpriseConfigurationWithName:(id)a0;
+ (id)createDisconnectErrorWithDomain:(id)a0 code:(unsigned int)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)fetchExtendedStatusWithCompletionHandler:(id /* block */)a0;
- (void)fetchLastDisconnectErrorWithCompletionHandler:(id /* block */)a0;
- (void)fetchStatisticsWithCompletionHandler:(id /* block */)a0;
- (char)startVPNTunnelAndReturnError:(id *)a0;
- (char)startVPNTunnelWithOptions:(id)a0 andReturnError:(id *)a1;
- (void)stopVPNTunnel;

@end
