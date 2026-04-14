@class NSMutableDictionary, NSXPCConnection, HMServiceDaemon, NSObject, HMServiceClient;
@protocol OS_dispatch_queue;

@interface HMServiceXPCConnection : NSObject <HMServiceXPCDaemonInterface>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) HMServiceDaemon *daemon;
@property (nonatomic) BOOL entitled;
@property (retain, nonatomic) HMServiceClient *hearingModeClient;
@property (retain) NSMutableDictionary *records;
@property (retain, nonatomic) NSXPCConnection *xpcCnx;

- (void).cxx_destruct;
- (void)clientActivate:(id)a0 completion:(id /* block */)a1;
- (void)clientModifyDeviceConfig:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)clientTriggerOnDemandDiagnosticCheckForDeviceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)clientReportHMDeviceRecordLost:(id)a0;
- (BOOL)_entitledAndReturnError:(id *)a0;
- (void)clientReportDiagnosticRecord:(id)a0;
- (void)clientReportHMDeviceRecordChanged:(id)a0;
- (void)xpcConnectionInvalidated;

@end
