@class STYURLSessionHelper, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface STYDiagnosticUploader : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    STYURLSessionHelper *_eventReportingSession;
    STYURLSessionHelper *_diagnosticUploadSession;
    NSMutableDictionary *_pendingFiles;
}

@property (readonly, nonatomic) unsigned long long pendingReportCount;

+ (id)sharedDiagnosticUploader;
+ (id)_createRequestFileForReport:(id)a0 withDiagnostic:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)uploadReport:(id)a0 withDiagnostic:(id)a1;
- (id)_eventReportingSession;
- (id)_diagnosticUploadSession;
- (void)_createSessions;
- (void)_loadPendingFiles;
- (BOOL)_addPendingDiagnosticFile:(id)a0;
- (void)_uploadDiagnostic:(id)a0;
- (void)_session:(id)a0 task:(id)a1 didCompleteWithResponse:(id)a2 error:(id)a3;

@end
