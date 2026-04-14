@class NSArray;

@interface MFRecoveredStore : MFMessageStore

@property (readonly, copy, nonatomic) NSArray *pathsToImport;
@property (readonly, copy, nonatomic) NSArray *messagesForImporter;
@property (readonly, nonatomic) unsigned long long approximateMessageCount;

- (id)init;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)saveChanges;
- (id)initWithAccount:(id)a0;
- (void)updateMetadata;
- (id)initWithMailbox:(id)a0 readOnly:(BOOL)a1 createEmptyStore:(BOOL)a2;
- (void)_setNeedsAutosave;
- (void)_cancelAutosave;
- (void)queueSaveChangesInvocation;
- (id)initWithMailbox:(id)a0 readOnly:(BOOL)a1 pathsToImport:(id)a2;
- (id)messagesForImporterWithConversationID:(BOOL)a0;
- (BOOL)importMessagesWithBlock:(id /* block */)a0;
- (BOOL)_importMessagesWithBlock:(id /* block */)a0 includeConversationID:(BOOL)a1;

@end
