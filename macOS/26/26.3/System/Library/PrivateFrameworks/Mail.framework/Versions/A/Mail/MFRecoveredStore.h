@class NSArray;

@interface MFRecoveredStore : MFMessageStore

@property (readonly, copy, nonatomic) NSArray *pathsToImport;
@property (readonly, copy, nonatomic) NSArray *messagesForImporter;
@property (readonly, nonatomic) unsigned long long approximateMessageCount;

- (id)initWithAccount:(id)a0;
- (id)init;
- (void)updateMetadata;
- (void)_setNeedsAutosave;
- (void).cxx_destruct;
- (id)initWithMailbox:(id)a0 readOnly:(BOOL)a1 createEmptyStore:(BOOL)a2;
- (void)_cancelAutosave;
- (void)_invalidate;
- (void)saveChanges;
- (BOOL)_importMessagesWithBlock:(id /* block */)a0 includeConversationID:(BOOL)a1;
- (BOOL)importMessagesWithBlock:(id /* block */)a0;
- (id)initWithMailbox:(id)a0 readOnly:(BOOL)a1 pathsToImport:(id)a2;
- (id)messagesForImporterWithConversationID:(BOOL)a0;
- (void)queueSaveChangesInvocation;

@end
