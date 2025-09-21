@class IDSService, NSString;

@interface IMDQuickSwitchController : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *quickSwitchIDSService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_sendRecentsRequest;
- (void)_compressFileAtPath:(id)a0 toPath:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_sendQuickSwitchCompletedWithResult:(BOOL)a0;
- (void)_quickSwitchCompleted:(BOOL)a0;
- (void)_notifyPSYWithResult:(BOOL)a0;
- (BOOL)_sendIDSFile:(id)a0 withCommand:(long long)a1;
- (void)_handleIncomingDB:(id)a0;
- (void)_deleteFileAtPath:(id)a0;
- (void)dealloc;
- (void)dummyMethod;
- (id)_getZippedDBPath;
- (BOOL)_truncateDBToPath:(id)a0;
- (void)_handleQuickSwitchCompleted:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)_decompressFileAtPath:(id)a0 toPath:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_initiateQuickSwitch;
- (id)_getDowngradedDBPath;
- (BOOL)_sendZippedFileAtPath:(id)a0 withCommand:(long long)a1;
- (id)init;
- (void)_handleDBVersionResponse:(id)a0;
- (id)_defaultPairedDevice;
- (unsigned long long)_getFileSizeAtPath:(id)a0;
- (id)_getZippedRecentsPath;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)_notifyPSYDataSent;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_handleRecentsRequest;
- (void)_handleQuickSwitchInitiateRequest;
- (id)_getTempDBPath;
- (id)_getTruncatedDBPath;
- (void)_handleIncomingRecents:(id)a0;
- (long long)_getCurrentDBVersion;
- (id)_getTempRecentsPath;
- (void)_sendDBVersionResponse:(long long)a0;
- (BOOL)_isPairedDeviceInProxyMode;
- (void)_cleanUpTemporaryFiles;
- (BOOL)_sendIDSMessage:(id)a0;

@end
