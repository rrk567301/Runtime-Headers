@interface MFGmailLabelStore : MFLibraryStore

- (id)lastSyncDate;
- (id)lastMessageWithHeaders:(id)a0 inMailbox:(id)a1;
- (void)async_setFlagsFromDictionary:(id)a0 forMessages:(id)a1;
- (void)deleteMessages:(id)a0 moveToTrash:(BOOL)a1;
- (id)setFlagsFromDictionary:(id)a0 forMessages:(id)a1;
- (id)moveMessages:(id)a0 destinationMailboxURL:(id)a1 userInitiated:(BOOL)a2;
- (void)_messagesAddedToLibrary:(id)a0;
- (void)deleteMessagesOlderThanNumberOfDays:(long long)a0 compact:(BOOL)a1;
- (BOOL)allowsOverwrite;
- (id)_allMailStore;
- (long long)_removeOurLabelFromMessages:(id)a0;
- (long long)undoAppendOfLibraryIDs:(id)a0;

@end
