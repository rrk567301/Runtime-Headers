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

- (void)save;
- (void)shutdown;
- (void)save:(BOOL)a0;
- (void)removeAllCaseStorages;
- (void)removeCaseStorageWithID:(id)a0;
- (id)uploadRecordAnalytics;
- (id)initWithDirectory:(id)a0;
- (BOOL)prepareWorkspaceWithDirectoryPath:(id)a0;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (id)init;
- (id)caseSummaryAnalytics;
- (id)prepareDataDirectoryWithName:(id)a0 containerPath:(id)a1;
- (void)cleanupDiagnosticCaseStorage;
- (void)cleanupUploadRecord;
- (id)workspace;
- (void)caseAttachmentsForAllDiagnosticCasesWithQueue:(id)a0 reply:(id /* block */)a1;
- (void)caseAttachmentsForDiagnosticCaseIDs:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)removeCaseStoragesWithUUIDs:(id)a0;
- (id)caseStorageAnalytics;
- (id)caseUsageAnalytics;
- (void)cleanupDiagnosticCaseSummary;
- (void)cleanupDiagnosticCaseUsage;
- (void)removeCaseStoragesWithCaseIDs:(id)a0;

@end
