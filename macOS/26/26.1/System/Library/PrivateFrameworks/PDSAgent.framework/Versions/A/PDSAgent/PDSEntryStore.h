@protocol PDSCDCache, PDSEntryStoreDelegate;

@interface PDSEntryStore : NSObject

@property (retain, nonatomic) id<PDSCDCache> cache;
@property (weak, nonatomic) id<PDSEntryStoreDelegate> delegate;

- (BOOL)_permitTransitionFromState:(unsigned char)a0 toState:(unsigned char)a1;
- (id)entriesWithClientID:(id)a0;
- (BOOL)hasPendingEntries;
- (id)entriesForUser:(id)a0;
- (id)activeUsersWithClientID:(id)a0;
- (BOOL)hasActiveEntries;
- (BOOL)updateAllEntriesWithState:(unsigned char)a0 toState:(unsigned char)a1 withError:(id *)a2;
- (id)entriesForUser:(id)a0 withClientID:(id)a1;
- (BOOL)deleteEntriesForUser:(id)a0 withState:(unsigned char)a1 withError:(id *)a2;
- (id)activeUsers;
- (id)initWithCache:(id)a0;
- (BOOL)storeEntries:(id)a0 deleteEntries:(id)a1 withError:(id *)a2;
- (id)users;
- (id)usersWithClientID:(id)a0;
- (void).cxx_destruct;
- (BOOL)deleteEntry:(id)a0 withError:(id *)a1;
- (BOOL)updateEntryState:(unsigned char)a0 forUser:(id)a1 clientID:(id)a2 withError:(id *)a3;
- (BOOL)storeEntry:(id)a0 withError:(id *)a1;
- (id)entries;

@end
