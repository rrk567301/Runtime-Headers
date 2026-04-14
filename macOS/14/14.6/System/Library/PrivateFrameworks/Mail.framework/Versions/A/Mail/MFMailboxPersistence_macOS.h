@class NSString, EDPersistenceDatabase, NSObject;
@protocol OS_os_log;

@interface MFMailboxPersistence_macOS : EDMailboxPersistence <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)statistics;
- (id)mailboxDatabaseIDsForMailboxObjectIDs:(id)a0 createIfNecessary:(BOOL)a1;
- (id)mailboxesFromLegacyMailboxes:(id)a0;
- (id)initWithMailboxProvider:(id)a0 database:(id)a1;

@end
