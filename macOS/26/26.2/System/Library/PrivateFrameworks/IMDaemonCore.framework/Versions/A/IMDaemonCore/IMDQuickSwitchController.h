@class IDSService, NSString;

@interface IMDQuickSwitchController : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *quickSwitchIDSService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_defaultPairedDevice;
- (id)_getTruncatedDBPath;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)_initiateQuickSwitch;
- (unsigned long long)_getFileSizeAtPath:(id)a0;
- (void)_compressFileAtPath:(id)a0 toPath:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_handleIncomingRecents:(id)a0;
- (void)_handleQuickSwitchInitiateRequest;
- (void)_cleanUpTemporaryFiles;
- (BOOL)_isPairedDeviceInProxyMode;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (BOOL)_sendIDSFile:(id)a0 withCommand:(long long)a1;
- (void)_handleIncomingDB:(id)a0;
- (void)_handleRecentsRequest;
- (void).cxx_destruct;
- (void)_sendDBVersionResponse:(long long)a0;
- (id)_getTempDBPath;
- (void)_notifyPSYWithResult:(BOOL)a0;
- (void)_deleteFileAtPath:(id)a0;
- (void)_sendRecentsRequest;
- (void)_handleQuickSwitchCompleted:(id)a0;
- (id)_getZippedRecentsPath;
- (void)_handleDBVersionResponse:(id)a0;
- (void)dummyMethod;
- (void)_notifyPSYDataSent;
- (id)_getDowngradedDBPath;
- (BOOL)_sendZippedFileAtPath:(id)a0 withCommand:(long long)a1;
- (BOOL)_sendIDSMessage:(id)a0;
- (long long)_getCurrentDBVersion;
- (void)_sendQuickSwitchCompletedWithResult:(BOOL)a0;
- (id)init;
- (id)_getZippedDBPath;
- (BOOL)_truncateDBToPath:(id)a0;
- (id)_getTempRecentsPath;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)_quickSwitchCompleted:(BOOL)a0;
- (void)dealloc;
- (void)_decompressFileAtPath:(id)a0 toPath:(id)a1 withCompletionBlock:(id /* block */)a2;

@end
