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
- (void)save:(BOOL)a0;
- (id)initWithDirectory:(id)a0;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (void)removeCaseStoragesWithCaseIDs:(id)a0;
- (void)cleanupDiagnosticCaseStorage;
- (id)uploadRecordAnalytics;
- (id)caseSummaryAnalytics;
- (void)cleanupUploadRecord;
- (void)caseAttachmentsForAllDiagnosticCasesWithQueue:(id)a0 reply:(id /* block */)a1;
- (id)workspace;
- (void)cleanupDiagnosticCaseSummary;
- (void)removeCaseStoragesWithUUIDs:(id)a0;
- (void).cxx_destruct;
- (void)removeCaseStorageWithID:(id)a0;
- (id)caseStorageAnalytics;
- (void)removeAllCaseStorages;
- (void)cleanupDiagnosticCaseUsage;
- (id)prepareDataDirectoryWithName:(id)a0 containerPath:(id)a1;
- (void)save;
- (BOOL)prepareWorkspaceWithDirectoryPath:(id)a0;
- (void)caseAttachmentsForDiagnosticCaseIDs:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (id)init;
- (id)caseUsageAnalytics;

@end
