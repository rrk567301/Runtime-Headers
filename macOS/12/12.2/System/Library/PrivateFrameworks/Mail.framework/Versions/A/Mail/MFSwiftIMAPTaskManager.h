@class NSString;

@interface MFSwiftIMAPTaskManager : NSObject <IMAPTaskManager> {
    void /* unknown type, empty encoding */ serializationQueue;
    void /* unknown type, empty encoding */ persistenceWorkloop;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ engine;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ persistence;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ bodyFetchContext;
    void /* unknown type, empty encoding */ defaultIdleMailboxName;
    void /* unknown type, empty encoding */ secondaryIdleMailboxName;
    void /* unknown type, empty encoding */ maximumNetworkHandlers;
    void /* unknown type, empty encoding */ fetchChunkSize;
}

@property (nonatomic, copy) NSString *defaultIdleMailboxName;
@property (nonatomic, copy) NSString *secondaryIdleMailboxName;
@property (nonatomic, readonly) BOOL connected;
@property (nonatomic) void /* unknown type, empty encoding */ firstNewInboxUID;
@property (nonatomic, readonly) BOOL hasActivity;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (void)terminate:(id /* block */)a0;
- (id)initWithAccount:(id)a0;
- (BOOL)connectToServer;
- (void)goOffline;
- (void)closeAllConnections;
- (BOOL)deleteMailbox:(id)a0;
- (void)checkForNewLocalActions;
- (void)addLocalAction:(id)a0;
- (id)newBodyFetchContext;
- (id)initWithAccount:(id)a0 socketURL:(id)a1;
- (void)resetMaximumConnectionCount;
- (BOOL)listingForMailbox:(id)a0 options:(long long)a1 listingInfo:(id)a2;
- (void)unselectMailboxConnectionsWithName:(id)a0 expunge:(BOOL)a1;
- (BOOL)expungeMailbox:(id)a0 ifSelected:(BOOL)a1;
- (BOOL)createMailbox:(id)a0;
- (void)removeInvalidConnections;
- (void)syncAccountForceFullSync:(BOOL)a0 userInitiated:(BOOL)a1;
- (id)fetchSeparatorChar;
- (void)beginPerformingLocalActionsIfNeeded;
- (BOOL)subscribedListingForMailbox:(id)a0 options:(long long)a1 listingInfo:(id)a2;
- (id)fetchNamespaces;
- (BOOL)subscribeMailbox:(id)a0;
- (BOOL)unsubscribeMailbox:(id)a0;
- (BOOL)renameMailbox:(id)a0 toMailbox:(id)a1;
- (BOOL)fetchTotalSizeAndMessageCountForMailbox:(id)a0;
- (BOOL)supportsQuotas;
- (void)fetchQuotaRootNamesForMailboxes:(id)a0;
- (void)fetchQuotaForRootName:(id)a0;
- (BOOL)mailboxIsInSync:(id)a0;
- (BOOL)mailboxIsSyncing:(id)a0;
- (void)cancelMailboxSyncTaskForMailboxName:(id)a0;
- (void)expungeUIDs:(id)a0 inMailbox:(id)a1;
- (void)expungeMailbox:(id)a0;
- (id)downloadBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 allowPartial:(BOOL)a2 error:(id *)a3;
- (id)downloadHeaderDataForMessage:(id)a0;
- (void)resyncMailboxWithName:(id)a0;
- (void)updateGlobalListOfUserSelectedMailboxes:(id)a0;

@end
