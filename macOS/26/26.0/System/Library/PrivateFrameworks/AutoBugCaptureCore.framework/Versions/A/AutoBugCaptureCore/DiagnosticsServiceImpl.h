@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DiagnosticsServiceImpl : NSObject <NSXPCListenerDelegate, DiagnosticsServiceInterface> {
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *allowanceCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getAutoBugCaptureConfiguration:(id /* block */)a0;
- (void)addSignatureContentForSession:(id)a0 key:(id)a1 content:(id)a2 reply:(id /* block */)a3;
- (void)shutdown;
- (void)startSessionWithSignature:(id)a0 duration:(unsigned long long)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 wantsRemoteCase:(BOOL)a5 reply:(id /* block */)a6;
- (void)endSession:(id)a0;
- (void)cancelSession:(id)a0;
- (void)addToSession:(id)a0 events:(id)a1 payload:(id)a2 reply:(id /* block */)a3;
- (void)submitRecentCaseSummariesWithCount:(unsigned long long)a0 reply:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)uploadCasesWithIdentifiersToCloudKit:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)listCaseSummariesOfType:(id)a0 fromIdentifier:(id)a1 count:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)getExpertSystemsStatus:(id /* block */)a0;
- (void)snapshotWithSignature:(id)a0 delay:(unsigned long long)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 wantsRemoteCase:(BOOL)a5 reply:(id /* block */)a6;
- (BOOL)_checkRateLimitForAllowance:(id)a0 time:(id)a1;
- (void)getSessionStatisticsWithReply:(id /* block */)a0;
- (void)submitRecentCaseSummariesWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)requestGroupCaseIdentifierForSignature:(id)a0 reply:(id /* block */)a1;
- (void)getCasesListFromIdentifier:(id)a0 count:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)addToSession:(id)a0 event:(id)a1 payload:(id)a2 reply:(id /* block */)a3;
- (void)purgeAutoBugCaptureFilesWithSubPaths:(id)a0 reply:(id /* block */)a1;
- (void)resetAllWithReply:(id /* block */)a0;
- (void)uploadRecentCases:(unsigned long long)a0;
- (void)getDiagnosticPayloadsForSignatures:(id)a0 reply:(id /* block */)a1;
- (void)resetDiagnosticCaseUsageWithReply:(id /* block */)a0;
- (void)listCaseSummariesWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)triggerRemoteSessionForSignature:(id)a0 groupIdentifier:(id)a1 reply:(id /* block */)a2;
- (void)cloudKitUploadDecisionForCaseIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)resetDiagnosticCaseStorageWithReply:(id /* block */)a0;
- (void).cxx_destruct;

@end
