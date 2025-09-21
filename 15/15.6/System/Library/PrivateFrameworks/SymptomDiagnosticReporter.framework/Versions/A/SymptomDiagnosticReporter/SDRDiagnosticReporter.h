@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, SDRDiagnosticReporterDelegate;

@interface SDRDiagnosticReporter : NSObject {
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<SDRDiagnosticReporterDelegate> delegate;

+ (void)initialize;
+ (char)isABCEnabled;
+ (id)newXPCConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)signatureWithDomain:(id)a0 type:(id)a1 subType:(id)a2 subtypeContext:(id)a3 detectedProcess:(id)a4 triggerThresholdValues:(id)a5;
- (char)snapshotWithSignature:(id)a0 delay:(double)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 reply:(id /* block */)a5;
- (id)initWithQueue:(id)a0;
- (id)signatureWithDomain:(id)a0 type:(id)a1 subType:(id)a2 detectedProcess:(id)a3 triggerThresholdValues:(id)a4;
- (char)snapshotWithSignature:(id)a0 duration:(double)a1 event:(id)a2 payload:(id)a3 reply:(id /* block */)a4;
- (char)endSession:(id)a0;
- (char)snapshotWithSignature:(id)a0 withIDSDestinations:(id)a1 validFor:(double)a2 delay:(double)a3 events:(id)a4 payload:(id)a5 actions:(id)a6 reply:(id /* block */)a7;
- (void)getAutoBugCaptureConfiguration:(id /* block */)a0;
- (void)getAllDiagnosticCasesWithReply:(id /* block */)a0;
- (id)_payloadAugmentedWithSandboxExtensionTokensDict:(id)a0;
- (id)actionsDictionary:(id)a0 withIDSDestinations:(id)a1 validFor:(double)a2;
- (char)addSignatureContentForSession:(id)a0 key:(id)a1 content:(id)a2 reply:(id /* block */)a3;
- (char)addToSession:(id)a0 event:(id)a1 payload:(id)a2 reply:(id /* block */)a3;
- (char)addToSession:(id)a0 events:(id)a1 payload:(id)a2 reply:(id /* block */)a3;
- (id)buildDiagnosticIncidentEventForCaseSignature:(id)a0 handledResult:(unsigned long long)a1 dampeningResult:(unsigned long long)a2 closureType:(unsigned long long)a3;
- (char)cancelSession:(id)a0;
- (void)caseSummariesListCallbackWithResult:(id)a0 service:(id)a1 caseSummaryType:(id)a2 count:(unsigned long long)a3 container:(id)a4 reply:(id /* block */)a5;
- (void)casesListCallbackWithResult:(id)a0 service:(id)a1 identifier:(id)a2 count:(unsigned long long)a3 container:(id)a4 reply:(id /* block */)a5;
- (int)checkSignatureValidity:(id)a0;
- (void)commonPreflightChecksForSignature:(id)a0 payload:(id)a1 callback:(id /* block */)a2;
- (void)getDiagnosticCaseSummariesOfType:(id)a0 reply:(id /* block */)a1;
- (void)getDiagnosticCaseSummariesWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (char)getDiagnosticPayloadsForSignatures:(id)a0 reply:(id /* block */)a1;
- (char)groupCaseIdentifierForSignature:(id)a0 reply:(id /* block */)a1;
- (void)parseCaseTriggerResponse:(id)a0;
- (void)purgeAutoBugCaptureFilesWithSubPaths:(id)a0 reply:(id /* block */)a1;
- (void)resetAPIRateLimit;
- (void)resetDailyCaseLimit;
- (void)setupXPCInterface;
- (id)signatureWithDomain:(id)a0 type:(id)a1 subType:(id)a2 originatingProcess:(id)a3 triggerThreshold:(id)a4;
- (char)snapshotWithSignature:(id)a0 delay:(double)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 wantsRemoteCase:(char)a5 reply:(id /* block */)a6;
- (char)snapshotWithSignature:(id)a0 delay:(double)a1 events:(id)a2 payload:(id)a3 reply:(id /* block */)a4;
- (char)snapshotWithSignature:(id)a0 delay:(double)a1 events:(id)a2 payload:(id)a3 wantsRemoteCase:(char)a4 reply:(id /* block */)a5;
- (char)snapshotWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 reply:(id /* block */)a5;
- (char)snapshotWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 wantsRemoteCase:(char)a5 reply:(id /* block */)a6;
- (char)snapshotWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 reply:(id /* block */)a4;
- (char)snapshotWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 wantsRemoteCase:(char)a4 reply:(id /* block */)a5;
- (char)snapshotWithSignature:(id)a0 duration:(double)a1 payload:(id)a2 reply:(id /* block */)a3;
- (char)snapshotWithSignature:(id)a0 withIDSDestinations:(id)a1 validFor:(double)a2 duration:(double)a3 events:(id)a4 payload:(id)a5 actions:(id)a6 reply:(id /* block */)a7;
- (char)startSessionWithSignature:(id)a0 duration:(double)a1 event:(id)a2 payload:(id)a3 reply:(id /* block */)a4;
- (char)startSessionWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 reply:(id /* block */)a5;
- (char)startSessionWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 wantsRemoteCase:(char)a5 reply:(id /* block */)a6;
- (char)startSessionWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 reply:(id /* block */)a4;
- (char)startSessionWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 wantsRemoteCase:(char)a4 reply:(id /* block */)a5;
- (char)startSessionWithSignature:(id)a0 duration:(double)a1 payload:(id)a2 reply:(id /* block */)a3;
- (char)startSessionWithSignature:(id)a0 withIDSDestinations:(id)a1 validFor:(double)a2 duration:(double)a3 events:(id)a4 payload:(id)a5 actions:(id)a6 reply:(id /* block */)a7;
- (void)submitDiagnosticIncidentEventForCaseSignature:(id)a0 handledResult:(unsigned long long)a1 dampeningResult:(unsigned long long)a2 closureType:(unsigned long long)a3;
- (char)triggerRemoteSessionForSignature:(id)a0 caseGroupID:(id)a1 reply:(id /* block */)a2;

@end
