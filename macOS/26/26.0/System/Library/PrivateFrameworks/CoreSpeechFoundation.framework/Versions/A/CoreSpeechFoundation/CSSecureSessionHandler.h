@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CSSecureSessionHandler : NSObject <CSSiriEnabledMonitorDelegate, CSUserSessionActiveMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSSystemDaemonStateMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *assertionSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHandler;
+ (id)siriEnablementSessionAssertionUUID;

- (void)CSSystemDaemonStateMonitorDidReceiveSysDaemonRestartFromCrash:(id)a0;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)a0;
- (void)start;
- (void)CSSystemDaemonStateMonitorDidReceiveSysDaemonCrash:(id)a0;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)CSSiriEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;
- (void)_activateSecureSessionIfNeeded;
- (void)_deactivateSecureSessionIfNeeded;
- (void)acquireSecureSessionAssertionWithUUID:(id)a0;
- (void)releaseAllSecureSessionAssertions;
- (void)releaseSecureSessionAssertionWithUUID:(id)a0;

@end
