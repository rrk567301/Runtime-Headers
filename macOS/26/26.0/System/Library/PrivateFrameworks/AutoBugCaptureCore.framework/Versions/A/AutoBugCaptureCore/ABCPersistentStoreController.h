@class NSObject, AnalyticsWorkspace;
@protocol OS_dispatch_queue, ABCPersistentStoreControllerDelegate;

@interface ABCPersistentStoreController : NSObject {
    AnalyticsWorkspace *_workspace;
    BOOL workspaceReady;
    AnalyticsWorkspace *tempWorkspace;
    NSObject<OS_dispatch_queue> *storeQueue;
}

@property (readonly, nonatomic) AnalyticsWorkspace *workspace;
@property (weak, nonatomic) id<ABCPersistentStoreControllerDelegate> delegate;

- (void)shutdown;
- (void)save;
- (BOOL)prepareWorkspaceWithDirectoryPath:(id)a0;
- (void)removeAllCaseStorages;
- (void)cleanupUploadRecord;
- (void)removeCaseStorageWithID:(id)a0;
- (void)caseAttachmentsForDiagnosticCaseIDs:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (id)caseStorageAnalytics;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (id)prepareDataDirectoryWithName:(id)a0 containerPath:(id)a1;
- (id)initWithDirectory:(id)a0;
- (void)save:(BOOL)a0;
- (id)workspace;
- (id)caseSummaryAnalytics;
- (void)cleanupDiagnosticCaseSummary;
- (id)init;
- (void)caseAttachmentsForAllDiagnosticCasesWithQueue:(id)a0 reply:(id /* block */)a1;
- (void)cleanupDiagnosticCaseUsage;
- (void)cleanupDiagnosticCaseStorage;
- (void)removeCaseStoragesWithUUIDs:(id)a0;
- (id)uploadRecordAnalytics;
- (id)caseUsageAnalytics;
- (void)removeCaseStoragesWithCaseIDs:(id)a0;
- (void).cxx_destruct;

@end
