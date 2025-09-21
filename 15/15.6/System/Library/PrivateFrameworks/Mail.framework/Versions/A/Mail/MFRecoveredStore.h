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
- (void)_cancelAutosave;
- (char)_importMessagesWithBlock:(id /* block */)a0 includeConversationID:(char)a1;
- (void)_setNeedsAutosave;
- (char)importMessagesWithBlock:(id /* block */)a0;
- (id)initWithMailbox:(id)a0 readOnly:(char)a1 createEmptyStore:(char)a2;
- (id)initWithMailbox:(id)a0 readOnly:(char)a1 pathsToImport:(id)a2;
- (id)messagesForImporterWithConversationID:(char)a0;
- (void)queueSaveChangesInvocation;

@end
