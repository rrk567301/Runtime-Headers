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
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (void)save:(BOOL)a0;
- (void)removeCaseStoragesWithCaseIDs:(id)a0;
- (id)uploadRecordAnalytics;
- (id)initWithDirectory:(id)a0;
- (void)save;
- (void)cleanupDiagnosticCaseUsage;
- (id)caseStorageAnalytics;
- (BOOL)prepareWorkspaceWithDirectoryPath:(id)a0;
- (void)cleanupUploadRecord;
- (id)caseUsageAnalytics;
- (void)cleanupDiagnosticCaseSummary;
- (void).cxx_destruct;
- (void)removeAllCaseStorages;
- (void)caseAttachmentsForAllDiagnosticCasesWithQueue:(id)a0 reply:(id /* block */)a1;
- (void)cleanupDiagnosticCaseStorage;
- (id)workspace;
- (id)init;
- (id)caseSummaryAnalytics;
- (id)prepareDataDirectoryWithName:(id)a0 containerPath:(id)a1;
- (void)removeCaseStoragesWithUUIDs:(id)a0;
- (void)caseAttachmentsForDiagnosticCaseIDs:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (void)removeCaseStorageWithID:(id)a0;

@end
