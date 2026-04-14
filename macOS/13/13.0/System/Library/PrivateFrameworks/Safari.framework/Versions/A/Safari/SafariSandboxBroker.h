@class NSString, NSMutableDictionary, NSURL, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface SafariSandboxBroker : WBSUISafariSandboxBroker <SafariSandboxBrokerProtocol> {
    NSMutableDictionary *_unarchivingOperations;
    NSObject<OS_dispatch_group> *_archiveGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedDownloadLocationURLLock;
    NSObject<OS_dispatch_queue> *_downloadWorkQueue;
    NSURL *_downloadMetadataFileURL;
    NSMutableDictionary *_identifiersToDownloadEntries;
}

@property (retain, nonatomic) NSURL *downloadLocationURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedSandboxBrokers;
+ (id)_sharedSandboxBrokerIdentifierWithPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (id)sharedSandboxBrokerWithPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (id)makeSharedSandboxBrokerWithPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (id)_URLsRelatedToURL:(id)a0 containingOriginalURL:(BOOL *)a1;
- (void)issueDevelopModeExtensionWithCompletionHandler:(id /* block */)a0;
- (void)issueRootExtensionWithCompletionHandler:(id /* block */)a0;
- (void)getDownloadLocationURLWithCompletionHandler:(id /* block */)a0;
- (void)setShouldAlwaysPromptForDownloadPath:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)moveDownloadedFilesWithPaths:(id)a0 inDownloadWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)moveDownloadBundleWithIdentifierToTrash:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteUnusedDownloadBundleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateFractionCompleted:(float)a0 forDownloadWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getDownloadBundleURLForDownloadWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearDownloadIdentifiersNotIncludedIn:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeFileWrapperToUniqueFileInDownloadsFolder:(id)a0 shouldSetPrivacySensitiveQuarantineProperties:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)synchronouslyRemoveQuarantineHardAttributeFromFileAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)extractArchiveAtPath:(id)a0 type:(unsigned long long)a1 identifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)cancelUnarchivingOperationWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)migrateResourcesToSandbox:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addFileExtensionToMigratedResources:(id)a0 forURL:(id)a1 migrationType:(unsigned long long)a2 permissions:(long long)a3;
- (BOOL)_canHostWriteFileAtURL:(id)a0;
- (id)_issueSandboxExtension:(const char *)a0 forFileAtURL:(id)a1 flags:(unsigned int)a2;
- (BOOL)_isValidDownloadLocation:(id)a0;
- (id)_defaultDownloadLocationURL;
- (void)_resetDownloadLocationURL;
- (void)createDownloadBundleWithSuggestedFilename:(id)a0 inFolderAtURL:(id)a1 tagNames:(id)a2 allowsOverwrite:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)_createDownloadBundleWithSuggestedFilename:(id)a0 inFolderAtURL:(id)a1 tagNames:(id)a2 allowsOverwrite:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)_moveDownloadedFilesWithPaths:(id)a0 inDownloadWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_moveDownloadBundleWithIdentifierToTrash:(id)a0 completionHandler:(id /* block */)a1;
- (void)_deleteUnusedDownloadBundleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateFractionCompleted:(float)a0 forDownloadWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_getDownloadBundleURLForDownloadWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_clearDownloadIdentifiersNotIncludedIn:(id)a0 completionHandler:(id /* block */)a1;
- (id)_downloadEntryForIdentifier:(id)a0;
- (id)_urlForDownloadBundleInDirectory:(id)a0 withFilename:(id)a1 error:(id *)a2;
- (id)_legalFilenameForDirectoryURL:(id)a0 filename:(id)a1 error:(id *)a2;
- (id)_sandboxBrokerSettingsDirectoryURL;
- (void)_loadDownloadEntriesIfNeeded;
- (id)_entriesOfClass:(Class)a0 forDictionaryRepresentations:(id)a1;
- (void)_saveSandboxMetadata;
- (id)_dictionaryRepresentationsForEntries:(id)a0;
- (BOOL)_isDeveloperModeEnabled;
- (id)_renameItemAtURL:(id)a0 withOriginalFilename:(id)a1 beforeMovingToURL:(id)a2;
- (BOOL)_replaceExistingItemAtURL:(id)a0 withItemAtURL:(id)a1 appendingTags:(id)a2;
- (BOOL)_isWebArchiveData:(id)a0;
- (id)_migrateDownloadFolderURLInMigrationResources:(id)a0;

@end
