@protocol PDSCDCache, PDSEntryStoreDelegate;

@interface PDSEntryStore : NSObject

@property (retain, nonatomic) id<PDSCDCache> cache;
@property (weak, nonatomic) id<PDSEntryStoreDelegate> delegate;

- (void).cxx_destruct;
- (id)users;
- (id)entries;
- (id)initWithCache:(id)a0;
- (char)hasPendingEntries;
- (id)entriesForUser:(id)a0;
- (char)_permitTransitionFromState:(unsigned char)a0 toState:(unsigned char)a1;
- (id)activeUsers;
- (id)activeUsersWithClientID:(id)a0;
- (char)deleteEntriesForUser:(id)a0 withState:(unsigned char)a1 withError:(id *)a2;
- (char)deleteEntry:(id)a0 withError:(id *)a1;
- (id)entriesForUser:(id)a0 withClientID:(id)a1;
- (id)entriesWithClientID:(id)a0;
- (char)hasActiveEntries;
- (char)storeEntries:(id)a0 deleteEntries:(id)a1 withError:(id *)a2;
- (char)storeEntry:(id)a0 withError:(id *)a1;
- (char)updateAllEntriesWithState:(unsigned char)a0 toState:(unsigned char)a1 withError:(id *)a2;
- (char)updateEntryState:(unsigned char)a0 forUser:(id)a1 clientID:(id)a2 withError:(id *)a3;
- (id)usersWithClientID:(id)a0;

@end
