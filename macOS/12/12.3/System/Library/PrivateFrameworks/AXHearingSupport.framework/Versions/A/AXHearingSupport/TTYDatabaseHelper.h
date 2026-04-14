@class NSManagedObjectContext, AXCloudKitHelper, CHManager;

@interface TTYDatabaseHelper : NSObject {
    struct sqlite3 { } *_database;
    CHManager *_callHistoryManager;
    AXCloudKitHelper *_cloudKitHelper;
}

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

+ (id)sharedHelper;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setupDatabase;
- (BOOL)contactIsTTYContact:(id)a0;
- (id)conversationForCallUID:(id)a0;
- (BOOL)saveConversation:(id)a0;
- (BOOL)deleteConversationWithCallUID:(id)a0;
- (BOOL)contactIDIsTTYContact:(id)a0;
- (BOOL)contactPathWasUsedForTTY:(id)a0;
- (void)callHistoryDBDidChange:(id)a0;
- (BOOL)deleteConversationsWithCallUIDs:(id)a0;
- (BOOL)saveIfPossible;
- (void)storesWillChange:(id)a0;
- (void)contentDidUpdate:(id)a0;
- (id)ttyDirectoryPath;
- (id)ttyDatabaseFilePath;

@end
