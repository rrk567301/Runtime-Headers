@class NSString, HDProfile, NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HDAttachmentManager : NSObject <HDProfileReadyObserver, HDAnalyticsSubmissionCoordinatorDelegate, HDCloudSyncAttachmentManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_redownloadQueue;
    HDProfile *_profile;
    NSMutableDictionary *_schemaProvidersByIdentifier;
    NSString *_filesDirectoryPath;
    NSString *_unconfirmedFilesDirectoryPath;
}

@property (copy, nonatomic) id /* block */ unitTestdidCompleteFileCleanup;
@property (readonly, copy, nonatomic) NSURL *filesDirectoryURL;
@property (readonly, copy, nonatomic) NSURL *unconfirmedFilesDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)schemaProviderClasses;
- (void)profileDidBecomeReady:(id)a0;
- (id)addReferenceWithAttachment:(id)a0 toObjectWithIdentifier:(id)a1 schemaIdentifier:(id)a2 metadata:(id)a3 error:(id *)a4;
- (BOOL)insertAttachmentReferences:(id)a0 attachment:(id)a1 fileHandle:(id)a2 encrypt:(BOOL)a3 error:(id *)a4;
- (BOOL)removeAttachmentReferencesWithObjectIdentifier:(id)a0 schemaIdentifier:(id)a1 transaction:(id)a2 error:(id *)a3;
- (BOOL)attachmentReferencesForAttachment:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (id)fileHandleForAttachment:(id)a0 error:(id *)a1;
- (void)readerForAttachment:(id)a0 completion:(id /* block */)a1;
- (id)addAttachmentWithName:(id)a0 contentTypeIdentifier:(id)a1 fileHandle:(id)a2 toObjectWithIdentifier:(id)a3 schemaIdentifier:(id)a4 attachmentMetadata:(id)a5 referenceMetadata:(id)a6 error:(id *)a7;
- (BOOL)attachmentReferencesForObjectIdentifier:(id)a0 schemaIdentifier:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
- (long long)supportedSchemaVersionForReference:(id)a0;
- (id)schemaProviderForIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeAttachmentReferences:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)runMaintenanceOperationIfNeeded;
- (BOOL)removeAttachmentReferencesWithObjectIdentifier:(id)a0 schemaIdentifier:(id)a1 error:(id *)a2;
- (BOOL)insertAttachmentReferences:(id)a0 attachment:(id)a1 fileData:(id)a2 encrypt:(BOOL)a3 error:(id *)a4;
- (id)init;
- (BOOL)readAuthorizationForObjectIdentifier:(id)a0 schemaIdentifier:(id)a1 client:(id)a2 error:(id *)a3;
- (void)_cleanupAttachmentsFolder;
- (void)fileHandleForAttachment:(id)a0 completion:(id /* block */)a1;
- (BOOL)writeAuthorizationForObjectIdentifier:(id)a0 schemaIdentifier:(id)a1 client:(id)a2 error:(id *)a3;
- (void)reportDailyAnalyticsWithCoordinator:(id)a0 completion:(id /* block */)a1;
- (BOOL)insertAttachmentReferences:(id)a0 attachment:(id)a1 error:(id *)a2;
- (void)dealloc;
- (BOOL)replaceReferencesWithObjectIdentifier:(id)a0 replacementIdentifier:(id)a1 schemaIdentifier:(id)a2 error:(id *)a3;
- (id)_addReferenceWithAttachment:(id)a0 toObjectWithIdentifier:(id)a1 schemaIdentifier:(id)a2 metadata:(id)a3 error:(id *)a4;
- (BOOL)removeAllReferencesWithAttachmentIdentifier:(id)a0 objectIdentifier:(id)a1 schemaIdentifier:(id)a2 error:(id *)a3;

@end
