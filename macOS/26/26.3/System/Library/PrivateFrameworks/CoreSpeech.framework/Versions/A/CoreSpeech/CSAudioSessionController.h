@class NSUUID, NSString, NSHashTable, CSXPCClient, NSObject;
@protocol OS_dispatch_queue, CSAudioSessionInfoProviding;

@interface CSAudioSessionController : NSObject <CSAudioSessionInfoProvidingDelegate, CSXPCClientDelegate, CSCoreSpeechDaemonStateMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) id<CSAudioSessionInfoProviding> sessionInfoProvider;
@property (retain, nonatomic) CSXPCClient *xpcClient;
@property BOOL shouldKeepConnection;
@property (retain, nonatomic) NSUUID *endpointId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)CSXPCClient:(id)a0 didDisconnect:(BOOL)a1;
- (id)initWithEndpointId:(id)a0;
- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)a1;
- (void)getAudioSessionIDWithCompletion:(id /* block */)a0;
- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)a1;
- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)a1;
- (id)init;
- (void)_startMonitoring;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (BOOL)_createXPCClientConnectionIfNeeded;
- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)a1;
- (void)_teardownXPCClientIfNeeded;
- (unsigned int)_getAudioSessionID;
- (unsigned int)getAudioSessionID;
- (void)coreSpeechDaemonStateMonitor:(id)a0 didReceiveStateChanged:(unsigned long long)a1;

@end
