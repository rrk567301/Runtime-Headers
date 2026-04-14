@class NSObject, NSString, NSMutableDictionary, ABCPersistentStoreController, NSMutableArray, ABCFileCleaner;
@protocol OS_dispatch_queue;

@interface DiagnosticStorageManager : NSObject <SymptomsFileCleanerDelegate, DiagnosticCaseManagerStorageDelegate> {
    unsigned long long _lastCalculatedDiskUsageSize;
    NSMutableArray *_casesSortedByDate;
    NSMutableDictionary *_payloadsByCaseID;
    NSObject<OS_dispatch_queue> *_queue;
    ABCPersistentStoreController *_storeController;
    NSString *_logArchivePath;
}

@property (retain, nonatomic) ABCFileCleaner *abcCleaner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_sortedAutoBugCaptureDiskUsageByCase:(id /* block */)a0;
- (void)_purgeCasesWithCaseIDs:(id)a0;
- (void)_calculatePurgableSizeForRequestedPurgeSize:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)invalidateDiskUsageStatistics;
- (unsigned long long)performPeriodicPurge;
- (void)removeCaseStorageAndAttachmentsForCasesWithUUIDs:(id)a0;
- (unsigned long long)deleteAttachmentFiles:(id)a0;
- (void)purgeAttachmentsForAllCases;
- (void)purgeAttachmentsAtPaths:(id)a0;
- (void)_performSizedPurge:(unsigned long long)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithPersistentStoreController:(id)a0 logArchiveDirectory:(id)a1;
- (void)cleanupCasesAfterACentralizedCacheDeletePurgeEvent:(id)a0;
- (void)_inspectAutoBugCaptureDiskUsage:(id /* block */)a0;
- (unsigned long long)performPurgeToMeetDiskUsageLimit:(unsigned long long)a0 calculateOnly:(BOOL)a1;
- (void)deleteAttachmentsForCases:(id)a0;
- (void)fileCleanupComplete;
- (void)didSaveDiagnosticCases;
- (unsigned long long)allowableDiskUsageSize;
- (void)_autoBugCaptureDiskUsageSize:(id /* block */)a0;
- (void)purgeDEPayloadForCase:(id)a0;
- (void)deleteAttachmentsAtPaths:(id)a0;

@end
