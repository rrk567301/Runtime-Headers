@class NSString;

@interface MFSwiftIMAPTaskManager : NSObject <IMAPTaskManager> {
    void /* unknown type, empty encoding */ persistenceWorkloop;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ makeEngineAndAdaptor;
    void /* unknown type, empty encoding */ _engine;
    void /* unknown type, empty encoding */ _adaptor;
    void /* unknown type, empty encoding */ engineIsolation;
    void /* unknown type, empty encoding */ bodyFetchContext;
}

@property (nonatomic, copy) NSString *defaultIdleMailboxName;
@property (nonatomic, copy) NSString *secondaryIdleMailboxName;
@property (nonatomic, readonly) BOOL connected;
@property (nonatomic) unsigned int firstNewInboxUID;
@property (nonatomic, readonly) BOOL hasActivity;

- (void)terminate:(id /* block */)a0;
- (BOOL)isConnected;
- (BOOL)connectToServer;
- (void)accountDidChange:(id)a0;
- (void)closeAllConnections;
- (BOOL)deleteMailbox:(id)a0;
- (void)addLocalAction:(id)a0;
- (void)checkForNewLocalActions;
- (void)goOffline;
- (id)newBodyFetchContext;
- (void)updateGlobalListOfUserSelectedMailboxes:(id)a0;
- (void)unselectMailboxConnectionsWithName:(id)a0 expunge:(BOOL)a1;
- (void)removeInvalidConnections;
- (void)resetMaximumConnectionCount;
- (BOOL)mailboxIsInSync:(id)a0;
- (BOOL)mailboxIsSyncing:(id)a0;
- (void)syncAccountForceFullSync:(BOOL)a0 userInitiated:(BOOL)a1;
- (void)resyncMailboxWithName:(id)a0;
- (void)cancelMailboxSyncTaskForMailboxName:(id)a0;
- (BOOL)fetchTotalSizeAndMessageCountForMailbox:(id)a0;
- (BOOL)supportsQuotas;
- (void)fetchQuotaRootNamesForMailboxes:(id)a0;
- (void)fetchQuotaForRootName:(id)a0;
- (BOOL)createMailbox:(id)a0;
- (BOOL)renameMailbox:(id)a0 toMailbox:(id)a1;
- (void)localMailboxesDidChange;
- (id)fetchSeparatorChar;
- (BOOL)listingForMailbox:(id)a0 options:(long long)a1 listingInfo:(id)a2;
- (BOOL)subscribedListingForMailbox:(id)a0 options:(long long)a1 listingInfo:(id)a2;
- (id)fetchNamespaces;
- (BOOL)subscribeMailbox:(id)a0;
- (BOOL)unsubscribeMailbox:(id)a0;
- (id)downloadBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 allowPartial:(BOOL)a2 error:(id *)a3;
- (id)downloadHeaderDataForMessage:(id)a0;
- (BOOL)expungeMailbox:(id)a0 ifSelected:(BOOL)a1;
- (void)expungeMailbox:(id)a0;
- (void)expungeUIDs:(id)a0 inMailbox:(id)a1;
- (void)beginPerformingLocalActionsIfNeeded;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)test_tearDown;

@end
