@class EDPersistenceDatabase;

@interface MFMailboxPersistence_macOS : EDMailboxPersistence

@property (readonly, nonatomic) EDPersistenceDatabase *database;

- (void).cxx_destruct;
- (id)mailboxDatabaseIDsForMailboxObjectIDs:(id)a0 createIfNecessary:(BOOL)a1;
- (id)initWithMailboxProvider:(id)a0 database:(id)a1;

@end
