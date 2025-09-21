@class MTRDevice, HMSupportedAccessoryDiagnostics;
@protocol HMDFileManager;

@interface HMDMatterAccessoryDiagnosticsManager : HMDAccessoryDiagnosticsManagerInternal

@property (retain, nonatomic) HMSupportedAccessoryDiagnostics *supportedDiagnostics;
@property (weak, nonatomic) MTRDevice *matterDevice;
@property (retain, nonatomic) id<HMDFileManager> fileManager;
@property (nonatomic, getter=isStarted) BOOL started;

- (void)shutDown;
- (void)start;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;
- (id)_diagnosticsMetadataFromFile:(id)a0 outError:(id *)a1;
- (void)handleDiagnosticsTransferWithOptions:(id)a0 message:(id)a1;

@end
