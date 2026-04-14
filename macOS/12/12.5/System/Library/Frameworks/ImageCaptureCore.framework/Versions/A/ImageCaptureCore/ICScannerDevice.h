@class NSString, NSMutableDictionary, NSArray, NSURL, ICScannerFunctionalUnit;

@interface ICScannerDevice : ICDevice {
    id _scannerProperties;
}

@property (copy, nonatomic) NSString *buttonPressed;
@property (readonly) BOOL supportsICARawFileFormat;
@property (readonly) NSMutableDictionary *scanContext;
@property BOOL scanParamsRetained;
@property (readonly) NSArray *availableFunctionalUnitTypes;
@property (readonly) ICScannerFunctionalUnit *selectedFunctionalUnit;
@property unsigned long long transferMode;
@property unsigned int maxMemoryBandSize;
@property (retain) NSURL *downloadsDirectory;
@property (copy) NSString *documentName;
@property (copy) NSString *documentUTI;
@property (copy) NSString *defaultUsername;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancelScan;
- (void)requestOpenSession;
- (void)requestCloseSession;
- (void)requestSelectFunctionalUnit:(unsigned long long)a0;
- (void)requestOverviewScan;
- (void)requestScan;
- (void)saveAsVirtualScanner;
- (void)requestOpenSessionWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)cleanupDeviceWithErrorCode:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)handleCommandCompletion:(id)a0;
- (void)handleImageCaptureEventNotification:(id)a0 completion:(id /* block */)a1;
- (BOOL)updateProperties:(id)a0;
- (void)requestCloseSessionWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)registerForImageCaptureEventNotifications:(id)a0;
- (void)unregisterForImageCaptureEventNotifications:(id)a0;
- (unsigned int)numOpenSessionRetries;
- (void)setNumOpenSessionRetries:(unsigned int)a0;
- (void)initializeScannerProperties:(id)a0;
- (void)handleOverviewScanEnded:(id)a0;
- (void)handleScanEnded:(id)a0;
- (void)requestChangeVendorFeature:(id)a0;
- (void)handleScannerDictionary:(id)a0;
- (void)getScanParameters:(id)a0;
- (void)handleScanParameters:(id)a0;
- (void)getScannerDictionary;
- (void)requestOverviewScanWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)requestScanWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)handlePageDone:(id)a0;
- (void)handleObjectAdded:(id)a0;
- (void)handleTransfer:(id)a0;
- (void)legacySupportMemoryTransferWithURL:(id)a0;
- (void)virtualScanStateMachine:(int)a0 functionalUnit:(unsigned int)a1 andError:(unsigned int)a2;
- (void)requestOpenSessionWithCredentials:(id)a0 password:(id)a1;

@end
