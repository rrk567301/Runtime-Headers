@class IDSService, NSString;

@interface IMDQuickSwitchController : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *quickSwitchIDSService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_notifyPSYWithResult:(BOOL)a0;
- (void)_handleDBVersionResponse:(id)a0;
- (BOOL)_sendZippedFileAtPath:(id)a0 withCommand:(long long)a1;
- (void)_notifyPSYDataSent;
- (id)_getDowngradedDBPath;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (unsigned long long)_getFileSizeAtPath:(id)a0;
- (void)_sendQuickSwitchCompletedWithResult:(BOOL)a0;
- (BOOL)_isPairedDeviceInProxyMode;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)_compressFileAtPath:(id)a0 toPath:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_initiateQuickSwitch;
- (id)_getTempRecentsPath;
- (id)init;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)dummyMethod;
- (void)_handleQuickSwitchInitiateRequest;
- (void)_cleanUpTemporaryFiles;
- (void)_sendRecentsRequest;
- (void)_handleIncomingRecents:(id)a0;
- (void).cxx_destruct;
- (void)_handleQuickSwitchCompleted:(id)a0;
- (void)_decompressFileAtPath:(id)a0 toPath:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)dealloc;
- (void)_deleteFileAtPath:(id)a0;
- (BOOL)_truncateDBToPath:(id)a0;
- (BOOL)_sendIDSMessage:(id)a0;
- (id)_getTempDBPath;
- (BOOL)_sendIDSFile:(id)a0 withCommand:(long long)a1;
- (id)_defaultPairedDevice;
- (long long)_getCurrentDBVersion;
- (void)_handleIncomingDB:(id)a0;
- (id)_getTruncatedDBPath;
- (void)_handleRecentsRequest;
- (id)_getZippedRecentsPath;
- (void)_sendDBVersionResponse:(long long)a0;
- (void)_quickSwitchCompleted:(BOOL)a0;
- (id)_getZippedDBPath;

@end
