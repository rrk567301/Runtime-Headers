@class SMPairingCode, NSString, SMSystem_Daemon_Network, NSObject;
@protocol OS_dispatch_queue, SMPairingEventsListener;

@interface SMPairingManager : NSObject <SMSystemScannerChangesProtocol, SMSystemScannerDaemonClient>

@property (weak) id<SMPairingEventsListener> delegate;
@property unsigned long long requestedDaemonScannerState;
@property (retain) SMPairingCode *pairingCode;
@property BOOL started;
@property (retain) SMSystem_Daemon_Network *currentSystem;
@property (retain) NSObject<OS_dispatch_queue> *pairingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)startScanning;
- (void)stopScanning;
- (void)startPairing;
- (void)stopAccessPoint;
- (void)_startPairing;
- (void)_stopPairing;
- (BOOL)isRetryableError:(id)a0;
- (id)pairingErrorWithCode:(unsigned long long)a0;
- (id)pairingErrorWithCode:(unsigned long long)a0 userInfo:(id)a1;
- (BOOL)startAccessPoint:(id *)a0;
- (void)stopPairing;
- (void)systemScannerAddedSystem:(id)a0;
- (void)systemScannerRemovedSystem:(id)a0;
- (void)systemScannerSystemChanged:(id)a0 onSystem:(id)a1;

@end
