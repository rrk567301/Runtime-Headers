@class NSString, EDMessagePersistence, NSURL, EDAttachmentPersistence, NSObject;
@protocol OS_os_log, EFScheduler;

@interface EDAttachmentPersistenceManager : NSObject <EFLoggable, EDMessageChangeHookResponder> {
    EDAttachmentPersistence *_attachmentPersistence;
    EDMessagePersistence *_messagePersistence;
    NSURL *_tempDirectoryForArchiveAttachments;
    id<EFScheduler> _synapseAttributesScheduler;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attachmentDirectoryURLWithBasePath:(id)a0;
+ (id)createFilenameForAttachmentName:(id)a0;
+ (void)removeSynapseAttachmentAttributesForMessages:(id)a0;

- (void).cxx_destruct;
- (id)addSynapseAttributesToAttachmentWithURL:(id)a0 contentType:(id)a1 usingGenerator:(id /* block */)a2;
- (id)allAttachmentsInfoForGlobalMessageIDs:(id)a0 basePath:(id)a1;
- (id)attachmentDirectoryURLForMessageID:(long long)a0 basePath:(id)a1;
- (id)attachmentURLForGlobalMessageID:(long long)a0 mimePartNumber:(id)a1 basePath:(id)a2;
- (id)attachmentURLForGlobalMessageID:(long long)a0 remoteURL:(id)a1 basePath:(id)a2;
- (id)attachmentURLForMessageAttachmentID:(id)a0 basePath:(id)a1;
- (id)attachmentURLsForGlobalMessageIDs:(id)a0;
- (id)createAttachmentFileWriterForAttachmentMetadata:(id)a0 basePath:(id)a1 downloadDate:(id)a2 queue:(id)a3 compressionQueue:(id)a4 completion:(id /* block */)a5;
- (id)initWithDatabase:(id)a0 messagePersistence:(id)a1;
- (void)insertMimePartAttachments:(id)a0 forGlobalMessageID:(long long)a1;
- (void)isDeletingMessages:(id)a0;
- (char)persistAttachment:(id)a0 attachmentMetadata:(id)a1 basePath:(id)a2 error:(id *)a3;
- (char)persistAttachmentMetadata:(id)a0;
- (char)persistAttachmentWithURL:(id)a0 attachmentMetadata:(id)a1 basePath:(id)a2 error:(id *)a3;
- (void)persistenceDidDeleteMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceIsDeletingMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceWillDeleteMessages:(id)a0;
- (void)willDeleteAttachmentsForMessages:(id)a0;

@end
