@class NSDictionary, NSURL, NSFileHandle, PLJournalFile;

@interface PLJournal : NSObject <PLJournalPayloadEnumeration> {
    Class _payloadClass;
    char _hasMetadata;
    PLJournalFile *_snapshotJournal;
    PLJournalFile *_changeJournal;
    unsigned char _snapshotMode;
    NSFileHandle *_fileHandleForAppendingUpdates;
}

@property (readonly, nonatomic) PLJournalFile *pendingSnapshotJournal;
@property (readonly, nonatomic) PLJournalFile *pendingChangeJournal;
@property (readonly, nonatomic) PLJournalFile *prepareMarker;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) PLJournalFile *snapshotJournal;
@property (readonly, nonatomic) PLJournalFile *changeJournal;
@property (readonly, nonatomic) Class payloadClass;

+ (char)_finishFullSnapshotForBaseURL:(id)a0 snapshotSucceeded:(char)a1 snapshotMode:(unsigned char)a2 journals:(id)a3 error:(id *)a4;
+ (char)_performSnapshotsForBaseURL:(id)a0 snapshotMode:(unsigned char)a1 payloadClasses:(id)a2 snapshotJournalBlock:(id /* block */)a3 createOnlyIfNecessary:(char)a4 error:(id *)a5;
+ (char)appendSnapshotsForBaseURL:(id)a0 payloadClasses:(id)a1 snapshotJournalBlock:(id /* block */)a2 error:(id *)a3;
+ (char)createSnapshotFinishMarkerForBaseURL:(id)a0 error:(id *)a1;
+ (char)createSnapshotsForBaseURL:(id)a0 payloadClasses:(id)a1 snapshotJournalBlock:(id /* block */)a2 createOnlyIfNecessary:(char)a3 error:(id *)a4;
+ (id)journalURLForBaseURL:(id)a0 name:(id)a1 journalType:(id)a2;
+ (id)metadataURLForBaseURL:(id)a0 payloadClassId:(id)a1 pending:(char)a2;
+ (char)recoverJournalsIfNecessaryForBaseURL:(id)a0 payloadClasses:(id)a1 error:(id *)a2;
+ (char)removeSnapshotFinishMarkerForBaseURL:(id)a0 error:(id *)a1;
+ (char)snapshotFinishMarkerExistsForBaseURL:(id)a0;
+ (id)snapshotFinishMarkerURLForBaseURL:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)currentPayloadVersionWithError:(id *)a0;
- (char)_finishSnapshotWithMode:(unsigned char)a0 snapshotSuccess:(char)a1 error:(id *)a2;
- (char)_isPendingJournalAuthoritative;
- (id)_payloadTooNewErrorWithPayloadVersion:(long long)a0;
- (char)_performSnapshotWithMode:(unsigned char)a0 usingNextEntryBlock:(id /* block */)a1 createOnlyIfNecessary:(char)a2 error:(id *)a3;
- (char)_prepareForSnapshotWithMode:(unsigned char)a0 error:(id *)a1;
- (id)_readMetadataPending:(char)a0;
- (char)_recoverJournalWithError:(id *)a0;
- (char)_removeMetadataPending:(char)a0 error:(id *)a1;
- (char)_replaceMetadataWithPendingMetadataError:(id *)a0;
- (char)_updateMetadataWithMetadata:(id)a0 replace:(char)a1 pending:(char)a2 error:(id *)a3;
- (char)appendChangeEntries:(id)a0 error:(id *)a1;
- (char)appendChangeEntryAfterPrepare:(id)a0 error:(id *)a1;
- (char)appendSnapshotUsingNextEntryBlock:(id /* block */)a0 error:(id *)a1;
- (char)appendUpdatePayloadWithPayloadID:(id)a0 rawAttributes:(id)a1 error:(id *)a2;
- (char)coalesceChangesToSnapshotWithError:(id *)a0;
- (unsigned long long)countOfInsertEntriesWithError:(id *)a0;
- (char)createSnapshotUsingNextPayloadBlock:(id /* block */)a0 createOnlyIfNecessary:(char)a1 error:(id *)a2;
- (char)enumerateEntriesUsingBlock:(id /* block */)a0 decodePayload:(char)a1 error:(id *)a2;
- (char)enumeratePayloadsUsingBlock:(id /* block */)a0 error:(id *)a1;
- (char)finishAppendChangeEntriesWithError:(id *)a0;
- (char)finishCreateSnapshot:(char)a0 error:(id *)a1;
- (id)initWithBaseURL:(id)a0 name:(id)a1 payloadClass:(Class)a2 hasMetadata:(char)a3;
- (id)initWithBaseURL:(id)a0 payloadClass:(Class)a1;
- (id)metadataURLPending:(char)a0;
- (char)prepareForAppendChangeEntriesWithError:(id *)a0;
- (char)prepareForCreateSnapshotWithError:(id *)a0;
- (char)removeJournalFilesWithError:(id *)a0;
- (void)removeMetadata;
- (char)snapshotJournalFileSize:(unsigned long long *)a0 changeJournalFileSize:(unsigned long long *)a1 error:(id *)a2;

@end
