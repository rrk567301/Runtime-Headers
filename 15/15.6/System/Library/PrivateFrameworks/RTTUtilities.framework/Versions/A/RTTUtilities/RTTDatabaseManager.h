@class CHManager;

@interface RTTDatabaseManager : HCDatabaseManager {
    CHManager *_callHistoryManager;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)containerIdentifier;
- (void)logMessage:(id)a0;
- (id)cloudKitContainer;
- (char)contactIsTTYContact:(id)a0;
- (id)managedObjectModelName;
- (void)_callHistoryDBDidChange:(id)a0;
- (void)callHistoryDBDidChange:(id)a0;
- (char)contactIDIsTTYContact:(id)a0;
- (char)contactPathWasUsedForTTY:(id)a0;
- (id)conversationForCallUID:(id)a0;
- (char)deleteConversationWithCallUID:(id)a0;
- (char)deleteConversationsWithCallUIDs:(id)a0;
- (char)saveConversation:(id)a0;

@end
