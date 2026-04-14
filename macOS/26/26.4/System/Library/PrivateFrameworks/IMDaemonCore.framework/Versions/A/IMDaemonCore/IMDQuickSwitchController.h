@class IDSService, NSString;

@interface IMDQuickSwitchController : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *quickSwitchIDSService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)_compressFileAtPath:(id)a0 toPath:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_handleQuickSwitchInitiateRequest;
- (void)_quickSwitchCompleted:(BOOL)a0;
- (void)_decompressFileAtPath:(id)a0 toPath:(id)a1 withCompletionBlock:(id /* block */)a2;
- (id)_defaultPairedDevice;
- (BOOL)_sendZippedFileAtPath:(id)a0 withCommand:(long long)a1;
- (void)_handleDBVersionResponse:(id)a0;
- (BOOL)_sendIDSFile:(id)a0 withCommand:(long long)a1;
- (BOOL)_sendIDSMessage:(id)a0;
- (void)_handleIncomingRecents:(id)a0;
- (id)_getTruncatedDBPath;
- (void)_sendRecentsRequest;
- (void)_notifyPSYWithResult:(BOOL)a0;
- (long long)_getCurrentDBVersion;
- (void)_notifyPSYDataSent;
- (id)_getTempDBPath;
- (id)_getZippedDBPath;
- (id)_getDowngradedDBPath;
- (void).cxx_destruct;
- (void)_deleteFileAtPath:(id)a0;
- (id)init;
- (unsigned long long)_getFileSizeAtPath:(id)a0;
- (void)_initiateQuickSwitch;
- (void)_cleanUpTemporaryFiles;
- (void)_handleQuickSwitchCompleted:(id)a0;
- (id)_getZippedRecentsPath;
- (void)_handleIncomingDB:(id)a0;
- (void)_handleRecentsRequest;
- (void)_sendDBVersionResponse:(long long)a0;
- (void)_sendQuickSwitchCompletedWithResult:(BOOL)a0;
- (void)dealloc;
- (void)dummyMethod;
- (BOOL)_isPairedDeviceInProxyMode;
- (id)_getTempRecentsPath;
- (BOOL)_truncateDBToPath:(id)a0;

@end
